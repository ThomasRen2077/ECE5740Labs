
// Looking at least significant eight bits, calculate how many bits we want to shift.

`ifndef LAB1_IMUL_CALC_SHAMT_V
`define LAB1_IMUL_CALC_SHAMT_V

module lab1_imul_CalcShamt
(
  input  logic [7:0] in,
  output logic [3:0] out
);

  always_comb begin
    casez (in)
      8'b00000000: out = 8;
      8'bzzzzzzz1: out = 1;
      8'bzzzzzz10: out = 1;
      8'bzzzzz100: out = 2;
      8'bzzzz1000: out = 3;
      8'bzzz10000: out = 4;
      8'bzz100000: out = 5;
      8'bz1000000: out = 6;
      8'b10000000: out = 7;
      default: begin out=0; $stop; end
    endcase      
    
  end

endmodule

`endif
