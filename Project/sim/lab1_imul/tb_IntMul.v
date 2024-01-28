`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN IntMulBase
`endif

`include `"`DESIGN.v`"
`include "vc/trace.v"
`include "vc/TestRandDelaySource.v"
`include "vc/TestRandDelaySink.v"

//------------------------------------------------------------------------
// Testbench classes
//------------------------------------------------------------------------

class mul_interface;
  logic               clk;
  logic               reset;

  logic               istream_val;
  logic               istream_rdy;
  logic [63:0]        istream_msg;

  logic               ostream_rdy;
  logic               ostream_val;
  logic signed [31:0] ostream_msg;
endclass


class driver;
  int i = 0;
  int count_cycles = 0;
  int current_time = 0;
  mul_interface mif;

  function new(mul_interface mif);
    this.mif = mif;
  endfunction

  task run(input logic signed [31:0] a, input logic signed [31:0] b );
  begin

    // Change inputs at the negedge
    @(negedge mif.clk);
    // Record Start Time
    current_time = $time;

    // Set inputs
    mif.istream_msg[63:32] = a;
    mif.istream_msg[31:0] = b;
    mif.istream_val   = 1'b1;
    mif.ostream_rdy   = 1'b0;

    // Wait until ready is asserted
    while(!mif.istream_rdy) @(negedge mif.clk); 
    // Move to next cycle.
    @(negedge mif.clk); 

    // No more ready input
    mif.istream_val = 1'b0; 
    // Ready for output  
    mif.ostream_rdy = 1'b1; 
    // Wait for response
    if(!mif.ostream_val) @(mif.ostream_val);
    // accumulate the cycle time;
    count_cycles += (($time - current_time) / 2);

    // Check the result
    assert ( (a * b) == mif.ostream_msg) begin
      pass(); 
      $display( "Test # %0d Passed: in0 = %d, in1 = %d, out = %d", i, a, b, mif.ostream_msg );
      i++;
    end
    else begin
      fail();
      $error( "Test # %0d Failed: in0 = %d, in1 = %d, out = %d", i, a, b, mif.ostream_msg );
      i++;
    end

    @(negedge mif.clk);
  end
  endtask

  task reset();
  begin
    // Send reset and init values of all signals
    mif.reset         = '1;
    mif.istream_msg   = '0;
    mif.istream_val   = '0;

    // After a moment, de-assert reset
    #10; 
    mif.reset = '0;
  end
  endtask

  task display_cycles();
    begin
      $display("The Above Testcases Cost %d cycles", count_cycles );
      count_cycles = 0;
    end
  endtask

endclass

//------------------------------------------------------------------------
// Top-level Module
//------------------------------------------------------------------------
module top(  input logic clk, input logic linetrace );
  mul_interface mif;
  driver drv;

  // Test Signals
  logic [31:0] a;
  logic [31:0] b;

  always @(*) begin
    mif.clk = clk;
  end


  lab1_imul_`DESIGN imul
  (
    .clk   (mif.clk),
    .reset (mif.reset),
    .istream_val(mif.istream_val),
    .istream_rdy(mif.istream_rdy),
    .istream_msg(mif.istream_msg),
    .ostream_val   (mif.ostream_val),
    .ostream_rdy   (mif.ostream_rdy),
    .ostream_msg   (mif.ostream_msg)
  );

  //----------------------------------------------------------------------
  // Run the TestBench
  //----------------------------------------------------------------------

  initial begin

    $display("Start of Testbench");
    mif = new();
    drv = new(mif);

    drv.reset();

    #10
    @(negedge clk); 

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Example Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Fixed Number Tests");
    drv.run(32'd2, 32'd3);
    drv.run(32'd4, 32'd5);
    drv.run(32'd3, 32'd4);
    drv.run(32'd10, 32'd13);
    drv.run(32'd8, 32'd7);
    drv.display_cycles();
    #10;

    $display("Random Tests");
    drv.i = 0;
    for( integer x = 0; x < 5; x++ ) begin
      drv.run( $random, $random );
    end
    drv.display_cycles();
    #10;

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Student Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Student Tests");
    drv.i = 0;
    // Multiply by zero
    a = 32'h00000000; b = 32'h12345678; 
    drv.run(a,b);

    // Multiply by one
    a = 32'h00000001; b = 32'h12345678; 
    drv.run(a,b);

    // Multiply by negative one
    a = 32'hFFFFFFFF; b = 32'h12345678; 
    drv.run(a,b);

    // Mask off the low 16 bits of a and b
    a = 32'h12340000; b = 32'h56780000;
    drv.run(a,b);

    // Mask off the middle 16 bits of a and b
    a = 32'h34000056; b = 32'h12000034;
    drv.run(a,b);

    // Sparse numbers
    a = 32'h10000001; b = 32'h80000001;
    drv.run(a,b);

    a = 32'h10010001; b = 32'h80001001;
    drv.run(a,b);


    // Dense numbers
    a = 32'hFFFFFFFE; b = 32'h7FFFFFFF;
    drv.run(a,b);

    a = 32'hFFFCFFFE; b = 32'h7FFBFFFF;
    drv.run(a,b);

    //Corner Case
    a = 32'h00000001; b = 32'hFFFFFFFF;
    drv.run(a,b);

    a = 32'h80000000; b = 32'hFFFFFFFF;
    drv.run(a,b);

    a = 32'hFFFFFFFF; b = 32'hFFFFFFFF;
    drv.run(a,b);

    a = 32'hFFFFFFFF; b = 32'h80000000;
    drv.run(a,b);

    a = 32'hFFFFFFFF; b = 32'h00000001;
    drv.run(a,b);

    a = 32'h80000000; b = 32'h80000000;
    drv.run(a,b);

    a = 32'h80000000; b = 32'h00000001;
    drv.run(a,b);

    a = 32'h00000001; b = 32'h80000000;
    drv.run(a,b);

    a = 32'h00000001; b = 32'h00000001;
    drv.run(a,b);

    //More Random Cases
    for( integer x = 0; x < 20; x++ ) begin
      drv.run( $random, $random );
    end


    drv.display_cycles();

    #10;
    $finish();
  end

  initial begin
    for( integer i = 0; i < 1000000; i = i + 1 ) begin
      @( negedge clk );
    end

    $error( "TIMEOUT: Testbench didn't finish in time" );
    $finish;
  end
endmodule

