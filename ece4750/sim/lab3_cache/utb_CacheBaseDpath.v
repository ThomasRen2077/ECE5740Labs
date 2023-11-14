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

  // Extra Signals
  logic        flush;
  logic        flush_done;


  // Instantiate the processor datapath
  lab3_cache_CacheBaseDpath DUT
  ( 
    .*
  ); 


  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.
    reset = 1'b1;

    memreq_msg_addr = 32'h0; 
    memreq_msg_data = 32'h0; 

    cache_resp_msg_data = 32'h0;

    reg_en_M0 = 1'b0;
    tarray_en = 1'b0;
    tarray_wen = 1'b0;
    z6b_sel = 1'b0;
    darray_write_mux_sel = 1'b0;
    darray_wen = 1'b0;
    write_en_sel = 1'b0;
    spill_one_word_done = 1'b0;
    refill_one_word_req_sent = 1'b0;
    refill_one_word_resp_received = 1'b0;
    Spill_or_Refill_sel = 1'b0;

    
    #20
    // Simulate Write one tag and data
    @(negedge clk);
    reset = 1'b0;
    memreq_msg_addr = 32'hFFFFFFFF; 
    memreq_msg_data = 32'hFFFFFFFF; 

    cache_resp_msg_data = 32'h0;

    reg_en_M0 = 1'b1;
    tarray_en = 1'b0;
    tarray_wen = 1'b0;
    z6b_sel = 1'b0;
    darray_write_mux_sel = 1'b0;
    darray_wen = 1'b0;
    write_en_sel = 1'b0;
    spill_one_word_done = 1'b0;
    refill_one_word_req_sent = 1'b0;
    refill_one_word_resp_received = 1'b0;
    Spill_or_Refill_sel = 1'b0;

    // Clear Input
    #2
    memreq_msg_addr = 32'h0; 
    memreq_msg_data = 32'h0; 
    reg_en_M0 = 1'b0;

    // Write one tag and data
    #2
    tarray_wen = 1'b1;
    darray_wen = 1'b1;

    // End Write
    #2
    tarray_wen = 1'b0;
    darray_wen = 1'b0;

    #2
    // Check the result
    assert (memresp_msg_data != 32'hFFFFFFFF) begin
      $display("Error in Write CacheLine Test. Expected %h, got %h", 32'hFFFFFFFF, memresp_msg_data);fail(); $finish();
    end else begin
      $display("Write CacheLine Test Test Passed. Result is %h", memresp_msg_data);pass();
    end


    // Clear
    reg_en_M0 = 1'b1;

    // End
    #2
    reg_en_M0 = 1'b0;






    
    // Simulate Read Operation
    #20 
    memreq_msg_addr = 32'hAAFFFFFF; 
    memreq_msg_data = 32'h0; 

    cache_resp_msg_data = 32'h0;

    reg_en_M0 = 1'b1;
    tarray_en = 1'b1;
    tarray_wen = 1'b0;
    z6b_sel = 1'b0;
    darray_write_mux_sel = 1'b0;
    darray_wen = 1'b0;
    write_en_sel = 1'b0;
    spill_one_word_done = 1'b0;
    refill_one_word_req_sent = 1'b0;
    refill_one_word_resp_received = 1'b0;
    Spill_or_Refill_sel = 1'b0;

    #2

    memreq_msg_addr = 32'hFFFFFFFF;  // Assert tag match

    

    #2
    memreq_msg_addr = 32'h0; 

    // Check the result
    assert (tarray_match != 1'b1) begin
      $display("Error in Tag Match Test. Expected %b, got %b", 1'b1, tarray_match);fail(); $finish();
    end else begin
      $display("Tag Match Test Passed. Result is %b", tarray_match);pass();
    end

    #2
    reg_en_M0 = 1'b0;
    tarray_en = 1'b0;



    // Simulate Write Operation
    #20
    memreq_msg_addr = 32'hFFFFFFFF; 
    memreq_msg_data = 32'hAAAAAAAA; 

    cache_resp_msg_data = 32'h0;

    reg_en_M0 = 1'b1;
    tarray_en = 1'b1;
    tarray_wen = 1'b0;
    z6b_sel = 1'b0;
    darray_write_mux_sel = 1'b0;
    darray_wen = 1'b0;
    write_en_sel = 1'b0;
    spill_one_word_done = 1'b0;
    refill_one_word_req_sent = 1'b0;
    refill_one_word_resp_received = 1'b0;
    Spill_or_Refill_sel = 1'b0; // Assert tag match;

    

    #2
    darray_wen = 1'b1;
    write_en_sel = 1'b1; // Assert dirty bit = 1;

    // Check the result
    assert (tarray_match != 1'b1) begin
      $display("Error in Tag Match Test. Expected %b, got %b", 1'b1, tarray_match);fail(); $finish();
    end else begin
      $display("Tag Match Test Passed. Result is %b", tarray_match);pass();
    end

    

    #2
    // Check the result
    assert (current_dirty != 1'b1) begin
      $display("Error in Current Dirty Test. Expected %b, got %b", 1'b1, current_dirty);fail(); $finish();
    end else begin
      $display("Current Dirty Test Passed. Result is %b", current_dirty);pass();
    end


    darray_wen = 1'b0;
    write_en_sel = 1'b0;
    memreq_msg_addr = 32'h0; 
    memreq_msg_data = 32'h0; 

    #2
    reg_en_M0 = 1'b0;
    tarray_en = 1'b0;
    
    // Simulate Spill
    #20
    memreq_msg_addr = 32'h00FFFFFF; 
    memreq_msg_data = 32'h0; 
    reg_en_M0 = 1'b1;
    tarray_en = 1'b1;
    #2
    #2
    spill_one_word_done = 1'b1;
    reg_en_M0 = 1'b0;
    tarray_en = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;  // Assert Spill Done

    // Check the result
    assert (spill_done != 1'b1) begin
      $display("Error in Spill Done Test. Expected %b, got %b", 1'b1, spill_done);fail(); $finish();
    end else begin
      $display("Spill Done Test Passed. Result is %b", spill_done);pass();
    end







    // Simulate Refill
    #2
    refill_one_word_req_sent = 1'b1;
    z6b_sel = 1'b1;
    Spill_or_Refill_sel = 1'b1;
    darray_write_mux_sel = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0;

    #4
    refill_one_word_req_sent = 1'b1;
    #2
    refill_one_word_req_sent = 1'b0; // assert refill request done

    // Check the result
    assert (refill_req_done != 1'b1) begin
      $display("Error in Refill Request Done Test. Expected %b, got %b", 1'b1, refill_req_done);fail(); $finish();
    end else begin
      $display("Refill Request Done Test Passed. Result is %b", refill_req_done);pass();
    end

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h1;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h2;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h3;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h4;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h5;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h6;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h7;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h8;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'h9;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'ha;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'hb;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'hc;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'hd;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'he;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'hf;
    #2
    refill_one_word_resp_received = 1'b0;

    #12
    refill_one_word_resp_received = 1'b1;
    cache_resp_msg_data = 32'hFFFFFFF0; // Assert refill response done



    
    #2
    // Check the result
    assert (refill_resp_done != 1'b1) begin
      $display("Error in Refill Response Done Test. Expected %b, got %b", 1'b1, refill_resp_done);fail(); $finish();
    end else begin
      $display("Refill Response Done Test Passed. Result is %b", refill_resp_done);pass();
    end

    refill_one_word_resp_received = 1'b0;
    tarray_wen = 1'b1;
    darray_wen = 1'b1; 

    #2

    // Check the result
    assert (memresp_msg_data != 32'hFFFFFFF0) begin
      $display("Error in Memory Response Data Test. Expected %h, got %h", 32'hFFFFFFF0, memresp_msg_data);fail(); $finish();
    end else begin
      $display("Memory Response Data Test Passed. Result is %h", memresp_msg_data);pass();
    end
    tarray_wen = 1'b0; // Assert memresp = FFFFFFF0
    darray_wen = 1'b0;

    // Simulate flush
    flush = 1'b1;
    Spill_or_Refill_sel = 1'b0;

    #64
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;

    #4
    spill_one_word_done = 1'b1;
    #2
    spill_one_word_done = 1'b0;  // Assert Spill Done


    #200
    $finish();

  end

  
endmodule


