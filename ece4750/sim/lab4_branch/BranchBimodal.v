//=========================================================================
// Branch Predictor Bimodal Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_BIMODAL_V
`define LAB4_BRANCH_BRANCH_BIMODAL_V

`include "vc/mem-msgs.v"
`include "vc/queues.v"
`include "vc/trace.v"


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


parameter  PHT_nbits = $clog2(PHT_size);


  
logic [2*PHT_size-1:0]      PHT;
logic [4*PHT_nbits-1:0]     BH;
logic [1:0]                 current_PHT;
logic [PHT_nbits - 1 : 0]   PHT_index_update_value;
logic [1:0]                 BH_index;
logic [PHT_nbits-1:0]       PHT_index;



assign BH_index = PC[3:2];
assign PHT_index = BH[PHT_nbits*BH_index +: PHT_nbits];
assign current_PHT = PHT[2*PHT_index +: 2]; 

assign PHT_index_update_value[0] = update_val;
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
  if (reset) begin
    PHT <= '0;
    BH <= '0;
  end
  else begin
    PHT <= PHT;
    BH <= BH;

    if (update_en) begin
      BH[PHT_nbits*BH_index +: PHT_nbits] <= (BH[PHT_nbits*BH_index +: PHT_nbits] << 1) + PHT_index_update_value;
      if (update_val) begin
        if (PHT[2*PHT_index +: 2] == 2'b11) begin
          PHT[2*PHT_index +: 2] <= 2'b11;
        end 
        else begin
          PHT[2*PHT_index +: 2] <= PHT[2*PHT_index +: 2] + 2'b01;
        end
      end 
      else begin
        if (PHT[2*PHT_index +: 2] == 2'b00) begin
          PHT[2*PHT_index +: 2] <= 2'b00;
        end 
        else begin
          PHT[2*PHT_index +: 2] <= PHT[2*PHT_index +: 2] - 2'b01;
        end
      end
    end
  end
end


endmodule

`endif
