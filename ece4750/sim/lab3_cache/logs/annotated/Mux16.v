//      // verilator_coverage annotation
        `ifndef LAB3_CACHE_MUX16_V
        `define LAB3_CACHE_MUX16_V
        
        
        
        module lab3_cache_Mux16
        #(
          parameter p_nbits = 1
        )(
 000006   input  logic [p_nbits-1:0] in0, in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, in12, in13, in14, in15,
 000007   input  logic         [3:0] sel,
 000006   output logic [p_nbits-1:0] out
        );
        
 000436   always_comb
 000436   begin
 000436     case ( sel )
 000042       4'd0 : out = in0;
%000000       4'd1 : out = in1;
%000000       4'd2 : out = in2;
%000000       4'd3 : out = in3;
%000000       4'd4 : out = in4;
%000000       4'd5 : out = in5;
%000000       4'd6 : out = in6;
%000000       4'd7 : out = in7;
%000000       4'd8 : out = in8;
%000000       4'd9 : out = in9;
%000000       4'd10 : out = in10;
%000000       4'd11 : out = in11;
%000000       4'd12 : out = in12;
%000000       4'd13 : out = in13;
%000000       4'd14 : out = in14;
 000394       4'd15 : out = in15;
%000000       default : out = {p_nbits{1'bx}};
            endcase
          end
        
        endmodule
        
        `endif 
        
        
        
        
