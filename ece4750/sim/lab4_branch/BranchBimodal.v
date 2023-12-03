//=========================================================================
// Branch Predictor Bimodal Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_BIMODAL_V
`define LAB4_BRANCH_BRANCH_BIMODAL_V


`include "CalcShamt.v"


module lab4_branch_BranchBimodal
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input logic update_en,
  input logic update_val,
  input logic[31:0] PC,
  output logic prediction

);

// Needs to be fix, not sure whether to use a function to get log2(2048), permitted?
logic [4:0] PHT_nbits; 

lab4_branch_CalcShamt calc_shamt
  (
   .in_ (PHT_size),
   .out (PHT_nbits)
  );
  
logic [1:0] PHT [0:PHT_nbits];
logic [10:0] BH [0:3];
logic [1:0] current_PHT;



assign BH_index = PC[3:2];
assign PHT_index = BH[BH_index];
assign current_PHT = PHT[PHT_index]; 

// Combinational prediction
always_comb begin
  if (current_PHT[1] == 1) begin
    prediction = 1'b1;
  end
  else begin
    prediction = 1'b0;
  end
end

// Update internal state
always_ff@(posedge clk) begin
  // Need to be fixed: Not sure whether a for loop is allowed for this lab
  if (reset) begin
    
  end
  else begin
    if (update_en) begin
      if (update_val) begin
        BH[BH_index] <= (PHT_index << 1) + 11'b1;
        if (PHT[PHT_index] == 2'b11) begin
          PHT[PHT_index] <= 2'b11;
        end 
        else begin
          PHT[PHT_index] <= PHT[PHT_index] + 2'b01;
        end
      end 
      else begin
        BH[BH_index] <= PHT_index << 1;
        if (PHT[PHT_index] == 2'b00) begin
          PHT[PHT_index] <= 2'b00;
        end 
        else begin
          PHT[PHT_index] <= PHT[PHT_index] - 2'b01;
        end
      end
    end
    else begin
      PHT[PHT_index] <= PHT[PHT_index];
      BH[BH_index] <= BH[BH_index];
    end
  end
end


endmodule

`endif
