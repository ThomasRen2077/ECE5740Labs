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
 066664   input  logic                   clk,
 000084   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 003724   input  logic                   drop,
        
 005164   input  logic [p_msg_nbits-1:0] istream_msg,
 021477   input  logic                   istream_val,
 021197   output logic                   istream_rdy,
        
 005164   output logic [p_msg_nbits-1:0] ostream_msg,
 019629   output logic                   ostream_val,
 022125   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 002132   logic state;
 002132   logic next_state;
 022733   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 001338     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 003198       if ( drop && !istream_go )
 003198         next_state = c_state_drop;
              else
 092826         next_state = c_state_pass;
        
 001338     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000816       if ( istream_go )
 003198         next_state = c_state_pass;
              else
 000816         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 001338     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 031952       ostream_val = istream_val && !drop;
 031952       istream_rdy  = ostream_rdy;
        
 001338     end else begin
        
              // we just drop the packet
 001338       ostream_val = 1'b0;
 001338       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 033290   always_ff @( posedge clk ) begin
        
 001092     if ( reset )
 001092       state <= c_state_pass;
            else
 032198       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        
