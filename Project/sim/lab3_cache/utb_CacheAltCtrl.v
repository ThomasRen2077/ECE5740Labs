`default_nettype none
`timescale 1ps/1ps


`include "CacheAltCtrl.v"
`include "vc/trace.v"

module top(  input logic clk, input logic linetrace );
 
  logic         reset;

  // Processor to Cache 
  logic         memreq_val;                                  // Request Message to Data Memory Valid Signal         
  logic         memreq_rdy;                                  // Data Memory Ready Signal
  logic         memreq_type;                                 // Data Operation Type of Memory Request Message

  logic         memresp_val;                                 // Data Memory Response Message Valid Signal
  logic         memresp_rdy;                                 // Processor Ready to Receive Data Signal
  logic         memresp_type;                                // Data Operation Type of Memory Request Message

  // Cache to Memory
  logic         cache_req_val;                               // Request Message to Data cache Valid Signal         
  logic         cache_req_rdy;                               // Cache Ready Signal
  logic         cache_req_type;                              // Data Operation Type of Cache Request Message

  logic         cache_resp_val;                              // Cache Response Message Valid Signal
  logic         cache_resp_rdy;                              // Processor Ready to Receive Cache Signal
  logic         cache_resp_type;                             // Data Operation Type of Cache Request Message



  // Control Signals
  logic        reg_en_M0;
  logic        tarray_en;
  logic        tarray_en2;
  logic        tarray_wen;
  logic        tarray_wen2;
  logic        z6b_sel;
  logic        darray_write_mux_sel;
  logic        darray_wen;
  logic        darray_wen2;
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
  logic        current_lru;
  logic        flush_dirty;

  // extra ports
  logic        flush;

  // Instantiate the processor datapath
  lab3_cache_CacheAltCtrl DUT
  ( 
    .*
  ); 


  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.
    @(negedge clk);
    reset = 1'b1;
    memreq_val = 1'b0;
    memreq_type = 1'b0;
    memresp_rdy = 1'b0;
    cache_req_rdy = 1'b0;
    cache_resp_val = 1'b0;
    cache_resp_type = 1'b0;
    tarray_match = 1'b0;
    current_dirty = 1'b0;
    spill_done = 1'b0;
    refill_req_done = 1'b0;
    refill_resp_done = 1'b0;
    flush = 1'b0;
    current_lru = 1'b0;
    flush_dirty = 1'b0;

    // Simulate Read Hit
    #20
    reset = 1'b0;
    memreq_val = 1'b1;
    memresp_rdy = 1'b1;

    #2;
    memreq_val = 1'b0; 
    tarray_match = 1'b1; 

    // Check memresp_val == 1
    @(posedge clk);
    assert (memresp_val != 1) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish(); 
    end else begin
      $display("Memory Response Test Passed. Result is %b", memresp_val);pass();
    end


    #2;
    @(negedge clk);
    tarray_match = 1'b0; 

    // Check memresp_val == 0
    @(posedge clk);
    assert (memresp_val != 0) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end


    // Simulate Write Hit
    #20
    @(negedge clk);
    memreq_val = 1'b1;
    memreq_type = 1'b1;

    #2;
    memreq_val = 1'b0;
    memreq_type = 1'b0;
    tarray_match = 1'b1; 

    // Check Data Array Write Enable = 1;
    @(posedge clk);
    assert (darray_wen != 1) begin
      $display("Error in Data Array Write Enable Test. Expected %b, got %b", 1'b1, darray_wen);fail(); $finish();
    end else begin
      $display("Data Array Write Enable Test Passed. Result is %b", darray_wen);pass();
    end

    #2;
    @(negedge clk);
    tarray_match = 1'b0; 
    // Check Data Array Write Enable = 0;
    assert (darray_wen != 0) begin
      $display("Error in Data Array Write Enable Test. Expected %b, got %b", 1'b0, darray_wen);fail(); $finish();
    end else begin
      $display("Data Array Write Enable Test Passed. Result is %b", darray_wen);pass();
    end

    // Simulate Read Miss
    #20
    memreq_val = 1'b1;

    #2;
    memreq_val = 1'b0;
    tarray_match =  1'b0;
    current_dirty = 1'b1;

    #2
    cache_req_rdy = 1'b1;

    #32
    spill_done = 1'b1;

    #2
    spill_done = 1'b0;

    #32
    refill_req_done = 1'b1;
    cache_resp_val = 1'b1;
    cache_resp_type = 1'b1;

    #32
    refill_resp_done = 1'b1;
    cache_resp_val = 1'b0;
    cache_resp_type = 1'b0; 

    // Check tarray_wen and darray_wen == 1
    @(posedge clk);
    assert (tarray_wen2 != 1 || darray_wen2 != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b1, 1'b1, tarray_wen2, darray_wen2);fail(); $finish();
    end else begin
      $display("Tag or Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen2, darray_wen2);pass();
    end


    @(negedge clk);
    refill_resp_done = 1'b0;
    refill_req_done = 1'b0;
    tarray_match = 1'b1; 

    // Check memresp_val == 1
    @(posedge clk);
    assert (memresp_val != 1 ) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end

    // Check tarray_wen and darray_wen == 0;
    @(posedge clk);
    assert (tarray_wen2 != 0 || darray_wen2 != 0) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b0, 1'b0, tarray_wen2, darray_wen2);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen2, darray_wen2);pass();
    end

    #2
    tarray_match = 1'b0;

    // Simulate Write Miss
    #20
    @(negedge clk);
    memreq_val = 1'b1;
    memreq_type = 1'b1;

    #2;
    memreq_val = 1'b0;
    memreq_type = 1'b0;
    tarray_match =  1'b0;
    current_dirty = 1'b0;

    #2
    cache_req_rdy = 1'b1;

    #32
    refill_req_done = 1'b1;
    cache_resp_val = 1'b1;
    cache_resp_type = 1'b1;

    #32
    refill_resp_done = 1'b1;
    cache_resp_val = 1'b0;
    cache_resp_type = 1'b0; 

    // Check tarray_wen2 and darray_wen2 == 1;
    @(posedge clk);
    assert (tarray_wen2 != 1 || darray_wen2 != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b1, 1'b1, tarray_wen2, darray_wen2);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen2, darray_wen2);pass();
    end

    

    @(negedge clk);
    refill_resp_done = 1'b0;
    refill_req_done = 1'b0;
    tarray_match = 1'b1; 
    memresp_rdy = 1'b0; 

    // Check tarray_wen2 == 0 and darray_wen == 1;
    @(posedge clk);
    assert (tarray_wen2 != 0 || darray_wen != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b0, 1'b0, tarray_wen2, darray_wen2);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen2, darray_wen2);pass();
    end

    #2
    //Check memresp_val == 1
    assert (memresp_val != 1) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end

    
    
    // Test another way
    @(negedge clk);
    current_lru = 1'b1;

    // Simulate Read Hit
    #20
    reset = 1'b0;
    memreq_val = 1'b1;
    memresp_rdy = 1'b1;

    #2;
    memreq_val = 1'b0; 
    tarray_match = 1'b1;
    // Check memresp_val == 1
    @(posedge clk);
    assert (memresp_val != 1) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish(); 
    end else begin
      $display("Memory Response Test Passed. Result is %b", memresp_val);pass();
    end


    #2;
    @(negedge clk);
    tarray_match = 1'b0; 
    // Check memresp_val == 0
    @(posedge clk);
    assert (memresp_val != 0) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end


    // Simulate Write Hit
    #20
    @(negedge clk);
    memreq_val = 1'b1;
    memreq_type = 1'b1;

    #2;
    memreq_val = 1'b0;
    memreq_type = 1'b0;
    tarray_match = 1'b1; 

    // Check Data Array Write Enable = 1;
    @(posedge clk);
    assert (darray_wen2 != 1) begin
      $display("Error in Data Array Write Enable Test. Expected %b, got %b", 1'b1, darray_wen2);fail(); $finish();
    end else begin
      $display("Data Array Write Enable Test Passed. Result is %b", darray_wen2);pass();
    end

    #2;
    @(negedge clk);
    tarray_match = 1'b0; 
    // Check Data Array Write Enable = 0;
    assert (darray_wen2 != 0) begin
      $display("Error in Data Array Write Enable Test. Expected %b, got %b", 1'b0, darray_wen2);fail(); $finish();
    end else begin
      $display("Data Array Write Enable Test Passed. Result is %b", darray_wen2);pass();
    end

    // Simulate Read Miss
    #20
    memreq_val = 1'b1;

    #2;
    memreq_val = 1'b0;
    tarray_match =  1'b0;
    current_dirty = 1'b1;

    #2
    cache_req_rdy = 1'b1;

    #32
    spill_done = 1'b1;

    #2
    spill_done = 1'b0;

    #32
    refill_req_done = 1'b1;
    cache_resp_val = 1'b1;
    cache_resp_type = 1'b1;

    #32
    refill_resp_done = 1'b1;
    cache_resp_val = 1'b0;
    cache_resp_type = 1'b0; 

    // Check tarray_wen and darray_wen == 1;
    @(posedge clk);
    assert (tarray_wen != 1 || darray_wen != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b1, 1'b1, tarray_wen, darray_wen);fail(); $finish();
    end else begin
      $display("Tag or Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen, darray_wen);pass();
    end


    @(negedge clk);
    refill_resp_done = 1'b0; 
    refill_req_done = 1'b0;
    tarray_match = 1'b1; 

    // Check memresp_val == 1
    @(posedge clk);
    assert (memresp_val != 1 ) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end

    // Check tarray_wen and darray_wen == 0;
    @(posedge clk);
    assert (tarray_wen != 0 || darray_wen != 0) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b0, 1'b0, tarray_wen, darray_wen);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen, darray_wen);pass();
    end

    #2
    tarray_match = 1'b0;

    // Simulate Write Miss
    #20
    @(negedge clk);
    memreq_val = 1'b1;
    memreq_type = 1'b1;

    #2;
    memreq_val = 1'b0;
    memreq_type = 1'b0;
    tarray_match =  1'b0;
    current_dirty = 1'b0;

    #2
    cache_req_rdy = 1'b1;

    #32
    refill_req_done = 1'b1;
    cache_resp_val = 1'b1;
    cache_resp_type = 1'b1;

    #32
    refill_resp_done = 1'b1;
    cache_resp_val = 1'b0;
    cache_resp_type = 1'b0; // Assert tarray_wen and darray_wen == 1;

    // Check tarray_wen and darray_wen == 1;
    @(posedge clk);
    assert (tarray_wen != 1 || darray_wen != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b1, 1'b1, tarray_wen, darray_wen);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen, darray_wen);pass();
    end

    

    @(negedge clk);
    refill_resp_done = 1'b0;
    refill_req_done = 1'b0;
    tarray_match = 1'b1; 
    memresp_rdy = 1'b0;  

    // Check tarray_wen == 0 and darray_wen2 == 1;
    @(posedge clk);
    assert (tarray_wen != 0 || darray_wen2 != 1) begin
      $display("Error in Tag or Data Array Write Enable Test. Expected %b, %b, got %b, %b", 1'b0, 1'b0, tarray_wen, darray_wen);fail(); $finish();
    end else begin
      $display("Tag and Data Array Write Enable Test Passed. Result is %b, %b", tarray_wen, darray_wen);pass();
    end

    #2
    //Check memresp_val != 1
    assert (memresp_val != 1) begin
      $display("Error in Memory Response Valid Test. Expected %b, got %b", 1'b1, memresp_val);fail(); $finish();
    end else begin
      $display("Memory Response Valid Test Passed. Result is %b", memresp_val);pass();
    end



    #20
    flush = 1'b1;
    flush_dirty = 1'b1;




    #20


    $finish();

  end

  
endmodule


