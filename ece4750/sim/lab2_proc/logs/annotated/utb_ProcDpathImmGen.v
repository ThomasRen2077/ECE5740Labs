//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "ProcDpathImmGen.v"
        `include "vc/trace.v"
        
%000000 module top(input logic clk, input logic linetrace);
        
 000001     reg  [2:0]  imm_type;
 000001     reg  [31:0] inst;
 000002     wire [31:0] imm;
        
            // Instantiate the module under test
            lab2_proc_ProcDpathImmGen DUT (
                .imm_type(imm_type),
                .inst(inst),
                .imm(imm)
            );
        
            parameter Expected_Value_I = 32'h0000000F; 
            parameter Expected_Value_S = 32'h000000FF; 
            parameter Expected_Value_B = 32'h0000081E; 
            parameter Expected_Value_U = 32'hFFFFF000; 
            parameter Expected_Value_J = 32'h000FFFFE; 
            parameter Expected_Value_I_variant = 32'h00000000;
        
            // Stimulus process
 000001     initial begin
                // Initialize
 000001         imm_type = 0;
 000001         inst = 0;
 000001         #10; // Wait for 10 time units
        
                // Test case: I-type instruction
 000001         imm_type = 3'd0; // I-type
 000001         inst = 32'h00FF_FFFF; // Test I-type instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_I) begin
 000001             $display("I-type instruction. Got: %h", imm);pass();
 000001         end else begin
 000001             $display("Test failed: I-type instruction. Expected: %h, Got: %h", Expected_Value_I, imm);fail(); $finish();
                end
        
                // Test case: S-type instruction
 000001         imm_type = 3'd1; // S-type
 000001         inst = 32'h0F00_FFFF; // Test S-type instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_S) begin
 000001             $display("S-type instruction. Got: %h", imm);pass();
 000001         end else begin 
 000001             $display("Test failed: S-type instruction. Expected: %h, Got: %h", Expected_Value_S, imm);fail(); $finish();
                end
        
                // Test case: B-type instruction
 000001         imm_type = 3'd2; // B-type
 000001         inst = 32'h0000_FFFF; // Test B-type instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_B) begin
 000001             $display("B-type instruction. Got: %h", imm);pass();
 000001         end else begin 
 000001             $display("Test failed: B-type instruction. Expected: %h, Got: %h", Expected_Value_B, imm);fail(); $finish();
                end
        
                // Test case: U-type instruction
 000001         imm_type = 3'd3; // U-type
 000001         inst = 32'hFFFF_F000; // Test U-type instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_U) begin
 000001             $display("U-type instruction. Got: %h", imm);pass();
 000001         end else begin 
 000001             $display("Test failed: U-type instruction. Expected: %h, Got: %h", Expected_Value_U, imm);fail(); $finish();
                end
        
                // Test case: J-type instruction
 000001         imm_type = 3'd4; // J-type
 000001         inst = 32'h7FFF_FFFF; // Test J-type instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_J) begin
 000001             $display("J-type instruction. Got: %h", imm);pass();
 000001         end else begin 
 000001             $display("Test failed: J-type instruction. Expected: %h, Got: %h", Expected_Value_J, imm);fail(); $finish();
                end
        
                // Test case: I-type variant instruction
 000001         imm_type = 3'd5; // I-type variant
 000001         inst = 32'hF000_0FFF; // Test I-type variant instruction code
 000001         #10;
 000001         assert (imm == Expected_Value_I_variant) begin
 000001             $display("I-type variant instruction. Got: %h", imm);pass();
 000001         end else begin 
 000001             $display("Test failed: I-type variant instruction. Expected: %h, Got: %h", Expected_Value_I_variant, imm);fail(); $finish();
                end
        
                // Test case: Default (unexpected imm_type)
 000001         imm_type = 3'd6; // Undefined type, to test the default case
 000001         inst = 32'hFFFF_FFFF; // Arbitrary instruction code
 000001         #10;
 000001         assert (imm == 32'bx) begin
 000001             $display("Default case instruction. Got: %h", imm);pass();
 000001         end else begin
 000001             $display("Test failed: Default case. Expected: Undefined (X or similar), Got: %h", imm);fail(); $finish();
                end
        
        
 000001         #10;
        
        
                // Finish the simulation
 000001         $finish();
            end
        
        endmodule
        
