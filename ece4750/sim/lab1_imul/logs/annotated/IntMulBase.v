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
          logic [7:0]  counter;
          logic [31:0] next_a;
          logic [31:0] next_b;
          logic [31:0] next_ostream_msg;
          logic        next_ostream_val;
        
          logic [31:0] add_result;
          vc_SimpleAdder #(32) Add(ostream_msg, a, add_result);
          
        
          //state_register
 001020   always_ff@(posedge clk) begin
 000003     if(reset) begin
 000003       state <= IDLE;
            end
 001017     else      begin 
 000065       if(state == IDLE) begin
                  
 000065           a <= next_a;
 000065           b <= next_b;
 000065           ostream_msg <= next_ostream_msg;
 000065           ostream_val <= next_ostream_val;
 000065           counter <= 0;
        
 000065           istream_rdy <= 1;
 000028           if(istream_val) istream_rdy <= 0;
              end
 000924       else if(state == CALC) begin     
 000924           a <= next_a;
 000924           b <= next_b;
 000924           ostream_msg <= next_ostream_msg;
 000924           ostream_val <= next_ostream_val;
 000924           counter <= counter + 1;
 000924           istream_rdy <= 0;
              end
%000000       else if(state == DONE) begin
 000028         ostream_val <= next_ostream_val;
 000028         istream_rdy <= 1;
 000028         if(ostream_val && ostream_rdy) counter <= 0;
              end
 001017       state <= nextstate;
            end
          end
        
          //next_state_logic
 003176   always_comb
 003176     case(state)
 000056       IDLE: if(istream_val)                 nextstate = CALC;
 000208             else                            nextstate = IDLE;
 000084       CALC: if(counter == 8'd32)            nextstate = DONE;
 002688             else                            nextstate = CALC;
%000000       DONE: if(ostream_rdy)                 nextstate = IDLE;
%000000             else                            nextstate = DONE;
%000000       default:                              nextstate = IDLE;
            endcase
        
          //output_logic
        
 003176   always_comb begin
 003176         next_a = a;
 003176         next_b = b;
 003176         next_ostream_msg = ostream_msg;
        
 000056       if(istream_val && istream_rdy) begin
 000056         next_a = istream_msg[63:32];
 000056         next_b = istream_msg[31:0];
 000056         next_ostream_msg = 0;
              end 
 000084       else if(counter != 32)begin
 003036         next_a = a << 1;
 003036         next_b = b >> 1;
 000966         if(b[0]) begin
 000966           next_ostream_msg = add_result;
                end
 002070         else begin
 002070           next_ostream_msg = ostream_msg;
                end
              end
        
 000084       if(counter >= 32 && !(ostream_val && ostream_rdy)) begin
 000084         next_ostream_val = 1;
              end
 003092       else begin
 003092         next_ostream_val = 0;
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
        
