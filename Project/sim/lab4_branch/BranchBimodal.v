`ifndef LAB4_BRANCH_BRANCH_BIMODAL_V
`define LAB4_BRANCH_BRANCH_BIMODAL_V

module lab4_branch_BranchBimodal
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


  parameter PHT_nbits = $clog2(PHT_size);
    
  logic [4 * PHT_nbits-1 : 0] BH;
  logic [1 : 0] BH_index;

  logic [2 * PHT_size - 1 : 0] PHT;
  logic [1 : 0] current_PHT;
  logic [PHT_nbits - 1 : 0] PHT_index_update_val;
  logic [PHT_nbits - 1 : 0] PHT_index;

  assign BH_index = PC[3 : 2];
  assign PHT_index = BH[PHT_nbits * BH_index +: PHT_nbits];
  assign current_PHT = PHT[2 * PHT_index +: 2]; 

  //Expand update_val
  assign PHT_index_update_val = {{(PHT_nbits - 1){1'b0}}, {update_val}};

  // Combinational prediction
  assign prediction = current_PHT[1];

  // Update internal state
  always_ff@(posedge clk) begin
    if (reset) begin
      PHT <= '0;
      BH <= '0;
    end
    else if (update_en) begin
        BH[PHT_nbits * BH_index +: PHT_nbits] <= (BH[PHT_nbits * BH_index +: PHT_nbits] << 1) + PHT_index_update_val;
        if (update_val) PHT[2 * PHT_index +: 2] <= (PHT[2 * PHT_index +: 2] == 2'b11)? 2'b11 : (PHT[2 * PHT_index +: 2] + 2'b01);
        else            PHT[2 * PHT_index +: 2] <= (PHT[2 * PHT_index +: 2] == 2'b00)? 2'b00 : (PHT[2 * PHT_index +: 2] - 2'b01);
      end
  end

endmodule

`endif
