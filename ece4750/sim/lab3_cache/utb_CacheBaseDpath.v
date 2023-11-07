`default_nettype none
`timescale 1ps/1ps


`include "CacheBaseDpath.v"
`include "vc/trace.v"

module top(  input logic clk, input logic linetrace );
 
  logic         reset;

  // Processor to Cache 
  logic [31:0]  memreq_msg_addr;               
  logic [31:0]  memreq_msg_data;               
  logic [31:0]  memresp_msg_data;

  // Cache to Memory
  logic [31:0]  cache_req_msg_addr;               
  logic [31:0]  cache_req_msg_data;               
  logic [31:0]  cache_resp_msg_data; 


  // Control Signals
  logic        reg_en_M0;
  logic        tarray_en;
  logic        tarray_wen;
  logic        z6b_sel;
  logic        darray_write_mux_sel;
  logic        darray_wen;
  logic        write_en_sel;
  logic        spill_one_word_done;
  logic        refill_one_word_req_sent;
  logic        refill_one_word_resp_received;
  logic        Spill_or_Refill_sel;

  // Status signals
  logic        tarray_match;
  logic        current_dirty;
  logic        spill_done;
  logic        refill_req_done;
  logic        refill_resp_done;

  // extra ports
  logic        flush;

  // Instantiate the processor datapath
  lab3_cache_CacheBaseDpath DUT
  ( 
    .*
  ); 


  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.

    #20


    $finish();

  end

  
endmodule


