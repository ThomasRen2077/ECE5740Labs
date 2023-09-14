//      // verilator_coverage annotation
        //=========================================================================
        // Integer Multiplier Variable-Latency Implementation
        //=========================================================================
        
        `ifndef LAB1_IMUL_INT_MUL_ALT_V
        `define LAB1_IMUL_INT_MUL_ALT_V
        
        `include "vc/trace.v"
        `include "vc/arithmetic.v"
        
        
        // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        // Define datapath and control unit here.
        // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
        //=========================================================================
        // Integer Multiplier Variable-Latency Implementation
        //=========================================================================
        
        module lab1_imul_IntMulAlt
        (
          input  logic        clk,
          input  logic        reset,
        
          input  logic        istream_val,
          output logic        istream_rdy,
          input  logic [63:0] istream_msg,
        
          output logic        ostream_val,
          input  logic        ostream_rdy,
          output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        typedef enum logic [1:0] {IDLE, CALC, DONE} statetype;
          statetype state, nextstate;
        
          logic [31:0] a;
          logic [31:0] b;
          //logic [7:0]  counter;
          logic [31:0] next_a;
          logic [31:0] next_b;
          logic [31:0] next_ostream_msg;
          logic        next_ostream_val;
          logic [31:0] add_result;
          logic        finish;
          logic        next_finish;
          logic[4:0] i;
        
          vc_SimpleAdder #(32) Add(ostream_msg, a << i, add_result);
        
          
        
          //state_register
 001002   always_ff@(posedge clk) begin
 000007     if(reset) begin
 000007       state <= IDLE;
        
            end
 000995     else      begin 
 000146       if(state == IDLE) begin
        
 000146           a <= next_a;
 000146           b <= next_b;
 000146           ostream_msg <= next_ostream_msg;
 000146           ostream_val <= next_ostream_val;
        
 000146           finish <= 0;
        
 000146           istream_rdy <= 1;
 000056           if(istream_val) istream_rdy <= 0;
        
              end
 000104       else if(state == CALC) begin  
        
 000745           a <= next_a;
 000745           b <= next_b;
 000745           ostream_msg <= next_ostream_msg;
 000745           ostream_val <= next_ostream_val;
        
 000745           finish <= next_finish;
        
 000745           istream_rdy <= 0;
              end
 000104       else begin
        
 000104         ostream_val <= next_ostream_val;
        
        
 000048         if(ostream_val && ostream_rdy) begin
 000056           finish <= 0;
 000056           istream_rdy <= 1;
                end
              end
        
 000995       state <= nextstate;
            end
          end
        
          //next_state_logic
          // always_comb
          //   case(state)
          //     IDLE: if(istream_val)                 nextstate = CALC;
          //           else                            nextstate = IDLE;
          //     CALC: if(finish)                      nextstate = DONE;
          //           else                            nextstate = CALC;
          //     DONE: if(ostream_rdy)                 nextstate = IDLE;
          //           else                            nextstate = DONE;
          //     default:                              nextstate = IDLE;
          //   endcase
        
        
        // next_state_logic_using_if_else
 001535       always_comb
 000252       if(state == IDLE) begin
 000056         if(istream_val)                 nextstate = CALC;
 000196         else                            nextstate = IDLE;
              end
 000160       else if(state == CALC) begin
 000084         if(finish)                      nextstate = DONE;
 001039         else                            nextstate = CALC;
              end
 000160       else begin
 000048         if(ostream_rdy)                 nextstate = IDLE;
 000048         else                            nextstate = DONE;
              end
        
        
        
          //output_logic
        
 002083   always_comb begin
        
 002083       next_a = a;
 002083       next_b = b;
 002083       next_ostream_msg = ostream_msg;
        
 002083       next_finish = finish;
              
 000056       if(istream_val && istream_rdy) begin
        
 000056         next_a = istream_msg[63:32];
 000056         next_b = istream_msg[31:0];
 000056         next_ostream_msg = 0;
              end 
 000244       else if(!finish)begin
        
 001783         for (i = 0; i <= 31; i = i + 1) begin
        
 013978           if (b[i] == 1) break;
        
 013598           if(i == 31) break;
                  
                end
        
 000380         if(b[i] == 1) begin
        
 001403           next_ostream_msg = add_result;
 001403           next_a = a << (i + 1);
 001403           next_b = b >> (i + 1);
        
                end
 000380         else begin
        
 000380           next_ostream_msg = ostream_msg;
 000380           next_finish = 1;
        
                end
              end
        
 000132       if(finish && !(ostream_val && ostream_rdy)) begin
 000132         next_ostream_val = 1;
              end
 001951       else begin
 001951         next_ostream_val = 0;
              end
        
        
        
        
           end
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
        
            $sformat( str, "%x", istream_msg );
            vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );
        
            vc_trace.append_str( trace_str, "(" );
        
            // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
            // Add additional line tracing using the helper tasks for
            if(state == 0) $sformat(str, "IDLE");
            else if(state == 1) $sformat(str, "CALC");
            else if(state == 2) $sformat(str, "DONE");
            else $sformat(str, "UNKNOWN");
            vc_trace.append_str( trace_str, str);
        
            // internal state including the current FSM state.
            // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
            vc_trace.append_str( trace_str, ")" );
        
            $sformat( str, "%x", ostream_msg );
            vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );
        
          end
          `VC_TRACE_END
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* LAB1_IMUL_INT_MUL_ALT_V */
        
