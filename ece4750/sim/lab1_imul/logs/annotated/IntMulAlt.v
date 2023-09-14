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
 000949   input  logic        clk,
 000001   input  logic        reset,
        
 000056   input  logic        istream_val,
 000057   output logic        istream_rdy,
 000004   input  logic [63:0] istream_msg,
        
 000056   output logic        ostream_val,
 000049   input  logic        ostream_rdy,
 000013   output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        typedef enum logic [1:0] {IDLE, CALC, DONE} statetype;
 000056   statetype state, nextstate;
        
 000024   logic [31:0] a;
 000018   logic [31:0] b;
          //logic [7:0]  counter;
 000024   logic [31:0] next_a;
 000018   logic [31:0] next_b;
 000013   logic [31:0] next_ostream_msg;
 000056   logic        next_ostream_val;
 000013   logic [31:0] add_result;
 000056   logic        finish;
 000056   logic        next_finish;
 000052   logic[4:0] i;
        
          vc_SimpleAdder #(32) Add(ostream_msg, a << i, add_result);
        
          
        
          //state_register
 000528   always_ff@(posedge clk) begin
 000004     if(reset) begin
 000004       state <= IDLE;
        
            end
 000524     else      begin 
 000081       if(state == IDLE) begin
        
 000081           a <= next_a;
 000081           b <= next_b;
 000081           ostream_msg <= next_ostream_msg;
 000081           ostream_val <= next_ostream_val;
        
 000081           finish <= 0;
        
 000081           istream_rdy <= 1;
 000028           if(istream_val) istream_rdy <= 0;
        
              end
 000076       else if(state == CALC) begin  
        
 000367           a <= next_a;
 000367           b <= next_b;
 000367           ostream_msg <= next_ostream_msg;
 000367           ostream_val <= next_ostream_val;
        
 000367           finish <= next_finish;
        
 000367           istream_rdy <= 0;
              end
 000076       else begin
        
 000076         ostream_val <= next_ostream_val;
        
        
 000028         if(ostream_val && ostream_rdy) begin
 000028           finish <= 0;
 000028           istream_rdy <= 1;
                end
              end
        
 000524       state <= nextstate;
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
 000528       always_comb
 000085       if(state == IDLE) begin
 000028         if(istream_val)                 nextstate = CALC;
 000057         else                            nextstate = IDLE;
              end
 000076       else if(state == CALC) begin
 000028         if(finish)                      nextstate = DONE;
 000339         else                            nextstate = CALC;
              end
 000076       else begin
 000028         if(ostream_rdy)                 nextstate = IDLE;
 000048         else                            nextstate = DONE;
              end
        
        
        
          //output_logic
        
 000798   always_comb begin
        
 000798       next_a = a;
 000798       next_b = b;
 000798       next_ostream_msg = ostream_msg;
        
 000798       next_finish = finish;
              
 000028       if(istream_val && istream_rdy) begin
        
 000028         next_a = istream_msg[63:32];
 000028         next_b = istream_msg[31:0];
 000028         next_ostream_msg = 0;
              end 
 000104       else if(!finish)begin
        
 000666         for (i = 0; i <= 31; i = i + 1) begin
        
 005080           if (b[i] == 1) break;
        
 004945           if(i == 31) break;
                  
                end
        
 000135         if(b[i] == 1) begin
        
 000531           next_ostream_msg = add_result;
 000531           next_a = a << (i + 1);
 000531           next_b = b >> (i + 1);
        
                end
 000135         else begin
        
 000135           next_ostream_msg = ostream_msg;
 000135           next_finish = 1;
        
                end
              end
        
 000076       if(finish && !(ostream_val && ostream_rdy)) begin
 000076         next_ostream_val = 1;
              end
 000722       else begin
 000722         next_ostream_val = 0;
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
        
