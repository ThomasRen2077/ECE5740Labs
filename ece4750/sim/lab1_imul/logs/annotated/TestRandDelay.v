//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components : Test Random Delay
        //========================================================================
        // We make the max delay a actual input as opposed to a parameter to
        // reduce the need to instantiate many different test harnesses in unit
        // testing and to enable setting the delay from the command line in
        // simulators.
        
        `ifndef VC_TEST_RAND_DELAY_V
        `define VC_TEST_RAND_DELAY_V
        
        `include "vc/regs.v"
        
        module vc_TestRandDelay
        #(
          parameter p_msg_nbits = 1 // size of message in bits
        )(
          input  logic                   clk,
          input  logic                   reset,
        
          // Max delay input
        
          input  logic [31:0]            max_delay,
        
          // Input interface
        
          input  logic                   in_val,
          output logic                   in_rdy,
          input  logic [p_msg_nbits-1:0] in_msg,
        
          // Output interface
        
          output logic                   out_val,
          input  logic                   out_rdy,
          output logic [p_msg_nbits-1:0] out_msg
        );
        
          //----------------------------------------------------------------------
          // State
          //----------------------------------------------------------------------
        
          // Random number generator
        
          logic [31:0] rand_num;
        
 001035   always_ff @( posedge clk ) begin
%000000     if ( max_delay == 0 )
 001035       rand_num <= 0;
            else
%000000       rand_num <= {$random} % max_delay;
          end
        
          // Random delay counter
        
          logic        rand_delay_en;
          logic [31:0] rand_delay_next;
          logic [31:0] rand_delay;
        
          vc_EnResetReg#(32,32'b0) rand_delay_reg
          (
            .clk   (clk),
            .reset (reset),
            .en    (rand_delay_en),
            .d     (rand_delay_next),
            .q     (rand_delay)
          );
        
          //----------------------------------------------------------------------
          // Helper combinational logic
          //----------------------------------------------------------------------
        
          // The zero_cycle_delay signal is true when we can directly pass the
          // input message to the output interface without moving into the delay
          // state. This only happens when the input is valid, the output is
          // ready, and the random number of cycles to wait is zero.
        
          logic zero_cycle_delay;
          assign zero_cycle_delay = in_val && out_rdy && (rand_num == 0);
        
          //----------------------------------------------------------------------
          // State register
          //----------------------------------------------------------------------
        
          localparam c_state_sz    = 1;
          localparam c_state_idle  = 1'b0;
          localparam c_state_delay = 1'b1;
        
          logic [c_state_sz-1:0] state_next;
          logic [c_state_sz-1:0] state;
        
 001035   always_ff @( posedge clk ) begin
 000004     if ( reset ) begin
 000004       state <= c_state_idle;
            end
 001031     else begin
 001031       state <= state_next;
            end
          end
        
          //----------------------------------------------------------------------
          // State transitions
          //----------------------------------------------------------------------
        
%000000   always_comb begin
        
            // Default is to stay in the same state
        
%000000     state_next = state;
        
%000000     case ( state )
        
              // Move into delay state if a message arrives on the input
              // interface, except in the case when there is a zero cycle delay
              // (see definition of zero_cycle_delay signal above).
        
 000117       c_state_idle:
 000027         if ( in_val && !zero_cycle_delay ) begin
 000027           state_next = c_state_delay;
                end
        
              // Move back into idle state once we have waited the correct number
              // of cycles and the output interface is ready so that we can
              // actually transfer the message.
        
 000918       c_state_delay:
 000027         if ( in_val && out_rdy && (rand_delay == 0) ) begin
 000027           state_next = c_state_idle;
                end
        
            endcase
        
          end
        
          //----------------------------------------------------------------------
          // State output
          //----------------------------------------------------------------------
        
%000000   always_comb begin
        
%000000     case ( state )
        
 000117       c_state_idle:
 000117       begin
 000117         rand_delay_en   = in_val && !zero_cycle_delay;
 000117         rand_delay_next = (rand_num > 0) ? rand_num - 1 : rand_num;
 000117         in_rdy          = out_rdy && (rand_num == 0);
 000117         out_val         = in_val  && (rand_num == 0);
              end
        
 000918       c_state_delay:
 000918       begin
 000918         rand_delay_en   = (rand_delay > 0);
 000918         rand_delay_next = rand_delay - 1;
 000918         in_rdy          = out_rdy && (rand_delay == 0);
 000918         out_val         = in_val  && (rand_delay == 0);
              end
        
%000000       default:
%000000       begin
%000000         rand_delay_en   = 1'bx;
%000000         rand_delay_next = 32'bx;
%000000         in_rdy          = 1'bx;
%000000         out_val         = 1'bx;
              end
        
            endcase
        
          end
        
          //----------------------------------------------------------------------
          // Other combinational logic
          //----------------------------------------------------------------------
        
          // Directly connect output msg bits to input msg bits, only when out_val
          // is high
        
          assign out_msg = out_val ? in_msg : 'h0;
        
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
 001035   always_ff @( posedge clk ) begin
 000004     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( max_delay );
%000000       `VC_ASSERT_NOT_X( in_val    );
%000000       `VC_ASSERT_NOT_X( in_rdy    );
%000000       `VC_ASSERT_NOT_X( out_val   );
%000000       `VC_ASSERT_NOT_X( out_rdy   );
            end
          end
        
        endmodule
        
        `endif /* VC_TEST_RAND_DELAY_V */
        
