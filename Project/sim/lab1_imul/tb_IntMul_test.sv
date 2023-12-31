`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN IntMulBase
`endif

`include `"`DESIGN.v`"
`include "vc/trace.v"

class transaction;
  randc int         istream_msg_a;
  randc int         istream_msg_b;
  int               ostream_msg;

  function display();
    $display("a : %0d, b : %0d", istream_msg_a, istream_msg_b);
  endfunction

  function copy();
    copy() = new();
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

  task run();
    for(int i = 0; i < 20; i++) begin
      assert(trans.randomize()) else $display("Randomization Failed!");
      mbx.put(trans.copy());
    end
  endtask
endclass

interface iml_interface;
  // DUT signals
  logic        reset;

  logic        istream_val;
  logic        istream_rdy;
  logic [63:0] istream_msg;

  logic        ostream_rdy;
  logic        ostream_val;
  logic [31:0] ostream_msg;

  modport DRV (
    input reset,
    input istream_val,
    input istream_msg,
    input ostream_rdy,

    output istream_rdy,
    output ostream_val,
    output ostream_msg
  );

endinterface

class driver;
  virtual iml_interface.DRV iml_if;

  task add_stimuli(
    input logic clk, 
    input logic [31:0] istream_msg_a,
    input logic [31:0] istream_msg_b
    );

    iml_if.istream_msg[63:32] = istream_msg_a;
    iml_if.istream_msg[31: 0] = istream_msg_b;
    iml_if.istream_val   =  1'b1;
    iml_if.ostream_rdy   =  1'b1;
  endtask

endclass

module top(input logic clk, input logic linetrace);
  // Instantiate Interface
  iml_interface iml_if();
  
  // Instantiate the multiplier 
  lab1_imul_`DESIGN imul
  (
    .clk   (clk),
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
    $display("Start of Testbench");
    drv = new();
    drv.iml_if = iml_if;
    drv.add_stimuli(clk, 32'd2, 32'd3);

    $display("Reading result!");
    while(!iml_if.istream_rdy) @(negedge clk); // Wait until ready is asserted
    $display("Istream_rdy is asserted!");
    @(negedge clk); // Move to next cycle.
    
    iml_if.istream_val = 1'b0; // Deassert ready input
    if(!iml_if.ostream_val) @(iml_if.ostream_val);// Wait for response
    $display("Ostream_val is asserted!");
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( (iml_if.istream_msg[63:32] * iml_if.istream_msg[31: 0]) == iml_if.ostream_msg) begin
      pass();
      $display( "Passed: in0 = %d, in1 = %d, out = %d", 
                iml_if.istream_msg[63:32], iml_if.istream_msg[31: 0], iml_if.ostream_msg);
    end
    else begin
      fail();
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              iml_if.istream_msg[63:32], iml_if.istream_msg[31: 0], iml_if.ostream_msg);
    end

    #10;
    $finish();
  end

  initial begin
    #200;
    $finish();
  end

  initial begin
    mbx = new();
    gen = new(mbx);
    gen.run();
  end
endmodule