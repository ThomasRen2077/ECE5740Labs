`default_nettype none
`timescale 1ps/1ps


`include "ProcDpathImmGen.v"
`include "vc/trace.v"

module top(input logic clk, input logic linetrace);

    reg  [2:0]  imm_type;
    reg  [31:0] inst;
    wire [31:0] imm;

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
    initial begin
        // Initialize
        imm_type = 0;
        inst = 0;
        #10; // Wait for 10 time units

        // Test case: I-type instruction
        imm_type = 3'd0; // I-type
        inst = 32'h00FF_FFFF; // Test I-type instruction code
        #10;
        assert (imm == Expected_Value_I) begin
            $display("I-type instruction. Got: %h", imm);pass();
        end else begin
            $display("Test failed: I-type instruction. Expected: %h, Got: %h", Expected_Value_I, imm);fail(); $finish();
        end

        // Test case: S-type instruction
        imm_type = 3'd1; // S-type
        inst = 32'h0F00_FFFF; // Test S-type instruction code
        #10;
        assert (imm == Expected_Value_S) begin
            $display("S-type instruction. Got: %h", imm);pass();
        end else begin 
            $display("Test failed: S-type instruction. Expected: %h, Got: %h", Expected_Value_S, imm);fail(); $finish();
        end

        // Test case: B-type instruction
        imm_type = 3'd2; // B-type
        inst = 32'h0000_FFFF; // Test B-type instruction code
        #10;
        assert (imm == Expected_Value_B) begin
            $display("B-type instruction. Got: %h", imm);pass();
        end else begin 
            $display("Test failed: B-type instruction. Expected: %h, Got: %h", Expected_Value_B, imm);fail(); $finish();
        end

        // Test case: U-type instruction
        imm_type = 3'd3; // U-type
        inst = 32'hFFFF_F000; // Test U-type instruction code
        #10;
        assert (imm == Expected_Value_U) begin
            $display("U-type instruction. Got: %h", imm);pass();
        end else begin 
            $display("Test failed: U-type instruction. Expected: %h, Got: %h", Expected_Value_U, imm);fail(); $finish();
        end

        // Test case: J-type instruction
        imm_type = 3'd4; // J-type
        inst = 32'h7FFF_FFFF; // Test J-type instruction code
        #10;
        assert (imm == Expected_Value_J) begin
            $display("J-type instruction. Got: %h", imm);pass();
        end else begin 
            $display("Test failed: J-type instruction. Expected: %h, Got: %h", Expected_Value_J, imm);fail(); $finish();
        end

        // Test case: I-type variant instruction
        imm_type = 3'd5; // I-type variant
        inst = 32'hF000_0FFF; // Test I-type variant instruction code
        #10;
        assert (imm == Expected_Value_I_variant) begin
            $display("I-type variant instruction. Got: %h", imm);pass();
        end else begin 
            $display("Test failed: I-type variant instruction. Expected: %h, Got: %h", Expected_Value_I_variant, imm);fail(); $finish();
        end

        // Test case: Default (unexpected imm_type)
        imm_type = 3'd6; // Undefined type, to test the default case
        inst = 32'hFFFF_FFFF; // Arbitrary instruction code
        #10;
        assert (imm == 32'bx) begin
            $display("Default case instruction. Got: %h", imm);pass();
        end else begin
            $display("Test failed: Default case. Expected: Undefined (X or similar), Got: %h", imm);fail(); $finish();
        end


        #10;


        // Finish the simulation
        $finish();
    end

endmodule
