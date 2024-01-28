`ifndef LAB4_BRANCH_BRANCH_GSHARE_V
`define LAB4_BRANCH_BRANCH_GSHARE_V

module lab4_branch_BranchGshare
#(
  parameter PHT_size  = 2048
)
(
  input logic clk,
  input logic reset,
  input logic update_en,
  input logic update_val,
  input logic [31:0] PC,

  output logic prediction
);

  parameter  PHT_nbits = $clog2(PHT_size);

  logic [2 * PHT_size - 1 : 0] PHT;
  logic [PHT_nbits - 1 : 0] GHR;

  logic [PHT_nbits - 1 : 0] PC_factor;
  assign PC_factor = PC[1 + PHT_nbits : 2];

  logic [PHT_nbits - 1 : 0] PHT_index;
  assign PHT_index = GHR ^ PC_factor;

  logic [1:0] current_PHT;
  assign current_PHT = PHT[2 * PHT_index +: 2]; 

  logic [PHT_nbits - 1 : 0] GHR_update_val;
  assign GHR_update_val = {{(PHT_nbits - 1){1'b0}},{update_val}};

  // Combinational prediction
  assign prediction = current_PHT[1];

  // Update internal state
  always_ff@(posedge clk) begin
    if (reset) begin
      PHT <= '0;
      GHR <= '0;
    end
    else if (update_en) begin
        GHR <= (GHR << 1) + GHR_update_val;
        if (update_val) PHT[2 * PHT_index +: 2] <= (PHT[2 * PHT_index +: 2] == 2'b11)? 2'b11 : (PHT[2 * PHT_index +: 2] + 2'b01);
        else            PHT[2 * PHT_index +: 2] <= (PHT[2 * PHT_index +: 2] == 2'b00)? 2'b00 : (PHT[2 * PHT_index +: 2] - 2'b01);
    end
  end

endmodule

`endif
