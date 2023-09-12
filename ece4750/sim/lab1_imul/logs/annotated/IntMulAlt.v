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
          logic        checkone;
          logic[4:0] i;
          logic[4:0] shifts;
        
          vc_SimpleAdder #(32) Add(ostream_msg, a << shifts, add_result);
        
          
        
          //state_register
 000496   always_ff@(posedge clk) begin
 000003     if(reset) begin
 000003       state <= IDLE;
 000003       a <= istream_msg[63:32];
 000003       b <= istream_msg[31:0];
 000003       ostream_msg <= 0;
 000003       ostream_val <= 0;
 000003       finish <= 1;
            end
 000493     else      begin 
 000065       if(state == IDLE) begin
 000065           istream_rdy <= 1;
 000065           a <= next_a;
 000065           b <= next_b;
 000065           ostream_msg <= next_ostream_msg;
 000065           ostream_val <= next_ostream_val;
 000065           finish <= 0;
                  //counter <= 0;
              end
 000400       else if(state == CALC) begin     
 000400           a <= next_a;
 000400           b <= next_b;
 000400           ostream_msg <= next_ostream_msg;
 000400           ostream_val <= next_ostream_val;
 000400           finish <= next_finish;
                  //counter <= counter + 1;
 000400           istream_rdy <= 0;
              end
%000000       else if(state == DONE) begin
 000028         ostream_val <= next_ostream_val;
 000028         istream_rdy <= 0;
              end
 000493       state <= nextstate;
            end
          end
        
          //next_state_logic
%000000   always_comb
%000000     case(state)
 000056       IDLE: if(istream_val)                 nextstate = CALC;
 000236             else                            nextstate = IDLE;
 000028       CALC: if(finish)                      nextstate = DONE;
 000372             else                            nextstate = CALC;
%000000       DONE: if(ostream_rdy)                 nextstate = IDLE;
%000000             else                            nextstate = DONE;
%000000       default:                              nextstate = IDLE;
            endcase
        
          //output_logic
        
 001928   always_comb begin
 001928       next_a = a;
 001928       next_b = b;
 001928       next_ostream_msg = ostream_msg;
 001928       next_ostream_val = ostream_val;
 001928       next_finish = finish;
 001928       shifts = 0;
 001928       checkone = 0;
              
 000128       if(istream_val && istream_rdy) begin
 000128         next_a = istream_msg[63:32];
 000128         next_b = istream_msg[31:0];
 000128         next_ostream_msg = 0;
 000128         next_ostream_val = 0;
              end 
 001424       else if(!finish)begin
                //checkone = 0;
 001424         for (i = 0; i <= 31; i = i + 1) begin
 009235           if (b[i] == 1) begin
%000000             checkone = 1;
%000000             shifts = i;
%000000             break;
                  end
        
 008995           if(i == 31) break;
                end
 000240         if(checkone) begin
 001184           next_ostream_msg = add_result;
 001184           next_a = a << (shifts+1);
 001184           next_b = b >> (shifts+1);        
                end
 000240         else begin
 000240           next_ostream_msg = ostream_msg;
 000240           next_finish = 1;
                end
 001424           next_ostream_val = 0;
              end 
 000140       else if(!(ostream_val && ostream_rdy)) begin
 000236           next_ostream_val = 1;
              end
 000140       else begin
 000140           next_ostream_val = 0;
 000140           next_finish = 1;
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
        
