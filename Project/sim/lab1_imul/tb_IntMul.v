`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN IntMulBase
`endif

`include `"`DESIGN.v`"
`include "vc/trace.v"


interface iml_interface;
  logic        clk;
  logic        reset;

  logic        istream_val;
  logic        istream_rdy;
  logic [63:0] istream_msg;

  logic        ostream_rdy;
  logic        ostream_val;
  logic [31:0] ostream_msg;

  modport DRV (
    input clk,
    output reset,
    output istream_val,
    output istream_msg,
    output ostream_rdy,

    input istream_rdy,
    input ostream_val,
    input ostream_msg
  );
endinterface


class transaction;
  rand bit [31:0]         istream_msg_a;
  rand bit [31:0]         istream_msg_b;
  bit [31:0]              ostream_msg;

  function void display();
    $display("a : %0d, b : %0d", istream_msg_a, istream_msg_b);
  endfunction

  function transaction copy();
    copy = new();
    copy.istream_msg_a = this.istream_msg_a;
    copy.istream_msg_b = this.istream_msg_b;
    copy.ostream_msg = this.ostream_msg;
  endfunction

endclass


class generator;
  transaction trans;
  mailbox #(transaction) mbx;

  function new(mailbox #(transaction) mbx);
    this.mbx = mbx;
    trans = new();
  endfunction

  task run(int a);
    for(int i = 0; i < a; i++) begin
        assert(trans.randomize()) else $display("Randomization Failed!");
        $display("[GEN] : DATA SENT TO DRIVER, time : %0d", $time);
        mbx.put(trans.copy());
        trans.display();
        #20;
    end
  endtask

  task cal(
      input int a,
      input int b
    );

    trans.istream_msg_a = a;
    trans.istream_msg_b = b;
    trans.ostream_msg = (a * b);
    $display("[GEN] : DATA SENT TO DRIVER, time : %0d", $time);
    mbx.put(trans.copy());
    trans.display();
    #20;
  endtask

endclass


class driver;
  virtual iml_interface.DRV iml_if;
  transaction data;
  mailbox #(transaction) mbx;

  function new(mailbox #(transaction) mbx);
    this.mbx = mbx;
  endfunction

  task run();
    forever begin
      mbx.get(data);
      iml_if.reset          = 1'b0;
      iml_if.istream_msg[63:32] = data.istream_msg_a;
      iml_if.istream_msg[31: 0] = data.istream_msg_b;
      iml_if.istream_val   =  1'b1;
      iml_if.ostream_rdy   =  1'b1;
      $display("[DRV] : Interface Trigger, time : %0d", $time);
      data.display();
      while(!iml_if.istream_rdy); 
      iml_if.istream_val = 1'b0;
      #20;
      $display("Finished one execuation", $time);
    end
  endtask

  task reset();
    // Send reset and init values of all signals
    iml_if.reset          = 1'b1;
    iml_if.istream_msg    = 64'b0;
    iml_if.istream_val    = 1'b0;
    iml_if.ostream_rdy    = 1'b0;
  endtask


endclass


module top(input logic clk, input logic linetrace);
  // Instantiate Interface
  iml_interface iml_if();

  // Set clk
  initial begin
    iml_if.clk = 0;
  end  

  always #10 iml_if.clk <= ~iml_if.clk;


  // Instantiate the multiplier 
  lab1_imul_`DESIGN imul
  (
    .clk   (iml_if.clk),
    .reset (iml_if.reset),
    .istream_val(iml_if.istream_val),
    .istream_rdy(iml_if.istream_rdy),
    .istream_msg(iml_if.istream_msg),
    .ostream_val   (iml_if.ostream_val),
    .ostream_rdy   (iml_if.ostream_rdy),
    .ostream_msg   (iml_if.ostream_msg)
  );

  // Instantiate the driver 
  driver drv;
  generator gen;
  mailbox #(transaction) mbx;
  
  initial begin
    mbx = new();
    gen = new(mbx);
    drv = new(mbx);
    drv.iml_if = iml_if;
    drv.reset();
  end

  initial begin
    #10;
    $display("Start of Testbench");
    fork
      gen.run(1);
      drv.run();
    join_none
  end  

    // #10;
    // while(!iml_if.istream_rdy) begin 
    //   @(negedge iml_if.clk); // Wait until ready is asserted
    // end
    // @(negedge iml_if.clk); // Move to next cycle.
    
    // iml_if.istream_val = 1'b0; // Deassert ready input
    // if(!iml_if.ostream_val) @(iml_if.ostream_val);// Wait for response
    // @(negedge iml_if.clk); // read at low clk
    
    // // Check the result
    //   assert ( (iml_if.istream_msg[63:32] * iml_if.istream_msg[31: 0]) == iml_if.ostream_msg) begin
    //     pass();
    //     $display( "Passed: in0 = %d, in1 = %d, out = %d", 
    //               iml_if.istream_msg[63:32], iml_if.istream_msg[31: 0], iml_if.ostream_msg);
    //     #20;
    //     $finish();
    //   end
    //   else begin
    //     fail();
    //     $error( "Failed: in0 = %d, in1 = %d, out = %d", 
    //             iml_if.istream_msg[63:32], iml_if.istream_msg[31: 0], iml_if.ostream_msg);
    //   end

  initial begin
    #20000;
    $finish();
  end

  initial begin
    $dumpfile("waves/dump.vcd");
    $dumpvars;
  end


  //   // Send reset and init values of all signals
  //   reset         = 1;
  //   istream_msg_a = 0;
  //   istream_msg_b = 0;
  //   istream_val   = 0;

  //   // After a moment, de-assert reset
  //   #10 
  //   reset = 0;

  //   //--------------------------------------------------------------------
  //   // Test cases
  //   //--------------------------------------------------------------------

  //   // Align test bench with negedge so that it looks better
  //   #10
  //   @(negedge clk); 

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Test #1
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  //   $display("Example Test #1");

  //   //Set inputs
  //   istream_msg_a = 32'd2;
  //   istream_msg_b = 32'd3;
  //   istream_val   =  1'b1;
  //   ostream_rdy   =  1'b1;

  //   while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
  //   @(negedge clk); // Move to next cycle.
    
  //   istream_val = 1'b0; // Deassert ready input
  //   if(!ostream_val) @(ostream_val);// Wait for response
  //   @(negedge clk); // read at low clk
    
  //   // Check the result
  //   assert ( 6 == ostream_msg) begin
  //     pass(); // Book keeping
  //     $display( "OK: in0 = %d, in1 = %d, out = %d", 
  //               istream_msg_a, istream_msg_b, ostream_msg );
  //   end
  //   else begin
  //     fail(); // Book keeping
  //     $error( "Failed: in0 = %d, in1 = %d, out = %d", 
  //             istream_msg_a, istream_msg_b, ostream_msg );
  //   end
   
  //   #10
  //   @(negedge clk);

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Test #2
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  //   $display("Example Test #2");
    
  //   //Set inputs
  //   istream_msg_a = 32'd4;
  //   istream_msg_b = 32'd5;
  //   istream_val   =  1'b1;
  //   ostream_rdy   =  1'b1;

  //   while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
  //   @(negedge clk); // Move to next cycle.
    
  //   istream_val = 1'b0; // Deassert ready input
  //   if(!ostream_val) @(ostream_val);// Wait for response
  //   @(negedge clk); // read at low clk
    
  //   // Check the result
  //   assert ( 20 == ostream_msg) begin
  //     pass(); // Book keeping
  //     $display( "OK: in0 = %d, in1 = %d, out = %d", 
  //               istream_msg_a, istream_msg_b, ostream_msg );
  //   end
  //   else begin
  //     fail(); // Book keeping
  //     $error( "Failed: in0 = %d, in1 = %d, out = %d", 
  //             istream_msg_a, istream_msg_b, ostream_msg );
  //   end
   
  //   #10
  //   @(negedge clk);

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Test #3
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  //   $display("Example Test #3");

  //   //Set inputs
  //   istream_msg_a = 32'd3;
  //   istream_msg_b = 32'd4;
  //   istream_val   =  1'b1;
  //   ostream_rdy   =  1'b1;
    
  //   while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
  //   @(negedge clk); // Move to next cycle.
    
  //   istream_val = 1'b0; // Deassert ready input
  //   if(!ostream_val) @(ostream_val);// Wait for response
  //   @(negedge clk); // read at low clk
    
  //   // Check the result
  //   assert ( 12 == ostream_msg) begin
  //     pass(); // Book keeping
  //     $display( "OK: in0 = %d, in1 = %d, out = %d", 
  //               istream_msg_a, istream_msg_b, ostream_msg );
  //   end
  //   else begin
  //     fail(); // Book keeping
  //     $error( "Failed: in0 = %d, in1 = %d, out = %d", 
  //             istream_msg_a, istream_msg_b, ostream_msg );
  //   end
   
  //   #10
  //   @(negedge clk);

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Test #4
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  //   $display("Example Test #4");

  //   //Set inputs
  //   istream_msg_a = 32'd10;
  //   istream_msg_b = 32'd13;
  //   istream_val   =  1'b1;
  //   ostream_rdy   =  1'b1;
    
  //   while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
  //   @(negedge clk); // Move to next cycle.
    
  //   istream_val = 1'b0; // Deassert ready input
  //   if(!ostream_val) @(ostream_val);// Wait for response
  //   @(negedge clk); // read at low clk
    
  //   // Check the result
  //   assert ( 130 == ostream_msg) begin
  //     pass(); // Book keeping
  //     $display( "OK: in0 = %d, in1 = %d, out = %d", 
  //               istream_msg_a, istream_msg_b, ostream_msg );
  //   end
  //   else begin
  //     fail(); // Book keeping
  //     $error( "Failed: in0 = %d, in1 = %d, out = %d", 
  //             istream_msg_a, istream_msg_b, ostream_msg );
  //   end
   
  //   #10
  //   @(negedge clk);

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Test #5
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  //   $display("Example Test #5");
    
  //   // We can simplify Testbench with tasks (declared below)
  //   test_task(8,7);

  //   #10;

  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   // Random Tests
  //   //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
  //   $display("Random Test");
  //   for( integer x = 0; x < 5; x++ ) begin
  //     test_task( $random, $random );
  //   end

  //   // Finish the testbench
    
  //   @(negedge clk);
  //   $display("Testbench finished at %d cycles", ($time()-10)/2 );
    
  //   // Delay for a better waveform
  //   #10;
  //   $finish;

  // end

  // //--------------------------------------------------------------------
  // // test_task definition
  // //--------------------------------------------------------------------
  // // Here is a tasks that test the DUT when given 2 numbers a and b 
  // //
  // // Notice that the functionality is identical to the examples above

  // task test_task( [31:0] a,  [31:0] b );
  // begin

  //   // Change inputs at the negedge
  //   @(negedge clk);

  //   // Set inputs
  //   istream_msg_a = a;
  //   istream_msg_b = b;
  //   istream_val   = 1'b1;
  //   ostream_rdy   = 1'b0;

  //   while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
  //   @(negedge clk); // Move to next cycle.
    
  //   istream_val = 1'b0; // No more ready input
  //   ostream_rdy = 1'b1; // Ready for output

  //   if(!ostream_val) @(ostream_val);// Wait for response
    
  //   // Check the result
  //   assert ( (a * b) == ostream_msg) begin
  //     pass(); // Book keeping
  //     $display( "OK: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
  //   end
  //   else begin
  //     fail(); // Book keeping
  //     $error( "Failed: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
  //   end

  //   @(negedge clk);
  // end
  // endtask
endmodule
