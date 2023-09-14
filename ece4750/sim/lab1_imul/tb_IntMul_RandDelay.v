//========================================================================
// tb_Imul_RandDelay
//========================================================================
// A Verilog test bench for our latency-insensitive IntMul with random
// source/sink delays

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
// Testbench defines
//------------------------------------------------------------------------

localparam NUM_TESTS = 28;

localparam INPUT_TEST_SIZE = 64;
localparam OUTPUT_TEST_SIZE = 32;

localparam MAX_SRC_DELAY = 32'd5;
localparam MAX_SNK_DELAY = 32'd5;

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );
  
  // DUT signals
  logic        reset;

  logic        istream_val;
  logic        istream_rdy;
  logic [63:0] istream_msg;

  logic        ostream_rdy;
  logic        ostream_val;
  logic signed [31:0] ostream_msg;

  // Source and sink messages

  logic [  INPUT_TEST_SIZE-1:0 ] src_msgs [ NUM_TESTS-1:0 ];
  logic [ OUTPUT_TEST_SIZE-1:0 ] snk_msgs [ NUM_TESTS-1:0 ];

  // Signals to indicate completion

  logic src_done;
  logic snk_done;

  //Test signals
  logic signed [31:0] a;
  logic signed [31:0] b;


  //----------------------------------------------------------------------
  // Module instantiations
  //----------------------------------------------------------------------

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Test source
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  vc_TestRandDelaySource 
  #(
    .p_msg_nbits ( INPUT_TEST_SIZE ),
    .p_num_msgs  (       NUM_TESTS )
  ) src (
    .clk         (             clk ),
    .reset       (           reset ),

    .max_delay   (   MAX_SRC_DELAY ),

    .val         (     istream_val ),
    .rdy         (     istream_rdy ),
    .msg         (     istream_msg ),

    .done        (        src_done )
  );

  assign src.src.m = src_msgs;
  
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // DUT
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
   lab1_imul_`DESIGN imul
  (
    .clk         (       clk   ),
    .reset       (       reset ),

    // Input stream

    .istream_val ( istream_val ),
    .istream_rdy ( istream_rdy ),
    .istream_msg ( istream_msg ),

    // Output stream

    .ostream_val ( ostream_val ),
    .ostream_rdy ( ostream_rdy ),
    .ostream_msg ( ostream_msg )
  );

  initial begin 
    while( 1 ) begin
      @( negedge clk );  
      if( linetrace ) imul.display_trace;
    end 
    $stop;
   end

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Test sink
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  vc_TestRandDelaySink
  #(
    .p_msg_nbits ( OUTPUT_TEST_SIZE ),
    .p_num_msgs  (        NUM_TESTS )
  ) sink (
    .clk         (              clk ),
    .reset       (            reset ),

    .max_delay   (    MAX_SNK_DELAY ),

    .val         (      ostream_val ),
    .rdy         (      ostream_rdy ),
    .msg         (      ostream_msg ),

    .done        (         snk_done )
  );

  assign sink.sink.m = snk_msgs;

  //----------------------------------------------------------------------
  // Task for adding test cases
  //----------------------------------------------------------------------

  task test_case(
    input logic [  INPUT_TEST_SIZE-1:0 ] src_msg,
    input logic [ OUTPUT_TEST_SIZE-1:0 ] snk_msg
  );
  begin
    integer idx = 0;

    // Add messages to test arrays
    src_msgs[ idx ] = src_msg;
    snk_msgs[ idx ] = snk_msg;

    idx = idx + 1;
  end
  endtask

  //----------------------------------------------------------------------
  // Test cases
  //----------------------------------------------------------------------
  // Don't forget to change NUM_TESTS above when adding new tests!

  logic [31:0] rand_msg1;
  logic [31:0] rand_msg2;

  initial begin

    // Test cases

    test_case( { 32'd2, 32'd3 },  32'd6 );
    test_case( { 32'd4, 32'd5 },  32'd20 );
    test_case( { 32'd3, 32'd4 },  32'd12 );
    test_case( { 32'd10, 32'd13 },  32'd130 );
    test_case( { 32'd7, 32'd8 },  7 * 8 );

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Random Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    for( integer x = 0; x < 5; x++ ) begin
      a = $random;
      b = $random;
      test_case( { a , b }, a * b );
    end

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Student Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    // Multiply by zero
    a = 32'h00000000; b = 32'h12345678; 
    test_case( { a , b }, a * b );


    // Multiply by one
    a = 32'h00000001; b = 32'h12345678; 
    test_case( { a , b }, a * b );

    // Multiply by negative one
    a = 32'hFFFFFFFF; b = 32'h12345678; 
    test_case( { a , b }, a * b );

    // Mask off the low 16 bits of a and b
    a = 32'h12340000; b = 32'h56780000;
    test_case( { a , b }, a * b );

    // Mask off the middle 16 bits of a and b
    a = 32'h34000056; b = 32'h12000034;
    test_case( { a , b }, a * b );

    // Sparse numbers
    a = 32'h10000001; b = 32'h80000001;
    test_case( { a , b }, a * b );

    a = 32'h10010001; b = 32'h80001001;
    test_case( { a , b }, a * b );


    // Dense numbers
    a = 32'hFFFFFFFE; b = 32'h7FFFFFFF;
    test_case( { a , b }, a * b );

    a = 32'hFFFCFFFE; b = 32'h7FFBFFFF;
    test_case( { a , b }, a * b );

    //Corner Case
    a = 32'h00000001; b = 32'hFFFFFFFF;
    test_case( { a , b }, a * b );

    a = 32'h80000000; b = 32'hFFFFFFFF;
    test_case( { a , b }, a * b );

    a = 32'hFFFFFFFF; b = 32'hFFFFFFFF;
    test_case( { a , b }, a * b );

    a = 32'hFFFFFFFF; b = 32'h80000000;
    test_case( { a , b }, a * b );

    a = 32'hFFFFFFFF; b = 32'h00000001;
    test_case( { a , b }, a * b );

    a = 32'h80000000; b = 32'h80000000;
    test_case( { a , b }, a * b );

    a = 32'h80000000; b = 32'h00000001;
    test_case( { a , b }, a * b );

    a = 32'h00000001; b = 32'h80000000;
    test_case( { a , b }, a * b );

    a = 32'h00000001; b = 32'h00000001;
    test_case( { a , b }, a * b );


  end

  //----------------------------------------------------------------------
  // Run the Test Bench
  //----------------------------------------------------------------------

  initial begin

    $display( "Starting tb_IntMul..." );
    reset = 1;
    
    // Wait a bit, then de-assert reset on negedge
    #10 
    @( negedge clk );
    reset = 0;

    // Wait for the test to finish
    while( !snk_done ) @( negedge clk );

    // Check that the source is also done
    if( !src_done )
      $error( "[ FAILED ] Our sink received more messages than our source has!" );
    else
      $display( "The testbench has finished" );

    // Delay for a bit for a better waveform
    #100
    $finish;
  end

  //----------------------------------------------------------------------
  // Timeout
  //----------------------------------------------------------------------
  // This is to ensure that our test eventually finishes, even if the sink
  // isn't receiving messages

  initial begin
    for( integer i = 0; i < 1000000; i = i + 1 ) begin
      @( negedge clk );
    end

    $error( "TIMEOUT: Testbench didn't finish in time" );
    $finish;
  end

endmodule
