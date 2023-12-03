//=========================================================================
// Branch Predictor Gshare Design
//=========================================================================

`ifndef LAB4_BRANCH_BRANCH_GSHARE_V
`define LAB4_BRANCH_BRANCH_GSHARE_V




module lab4_branch_BranchGshare
#(
  parameter PHT_size  = 2048
)
(
  input  logic         clk,
  input  logic         reset,
  input logic update_en,
  input logic update_val,
  input logic [31:0] PC,
  output logic prediction

);

logic [1:0] PHT [0:PHT_size-1];
logic [10:0] PHT_index;
logic [10:0] GHR;
logic [10:0] PC_factor;
logic [1:0] current_PHT;
assign PC_factor = PC[12:2];
assign PHT_index = GHR ^ PC_factor;
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
    GHR <= 11'b0;
  end
  else begin
    if (update_en) begin
      if (update_val) begin
        GHR <= (GHR << 1) + 11'b1;
        if (PHT[PHT_index] == 2'b11) begin
          PHT[PHT_index] <= 2'b11;
        end 
        else begin
          PHT[PHT_index] <= PHT[PHT_index] + 2'b01;
        end
      end 
      else begin
        GHR <= GHR << 1;
        if (PHT[PHT_index] == 2'b00) begin
          PHT[PHT_index] <= 2'b00;
        end 
        else begin
          PHT[PHT_index] <= PHT[PHT_index] - 2'b01;
        end
      end
    end
    else begin
      GHR <= GHR;
      PHT[PHT_index] <= PHT[PHT_index];
    end
  end
end

endmodule

`endif
