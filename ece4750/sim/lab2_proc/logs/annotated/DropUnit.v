//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Drop Unit
        //========================================================================
        // Drop unit allows dropping a packet when the drop signal is high. This
        // is useful especially in pipelined processor, when a squash should drop
        // a late arriving memory response.
        
        `ifndef LAB2_PROC_DROP_UNIT_V
        `define LAB2_PROC_DROP_UNIT_V
        
        module lab2_proc_DropUnit
        #(
          parameter p_msg_nbits = 1
        )
        (
 040589   input  logic                   clk,
 000007   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 001252   input  logic                   drop,
        
 002220   input  logic [p_msg_nbits-1:0] istream_msg,
 013417   input  logic                   istream_val,
 013798   output logic                   istream_rdy,
        
 002220   output logic [p_msg_nbits-1:0] ostream_msg,
 012645   output logic                   ostream_val,
 014050   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000578   logic state;
 000578   logic next_state;
 014039   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000327     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000867       if ( drop && !istream_go )
 000867         next_state = c_state_drop;
              else
 059039         next_state = c_state_pass;
        
 000327     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000114       if ( istream_go )
 000867         next_state = c_state_pass;
              else
 000114         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000327     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 019964       ostream_val = istream_val && !drop;
 019964       istream_rdy  = ostream_rdy;
        
 000327     end else begin
        
              // we just drop the packet
 000327       ostream_val = 1'b0;
 000327       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 020291   always_ff @( posedge clk ) begin
        
 000091     if ( reset )
 000091       state <= c_state_pass;
            else
 020200       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        
