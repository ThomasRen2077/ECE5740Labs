//      // verilator_coverage annotation
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        
        `ifndef LAB1_IMUL_INT_MUL_BASE_V
        `define LAB1_IMUL_INT_MUL_BASE_V
        
        `include "vc/trace.v"
        `include "vc/arithmetic.v"
        
        
        // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        // Define datapath and control unit here.
        // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        module lab1_imul_IntMulBase
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
          typedef enum logic [1:0] {IDLE, CALC, DONE} statetype;
          statetype state, nextstate;
        
          logic [31:0] a;
          logic [31:0] b;
          logic [5:0]  counter;
          logic [31:0] next_a;
          logic [31:0] next_b;
          logic [31:0] next_ostream_msg;
          logic        next_ostream_val;
        
          logic [31:0] add_result;
          vc_SimpleAdder #(32) Add(ostream_msg, a, add_result);
          
        
          //state_register
 002114   always_ff@(posedge clk) begin
 000007     if(reset) begin
 000007       state <= IDLE;
            end
 002107     else      begin 
 000146       if(state == IDLE) begin
                  
 000146           a <= next_a;
 000146           b <= next_b;
 000146           ostream_msg <= next_ostream_msg;
 000146           ostream_val <= next_ostream_val;
 000146           counter <= 0;
        
 000146           istream_rdy <= 1;
 000056           if(istream_val) istream_rdy <= 0;
              end
 000113       else if(state == CALC) begin     
 001848           a <= next_a;
 001848           b <= next_b;
 001848           ostream_msg <= next_ostream_msg;
 001848           ostream_val <= next_ostream_val;
 001848           counter <= counter + 1;
 001848           istream_rdy <= 0;
              end
 000113       else begin
 000113         ostream_val <= next_ostream_val;
                
 000056         if(ostream_val && ostream_rdy) begin 
 000056           counter <= 0;
 000056           istream_rdy <= 1;
                end
              end
 002107       state <= nextstate;
            end
          end
        
          //next_state_logic_using_case
        
          // always_comb
          //   case(state)
          //     IDLE: if(istream_val)                 nextstate = CALC;
          //           else                            nextstate = IDLE;
          //     CALC: if(counter == 8'd32)            nextstate = DONE;
          //           else                            nextstate = CALC;
          //     DONE: if(ostream_rdy)                 nextstate = IDLE;
          //           else                            nextstate = DONE;
          //     default:                              nextstate = IDLE;
          //   endcase
        
        // next_state_logic_using_if_else
 004270       always_comb
 000349       if(state == IDLE) begin
 000084         if(istream_val)                 nextstate = CALC;
 000265         else                            nextstate = IDLE;
              end
 000225       else if(state == CALC) begin
 000112         if(counter == 8'd32)            nextstate = DONE;
 003584         else                            nextstate = CALC;
              end
 000225       else begin
 000057         if(ostream_rdy)                 nextstate = IDLE;
 000057         else                            nextstate = DONE;
              end
        
          //output_logic
        
 004270   always_comb begin
 004270         next_a = a;
 004270         next_b = b;
 004270         next_ostream_msg = ostream_msg;
        
 000084       if(istream_val && istream_rdy) begin
 000084         next_a = istream_msg[63:32];
 000084         next_b = istream_msg[31:0];
 000084         next_ostream_msg = 0;
              end 
 000112       else if(counter != 32)begin
 004074         next_a = a << 1;
 004074         next_b = b >> 1;
 001277         if(b[0]) begin
 001277           next_ostream_msg = add_result;
                end
 002797         else begin
 002797           next_ostream_msg = ostream_msg;
                end
              end
        
 000169       if(counter >= 32 && !(ostream_val && ostream_rdy)) begin
 000169         next_ostream_val = 1;
              end
 004101       else begin
 004101         next_ostream_val = 0;
              end
          end
        
        
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
        
            $sformat( str, "%x", istream_msg);
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
        
        `endif /* LAB1_IMUL_INT_MUL_BASE_V */
        
