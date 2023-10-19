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
 067340   input  logic                   clk,
 000086   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 003740   input  logic                   drop,
        
 005342   input  logic [p_msg_nbits-1:0] istream_msg,
 021186   input  logic                   istream_val,
 020916   output logic                   istream_rdy,
        
 005342   output logic [p_msg_nbits-1:0] ostream_msg,
 019320   output logic                   ostream_val,
 021826   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 002112   logic state;
 002112   logic next_state;
 022468   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 001307     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 003168       if ( drop && !istream_go )
 003168         next_state = c_state_drop;
              else
 093964         next_state = c_state_pass;
        
 001307     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000753       if ( istream_go )
 003168         next_state = c_state_pass;
              else
 000753         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 001307     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 032320       ostream_val = istream_val && !drop;
 032320       istream_rdy  = ostream_rdy;
        
 001307     end else begin
        
              // we just drop the packet
 001307       ostream_val = 1'b0;
 001307       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 033627   always_ff @( posedge clk ) begin
        
 001118     if ( reset )
 001118       state <= c_state_pass;
            else
 032509       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        
