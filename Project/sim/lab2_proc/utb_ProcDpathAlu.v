`default_nettype none
`timescale 1ps/1ps


`include "ProcDpathAlu.v"
`include "vc/trace.v"




module top (  input logic clk, input logic linetrace );

  logic  [31:0] in0;
  logic  [31:0] in1;
  logic  [3:0]  fn;
  logic  [31:0] out;
  logic  ops_eq;
  logic  ops_lt;
  logic  ops_ltu;

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

  initial begin
    // Initialize the test inputs
    in0 = 32'h00000000;
    in1 = 32'h00000000;
    fn  = 4'd0;
    #10; // Wait for 10 time units

    // Test Case: Addition
    in0 = 32'h00000001; 
    in1 = 32'h00000001;
    fn  = 4'd0; // ADD operation
    #10; 

    // Check the result
    assert(out != in0 + in1) begin
      $display("Error in Addition Test. Expected %h, got %h", in0 + in1, out);fail(); $finish();
    end else begin
      $display("Addition Test Passed. Sum is %h", out);pass();
    end

    // Test Case: Subtraction
    in0 = 32'h00000005;
    in1 = 32'h00000003;
    fn  = 4'd1; // SUB operation
    #10;

    // Check the result
    assert(out != in0 - in1) begin
      $display("Error in Subtraction Test. Expected %h, got %h", in0 - in1, out);fail(); $finish();
    end else begin
      $display("Subtraction Test Passed. Result is %h", out);pass();
    end

    // Test Case: Bitwise AND
    in0 = 32'h0000000F;
    in1 = 32'h00000005;
    fn  = 4'd2; // AND operation
    #10;

    // Check the result
    assert (out != (in0 & in1)) begin
      $display("Error in Bitwise AND Test. Expected %h, got %h", in0 & in1, out);fail(); $finish();
    end else begin
      $display("Bitwise AND Test Passed. Result is %h", out);pass();
    end

    // Test Case: Bitwise OR
    in0 = 32'h0000000F;
    in1 = 32'h000000F0;
    fn  = 4'd3; // OR operation
    #10;

    // Check the result
    assert (out != (in0 | in1)) begin
      $display("Error in Bitwise OR Test. Expected %h, got %h", in0 | in1, out);fail(); $finish();
    end else begin
      $display("Bitwise OR Test Passed. Result is %h", out);pass();
    end

    // Test Case: Bitwise XOR
    in0 = 32'h000000FF;
    in1 = 32'h000000AA;
    fn  = 4'd4; // XOR operation
    #10;

    // Check the result
    assert (out != (in0 ^ in1)) begin
      $display("Error in Bitwise XOR Test. Expected %h, got %h", in0 ^ in1, out);fail(); $finish();
    end else begin
      $display("Bitwise XOR Test Passed. Result is %h", out);pass();
    end

    // Test Case: Set Less Than (SLT)
    in0 = 32'hFFFFFFFE; // -2 in two's complement
    in1 = 32'h00000001; // 1
    fn  = 4'd5; // SLT operation
    #10;

    // Check the result
    assert (out != 32'b1) begin // -2 is less than 1
      $display("Error in Set Less Than Test. Expected 1, got %h", out);fail(); $finish();
    end else begin
      $display("Set Less Than Test Passed. Result is %h", out);pass();
    end

    // Test Case: Set Less Than Unsigned (SLTU)
    in0 = 32'hFFFFFFFE; // Large positive number in unsigned interpretation
    in1 = 32'h00000001; // 1
    fn  = 4'd6; // SLTU operation
    #10;

    // Check the result
    assert (out != 32'b0) begin // 'in0' is not less than 'in1' in unsigned comparison
      $display("Error in Set Less Than Unsigned Test. Expected 0, got %h", out);fail(); $finish();
    end else begin
      $display("Set Less Than Unsigned Test Passed. Result is %h", out);pass();
    end

    // Test Case: Shassertt Right Arithmetic (SRA)
    in0 = 32'hFFFFFFF0; // -16 in two's complement
    in1 = 32'h00000002; // Shift by 2
    fn  = 4'd7; // SRA operation
    #10;

    // Check the result
    assert (out != 32'hFFFFFFFC) begin // Expected -4 in two's complement
      $display("Error in Shift Right Arithmetic Test. Expected FFFFFFFC, got %h", out);fail(); $finish();
    end else begin
      $display("Shift Right Arithmetic Test Passed. Result is %h", out);pass();
    end

    // Test Case: Shift Right Logical (SRL)
    in0 = 32'hF0000000; // Example value
    in1 = 32'h00000004; // Shift by 4
    fn  = 4'd8; // SRL operation
    #10;

    // Check the result
    assert (out != 32'h0F000000) begin // Logical shift, not arithmetic
      $display("Error in Shift Right Logical Test. Expected 0F000000, got %h", out);fail(); $finish();
    end else begin
      $display("Shift Right Logical Test Passed. Result is %h", out);pass();
    end

    // Test Case: Shift Left Logical (SLL)
    in0 = 32'h00000001; // 1
    in1 = 32'h00000003; // Shift by 3
    fn  = 4'd9; // SLL operation
    #10;

    // Check the result
    assert (out != 32'h00000008) begin // 1 << 3 equals 8
      $display("Error in Shift Left Logical Test. Expected 8, got %h", out);fail(); $finish();
    end else begin
      $display("Shift Left Logical Test Passed. Result is %h", out);pass();
    end

    // Test Case: PC Addition 
    in0 = 32'h00000004;
    in1 = 32'h00000004;
    fn  = 4'd10; // PC_ADD operation
    #10;

    // Check the result 
    assert (out != ((in0 + in1) & 32'hfffffffe)) begin
      $display("Error in PC Addition Test. Expected %h, got %h", (in0 + in1) & 32'hfffffffe, out);fail(); $finish();
    end else begin
      $display("PC Addition Test Passed. Result is %h", out);pass();
    end

    // Test Case: Copy Operand 0
    in0 = 32'h0000f00c;
    in1 = 32'h000a000b;
    fn  = 4'd11; // CP0 operation
    #10;

    // Check the result 
    assert (out != in0) begin // Copy Operand 0
      $display("Error in PC Addition Test. Expected %h, got %h", in0, out);fail(); $finish();
    end else begin
      $display("PC Addition Test Passed. Result is %h", out);pass();
    end


    // Test Case: Copy Operand 1
    in0 = 32'h00000004;
    in1 = 32'hFFFFFFF4;
    fn  = 4'd12; // CP1 operation
    #10;

    // Check the result 
    assert (out != in1 ) begin // Copy Operand 1
      $display("Error in PC Addition Test. Expected %h, got %h", in1, out);fail(); $finish();
    end else begin
      $display("PC Addition Test Passed. Result is %h", out);pass();
    end

    // Test Case: Default operation (Undefined)
    in0 = 32'h00000005; // Arbitrary value
    in1 = 32'h00000003; // Arbitrary value
    fn  = 4'd13; // Undefined operation code, not used by ALU
    #10;

    // Check the result
    // The 'default' case in ALU design sets 'out' to 32'b0.
    assert (out != 32'b0) begin
    $display("Error in Default Operation Test. Expected 0, got %d", out);fail(); $finish();
    end else begin
    $display("Default Operation Test Passed. Result is %d", out);pass();
    end




    #10



    // Finish the simulation
    $finish();

  end

endmodule


