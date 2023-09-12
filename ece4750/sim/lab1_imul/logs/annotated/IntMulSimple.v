//      // verilator_coverage annotation
        //========================================================================
        // Integer Multiplier Simple Implementation
        //========================================================================
        
        `ifndef LAB1_IMUL_INT_MUL_SIMPLE_V
        `define LAB1_IMUL_INT_MUL_SIMPLE_V
        
        `include "vc/trace.v"
        
        module lab1_imul_IntMulSimple
        (
          input clk,
          input reset,
          input  logic        istream_val,
          output logic        istream_rdy,
          input  logic [63:0] istream_msg,
        
          output logic        ostream_val,
          input  logic        ostream_rdy,
          output logic [31:0] ostream_msg
        );
        
          logic [31:0] a;
          logic [31:0] b;
          logic        next_ostream_val;
          logic [31:0] next_ostream_msg;
        
          assign  a = istream_msg[63:32];
          assign  b = istream_msg[31:0];
        
 000124     always_ff @(posedge clk) begin
 000124         istream_rdy <=1;
 000028         if( next_ostream_val )begin
 000028           istream_rdy <=0;
                end
               
 000124         ostream_val <=next_ostream_val;
 000124         ostream_msg <=next_ostream_msg;
                
            end
            
%000000     always_comb begin 
%000000       next_ostream_val = ostream_val;
%000000       next_ostream_msg= ostream_msg;
 000056       if(istream_val && istream_rdy)begin 
 000056         next_ostream_msg = a*b; 
 000056         next_ostream_val = 1;
              end
 000068       if(ostream_val && ostream_rdy) begin
 000068             next_ostream_val = 0;
              end
            end
        
        
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          `undef SYNTHESIS
          `ifndef SYNTHESIS
        
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
        
            
            $sformat( str, "%x", istream_msg );
            vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );
        
            vc_trace.append_str( trace_str, "(" );
        
            $sformat( str, "%x", a );
            vc_trace.append_str( trace_str, str );
            vc_trace.append_str( trace_str, " " );
        
            $sformat( str, "%x", b );
            vc_trace.append_str( trace_str, str );
            vc_trace.append_str( trace_str, " " );
        
            $sformat( str, "%x", ostream_val );
            vc_trace.append_str( trace_str, str );
            vc_trace.append_str( trace_str, " " );
        
            vc_trace.append_str( trace_str, ")" );
            $sformat( str, "%x", ostream_msg );
            vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );
            
        
             end
            `VC_TRACE_END
          `endif /* SYNTHESIS */
        endmodule
        `endif /* LAB1_IMUL_INT_MUL_SIMPLE_V */
        
