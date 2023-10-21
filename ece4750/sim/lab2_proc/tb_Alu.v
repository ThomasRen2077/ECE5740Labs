//========================================================================
// Unit Testbench for ProcDpathAlu
//========================================================================
`default_nettype none
//`timescale 1ns/1ns
`include "ProcDpathAlu.v"



module top(  input logic clk, input logic linetrace );

  // Signals
  reg  [31:0] in0;
  reg  [31:0] in1;
  reg  [3:0]  fn;
  wire [31:0] out;
  wire ops_eq;
  wire ops_lt;
  wire ops_ltu;

  // Instantiate the Device Under Test (DUT)
  lab2_proc_ProcDpathAlu dut (
    .in0    (in0),
    .in1    (in1),
    .fn     (fn),
    .out    (out),
    .ops_eq (ops_eq),
    .ops_lt (ops_lt),
    .ops_ltu(ops_ltu)
  );

  // Initialize signals
  initial begin
    in0 = 32'h0;
    in1 = 32'h0;
    fn  = 4'h0;
  end

  // Test Cases
  initial begin
    // Basic ADD operation (fn = 4'd0)
    in0 = 32'h1; in1 = 32'h1; fn = 4'd0;
    #10;
    $display("Test 1: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 2
    in0 = 32'h2; in1 = 32'h2; fn = 4'd0;
    #10;
    $display("Test 2: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 3
    in0 = 32'h3; in1 = 32'h3; fn = 4'd0;
    #10;
    $display("Test 3: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 4
    in0 = 32'h4; in1 = 32'h4; fn = 4'd0;
    #10;
    $display("Test 4: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 5
    in0 = 32'h5; in1 = 32'h5; fn = 4'd0;
    #10;
    $display("Test 5: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 6
    in0 = 32'h6; in1 = 32'h6; fn = 4'd0;
    #10;
    $display("Test 6: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 7
    in0 = 32'h7; in1 = 32'h7; fn = 4'd0;
    #10;
    $display("Test 7: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 8
    in0 = 32'h8; in1 = 32'h8; fn = 4'd0;
    #10;
    $display("Test 8: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 9
    in0 = 32'h9; in1 = 32'h9; fn = 4'd0;
    #10;
    $display("Test 9: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 10
    in0 = 32'h10; in1 = 32'h10; fn = 4'd0;
    #10;
    $display("Test 10: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 11
    in0 = 32'h11; in1 = 32'h11; fn = 4'd0;
    #10;
    $display("Test 11: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 12
    in0 = 32'h12; in1 = 32'h12; fn = 4'd0;
    #10;
    $display("Test 12: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 13
    in0 = 32'h13; in1 = 32'h13; fn = 4'd0;
    #10;
    $display("Test 13: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 14
    in0 = 32'h14; in1 = 32'h14; fn = 4'd0;
    #10;
    $display("Test 14: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 15
    in0 = 32'h15; in1 = 32'h15; fn = 4'd0;
    #10;
    $display("Test 15: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 16
    in0 = 32'h16; in1 = 32'h16; fn = 4'd0;
    #10;
    $display("Test 16: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 17
    in0 = 32'h17; in1 = 32'h17; fn = 4'd0;
    #10;
    $display("Test 17: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 18
    in0 = 32'h18; in1 = 32'h18; fn = 4'd0;
    #10;
    $display("Test 18: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 19
    in0 = 32'h19; in1 = 32'h19; fn = 4'd0;
    #10;
    $display("Test 19: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 20
    in0 = 32'h20; in1 = 32'h20; fn = 4'd0;
    #10;
    $display("Test 20: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 21
    in0 = 32'h21; in1 = 32'h21; fn = 4'd0;
    #10;
    $display("Test 21: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 22
    in0 = 32'h22; in1 = 32'h22; fn = 4'd0;
    #10;
    $display("Test 22: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 23
    in0 = 32'h23; in1 = 32'h23; fn = 4'd0;
    #10;
    $display("Test 23: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 24
    in0 = 32'h24; in1 = 32'h24; fn = 4'd0;
    #10;
    $display("Test 24: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 25
    in0 = 32'h25; in1 = 32'h25; fn = 4'd0;
    #10;
    $display("Test 25: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 26
    in0 = 32'h26; in1 = 32'h26; fn = 4'd0;
    #10;
    $display("Test 26: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 27
    in0 = 32'h27; in1 = 32'h27; fn = 4'd0;
    #10;
    $display("Test 27: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 28
    in0 = 32'h28; in1 = 32'h28; fn = 4'd0;
    #10;
    $display("Test 28: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 29
    in0 = 32'h29; in1 = 32'h29; fn = 4'd0;
    #10;
    $display("Test 29: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // Test case 30
    in0 = 32'h30; in1 = 32'h30; fn = 4'd0;
    #10;
    $display("Test 30: %h + %h = %h, ops_eq = %b, ops_lt = %b, ops_ltu = %b", in0, in1, out, ops_eq, ops_lt, ops_ltu);

    // End of tests
    $finish;
  end

endmodule

