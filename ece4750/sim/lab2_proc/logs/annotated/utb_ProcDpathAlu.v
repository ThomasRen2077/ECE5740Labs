//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "ProcDpathAlu.v"
        `include "vc/trace.v"
        
        
        
        
%000000 module top (  input logic clk, input logic linetrace );
        
 000002   logic  [31:0] in0;
 000002   logic  [31:0] in1;
 000001   logic  [3:0]  fn;
 000002   logic  [31:0] out;
 000003   logic  ops_eq;
 000006   logic  ops_lt;
 000006   logic  ops_ltu;
        
          // Instantiate the unit under test (DUT)
          lab2_proc_ProcDpathAlu DUT (
            .in0(in0),
            .in1(in1),
            .fn(fn),
            .out(out),
            .ops_eq(ops_eq),
            .ops_lt(ops_lt),
            .ops_ltu(ops_ltu)
          );
        
 000001   initial begin
            // Initialize the test inputs
 000001     in0 = 32'h00000000;
 000001     in1 = 32'h00000000;
 000001     fn  = 4'd0;
 000001     #10; // Wait for 10 time units
        
            // Test Case: Addition
 000001     in0 = 32'h00000001; 
 000001     in1 = 32'h00000001;
 000001     fn  = 4'd0; // ADD operation
 000001     #10; 
        
            // Check the result
 000001     assert(out != in0 + in1) begin
 000001       $display("Error in Addition Test. Expected %h, got %h", in0 + in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("Addition Test Passed. Sum is %h", out);pass();
            end
        
            // Test Case: Subtraction
 000001     in0 = 32'h00000005;
 000001     in1 = 32'h00000003;
 000001     fn  = 4'd1; // SUB operation
 000001     #10;
        
            // Check the result
 000001     assert(out != in0 - in1) begin
 000001       $display("Error in Subtraction Test. Expected %h, got %h", in0 - in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("Subtraction Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Bitwise AND
 000001     in0 = 32'h0000000F;
 000001     in1 = 32'h00000005;
 000001     fn  = 4'd2; // AND operation
 000001     #10;
        
            // Check the result
 000001     assert (out != (in0 & in1)) begin
 000001       $display("Error in Bitwise AND Test. Expected %h, got %h", in0 & in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("Bitwise AND Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Bitwise OR
 000001     in0 = 32'h0000000F;
 000001     in1 = 32'h000000F0;
 000001     fn  = 4'd3; // OR operation
 000001     #10;
        
            // Check the result
 000001     assert (out != (in0 | in1)) begin
 000001       $display("Error in Bitwise OR Test. Expected %h, got %h", in0 | in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("Bitwise OR Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Bitwise XOR
 000001     in0 = 32'h000000FF;
 000001     in1 = 32'h000000AA;
 000001     fn  = 4'd4; // XOR operation
 000001     #10;
        
            // Check the result
 000001     assert (out != (in0 ^ in1)) begin
 000001       $display("Error in Bitwise XOR Test. Expected %h, got %h", in0 ^ in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("Bitwise XOR Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Set Less Than (SLT)
 000001     in0 = 32'hFFFFFFFE; // -2 in two's complement
 000001     in1 = 32'h00000001; // 1
 000001     fn  = 4'd5; // SLT operation
 000001     #10;
        
            // Check the result
 000001     assert (out != 32'b1) begin // -2 is less than 1
 000001       $display("Error in Set Less Than Test. Expected 1, got %h", out);fail(); $finish();
 000001     end else begin
 000001       $display("Set Less Than Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Set Less Than Unsigned (SLTU)
 000001     in0 = 32'hFFFFFFFE; // Large positive number in unsigned interpretation
 000001     in1 = 32'h00000001; // 1
 000001     fn  = 4'd6; // SLTU operation
 000001     #10;
        
            // Check the result
 000001     assert (out != 32'b0) begin // 'in0' is not less than 'in1' in unsigned comparison
 000001       $display("Error in Set Less Than Unsigned Test. Expected 0, got %h", out);fail(); $finish();
 000001     end else begin
 000001       $display("Set Less Than Unsigned Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Shassertt Right Arithmetic (SRA)
 000001     in0 = 32'hFFFFFFF0; // -16 in two's complement
 000001     in1 = 32'h00000002; // Shift by 2
 000001     fn  = 4'd7; // SRA operation
 000001     #10;
        
            // Check the result
 000001     assert (out != 32'hFFFFFFFC) begin // Expected -4 in two's complement
 000001       $display("Error in Shift Right Arithmetic Test. Expected FFFFFFFC, got %h", out);fail(); $finish();
 000001     end else begin
 000001       $display("Shift Right Arithmetic Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Shift Right Logical (SRL)
 000001     in0 = 32'hF0000000; // Example value
 000001     in1 = 32'h00000004; // Shift by 4
 000001     fn  = 4'd8; // SRL operation
 000001     #10;
        
            // Check the result
 000001     assert (out != 32'h0F000000) begin // Logical shift, not arithmetic
 000001       $display("Error in Shift Right Logical Test. Expected 0F000000, got %h", out);fail(); $finish();
 000001     end else begin
 000001       $display("Shift Right Logical Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Shift Left Logical (SLL)
 000001     in0 = 32'h00000001; // 1
 000001     in1 = 32'h00000003; // Shift by 3
 000001     fn  = 4'd9; // SLL operation
 000001     #10;
        
            // Check the result
 000001     assert (out != 32'h00000008) begin // 1 << 3 equals 8
 000001       $display("Error in Shift Left Logical Test. Expected 8, got %h", out);fail(); $finish();
 000001     end else begin
 000001       $display("Shift Left Logical Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: PC Addition 
 000001     in0 = 32'h00000004;
 000001     in1 = 32'h00000004;
 000001     fn  = 4'd10; // PC_ADD operation
 000001     #10;
        
            // Check the result 
 000001     assert (out != ((in0 + in1) & 32'hfffffffe)) begin
 000001       $display("Error in PC Addition Test. Expected %h, got %h", (in0 + in1) & 32'hfffffffe, out);fail(); $finish();
 000001     end else begin
 000001       $display("PC Addition Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Copy Operand 0
 000001     in0 = 32'h0000f00c;
 000001     in1 = 32'h000a000b;
 000001     fn  = 4'd11; // CP0 operation
 000001     #10;
        
            // Check the result 
 000001     assert (out != in0) begin // Copy Operand 0
 000001       $display("Error in PC Addition Test. Expected %h, got %h", in0, out);fail(); $finish();
 000001     end else begin
 000001       $display("PC Addition Test Passed. Result is %h", out);pass();
            end
        
        
            // Test Case: Copy Operand 1
 000001     in0 = 32'h00000004;
 000001     in1 = 32'hFFFFFFF4;
 000001     fn  = 4'd12; // CP1 operation
 000001     #10;
        
            // Check the result 
 000001     assert (out != in1 ) begin // Copy Operand 1
 000001       $display("Error in PC Addition Test. Expected %h, got %h", in1, out);fail(); $finish();
 000001     end else begin
 000001       $display("PC Addition Test Passed. Result is %h", out);pass();
            end
        
            // Test Case: Default operation (Undefined)
 000001     in0 = 32'h00000005; // Arbitrary value
 000001     in1 = 32'h00000003; // Arbitrary value
 000001     fn  = 4'd13; // Undefined operation code, not used by ALU
 000001     #10;
        
            // Check the result
            // The 'default' case in ALU design sets 'out' to 32'b0.
 000001     assert (out != 32'b0) begin
 000001     $display("Error in Default Operation Test. Expected 0, got %d", out);fail(); $finish();
 000001     end else begin
 000001     $display("Default Operation Test Passed. Result is %d", out);pass();
            end
        
        
        
        
 000001     #10
        
        
        
            // Finish the simulation
 000001     $finish();
        
          end
        
        endmodule
        
        
        
