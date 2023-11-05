`ifndef LAB3_CACHE_MUX16_V
`define LAB3_CACHE_MUX16_V



module lab3_cache_Mux16
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0, in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, in12, in13, in14, in15,
  input  logic         [3:0] sel,
  output logic [p_nbits-1:0] out
);

  always_comb
  begin
    case ( sel )
      3'd0 : out = in0;
      3'd1 : out = in1;
      3'd2 : out = in2;
      3'd3 : out = in3;
      3'd4 : out = in4;
      3'd5 : out = in5;
      3'd6 : out = in6;
      3'd7 : out = in7;
      3'd8 : out = in8;
      3'd9 : out = in9;
      3'd10 : out = in10;
      3'd11 : out = in11;
      3'd12 : out = in12;
      3'd13 : out = in13;
      3'd14 : out = in14;
      3'd15 : out = in15;
      default : out = {p_nbits{1'bx}};
    endcase
  end

endmodule

`endif 



