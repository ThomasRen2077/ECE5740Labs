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

parameter  PHT_nbits = $clog2(PHT_size);

logic [2*PHT_size-1:0]      PHT;
logic [PHT_nbits - 1 : 0]   GHR;
logic [PHT_nbits - 1 : 0]   PC_factor;
logic [1:0]                 current_PHT;
logic                       GHR_update_value;
logic [PHT_nbits - 1 : 0]   PHT_index;

assign PC_factor = PC[1+PHT_nbits:2];
assign PHT_index = GHR ^ PC_factor;
assign current_PHT = PHT[2*PHT_index +: 2]; 
assign GHR_update_value = update_val;


// Combinational prediction
always_comb begin
  if (current_PHT[1] == 1)    prediction = 1'b1;
  else                        prediction = 1'b0;
end

// Update internal state
always_ff@(posedge clk) begin
  if (reset) begin
    PHT <= '0;
    GHR <= '0;
  end
  else begin
    PHT <= PHT;
    GHR <= GHR;

    if (update_en) begin
      GHR <= (GHR << 1) + {{(PHT_nbits - 1){1'b0}},{GHR_update_value}};
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
