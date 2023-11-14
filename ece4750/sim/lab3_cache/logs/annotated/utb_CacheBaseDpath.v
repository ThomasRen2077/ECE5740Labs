//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "CacheBaseDpath.v"
        `include "vc/trace.v"
        
%000000 module top(  input logic clk, input logic linetrace );
         
 000001   logic         reset;
        
          // Processor to Cache 
 000006   logic [31:0]  memreq_msg_addr;               
 000002   logic [31:0]  memreq_msg_data;               
 000006   logic [31:0]  memresp_msg_data;
        
          // Cache to Memory
 000006   logic [31:0]  cache_req_msg_addr;               
 000012   logic [31:0]  cache_req_msg_data;               
 000001   logic [31:0]  cache_resp_msg_data; 
        
        
          // Control Signals
 000010   logic        reg_en_M0;
 000005   logic        tarray_en;
 000004   logic        tarray_wen;
 000001   logic        z6b_sel;
 000001   logic        darray_write_mux_sel;
 000006   logic        darray_wen;
 000002   logic        write_en_sel;
 000064   logic        spill_one_word_done;
 000032   logic        refill_one_word_req_sent;
 000032   logic        refill_one_word_resp_received;
 000002   logic        Spill_or_Refill_sel;
        
          // Status signals
 000005   logic        tarray_match;
 000004   logic        current_dirty;
 000005   logic        spill_done;
 000002   logic        refill_req_done;
 000002   logic        refill_resp_done;
        
          // Extra Signals
 000001   logic        flush;
 000001   logic        flush_done;
        
        
          // Instantiate the processor datapath
          lab3_cache_CacheBaseDpath DUT
          ( 
            .*
          ); 
        
        
 000001   initial begin
        
 000001     $display("Start of Testbench");
            // Initalize all the signal inital values.
 000001     reset = 1'b1;
        
 000001     memreq_msg_addr = 32'h0; 
 000001     memreq_msg_data = 32'h0; 
        
 000001     cache_resp_msg_data = 32'h0;
        
 000001     reg_en_M0 = 1'b0;
 000001     tarray_en = 1'b0;
 000001     tarray_wen = 1'b0;
 000001     z6b_sel = 1'b0;
 000001     darray_write_mux_sel = 1'b0;
 000001     darray_wen = 1'b0;
 000001     write_en_sel = 1'b0;
 000001     spill_one_word_done = 1'b0;
 000001     refill_one_word_req_sent = 1'b0;
 000001     refill_one_word_resp_received = 1'b0;
 000001     Spill_or_Refill_sel = 1'b0;
        
            
 000001     #20
            // Simulate Write one tag and data
 000001     @(negedge clk);
 000001     reset = 1'b0;
 000001     memreq_msg_addr = 32'hFFFFFFFF; 
 000001     memreq_msg_data = 32'hFFFFFFFF; 
        
 000001     cache_resp_msg_data = 32'h0;
        
 000001     reg_en_M0 = 1'b1;
 000001     tarray_en = 1'b0;
 000001     tarray_wen = 1'b0;
 000001     z6b_sel = 1'b0;
 000001     darray_write_mux_sel = 1'b0;
 000001     darray_wen = 1'b0;
 000001     write_en_sel = 1'b0;
 000001     spill_one_word_done = 1'b0;
 000001     refill_one_word_req_sent = 1'b0;
 000001     refill_one_word_resp_received = 1'b0;
 000001     Spill_or_Refill_sel = 1'b0;
        
            // Clear Input
 000001     #2
 000001     memreq_msg_addr = 32'h0; 
 000001     memreq_msg_data = 32'h0; 
 000001     reg_en_M0 = 1'b0;
        
            // Write one tag and data
 000001     #2
 000001     tarray_wen = 1'b1;
 000001     darray_wen = 1'b1;
        
            // End Write
 000001     #2
 000001     tarray_wen = 1'b0;
 000001     darray_wen = 1'b0;
        
 000001     #2
            // Check the result
 000001     assert (memresp_msg_data != 32'hFFFFFFFF) begin
 000001       $display("Error in Write CacheLine Test. Expected %h, got %h", 32'hFFFFFFFF, memresp_msg_data);fail(); $finish();
 000001     end else begin
 000001       $display("Write CacheLine Test Test Passed. Result is %h", memresp_msg_data);pass();
            end
        
        
            // Clear
 000001     reg_en_M0 = 1'b1;
        
            // End
 000001     #2
 000001     reg_en_M0 = 1'b0;
        
        
        
        
        
        
            
            // Simulate Read Operation
 000001     #20 
 000001     memreq_msg_addr = 32'hAAFFFFFF; 
 000001     memreq_msg_data = 32'h0; 
        
 000001     cache_resp_msg_data = 32'h0;
        
 000001     reg_en_M0 = 1'b1;
 000001     tarray_en = 1'b1;
 000001     tarray_wen = 1'b0;
 000001     z6b_sel = 1'b0;
 000001     darray_write_mux_sel = 1'b0;
 000001     darray_wen = 1'b0;
 000001     write_en_sel = 1'b0;
 000001     spill_one_word_done = 1'b0;
 000001     refill_one_word_req_sent = 1'b0;
 000001     refill_one_word_resp_received = 1'b0;
 000001     Spill_or_Refill_sel = 1'b0;
        
 000001     #2
        
 000001     memreq_msg_addr = 32'hFFFFFFFF;  // Assert tag match
        
            
        
 000001     #2
 000001     memreq_msg_addr = 32'h0; 
        
            // Check the result
 000001     assert (tarray_match != 1'b1) begin
 000001       $display("Error in Tag Match Test. Expected %b, got %b", 1'b1, tarray_match);fail(); $finish();
 000001     end else begin
 000001       $display("Tag Match Test Passed. Result is %b", tarray_match);pass();
            end
        
 000001     #2
 000001     reg_en_M0 = 1'b0;
 000001     tarray_en = 1'b0;
        
        
        
            // Simulate Write Operation
 000001     #20
 000001     memreq_msg_addr = 32'hFFFFFFFF; 
 000001     memreq_msg_data = 32'hAAAAAAAA; 
        
 000001     cache_resp_msg_data = 32'h0;
        
 000001     reg_en_M0 = 1'b1;
 000001     tarray_en = 1'b1;
 000001     tarray_wen = 1'b0;
 000001     z6b_sel = 1'b0;
 000001     darray_write_mux_sel = 1'b0;
 000001     darray_wen = 1'b0;
 000001     write_en_sel = 1'b0;
 000001     spill_one_word_done = 1'b0;
 000001     refill_one_word_req_sent = 1'b0;
 000001     refill_one_word_resp_received = 1'b0;
 000001     Spill_or_Refill_sel = 1'b0; // Assert tag match;
        
            
        
 000001     #2
 000001     darray_wen = 1'b1;
 000001     write_en_sel = 1'b1; // Assert dirty bit = 1;
        
            // Check the result
 000001     assert (tarray_match != 1'b1) begin
 000001       $display("Error in Tag Match Test. Expected %b, got %b", 1'b1, tarray_match);fail(); $finish();
 000001     end else begin
 000001       $display("Tag Match Test Passed. Result is %b", tarray_match);pass();
            end
        
            
        
 000001     #2
            // Check the result
 000001     assert (current_dirty != 1'b1) begin
 000001       $display("Error in Current Dirty Test. Expected %b, got %b", 1'b1, current_dirty);fail(); $finish();
 000001     end else begin
 000001       $display("Current Dirty Test Passed. Result is %b", current_dirty);pass();
            end
        
        
 000001     darray_wen = 1'b0;
 000001     write_en_sel = 1'b0;
 000001     memreq_msg_addr = 32'h0; 
 000001     memreq_msg_data = 32'h0; 
        
 000001     #2
 000001     reg_en_M0 = 1'b0;
 000001     tarray_en = 1'b0;
            
            // Simulate Spill
 000001     #20
 000001     memreq_msg_addr = 32'h00FFFFFF; 
 000001     memreq_msg_data = 32'h0; 
 000001     reg_en_M0 = 1'b1;
 000001     tarray_en = 1'b1;
 000001     #2
 000001     #2
 000001     spill_one_word_done = 1'b1;
 000001     reg_en_M0 = 1'b0;
 000001     tarray_en = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;  // Assert Spill Done
        
            // Check the result
 000001     assert (spill_done != 1'b1) begin
 000001       $display("Error in Spill Done Test. Expected %b, got %b", 1'b1, spill_done);fail(); $finish();
 000001     end else begin
 000001       $display("Spill Done Test Passed. Result is %b", spill_done);pass();
            end
        
        
        
        
        
        
        
            // Simulate Refill
 000001     #2
 000001     refill_one_word_req_sent = 1'b1;
 000001     z6b_sel = 1'b1;
 000001     Spill_or_Refill_sel = 1'b1;
 000001     darray_write_mux_sel = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0;
        
 000001     #4
 000001     refill_one_word_req_sent = 1'b1;
 000001     #2
 000001     refill_one_word_req_sent = 1'b0; // assert refill request done
        
            // Check the result
 000001     assert (refill_req_done != 1'b1) begin
 000001       $display("Error in Refill Request Done Test. Expected %b, got %b", 1'b1, refill_req_done);fail(); $finish();
 000001     end else begin
 000001       $display("Refill Request Done Test Passed. Result is %b", refill_req_done);pass();
            end
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h1;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h2;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h3;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h4;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h5;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h6;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h7;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h8;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'h9;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'ha;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'hb;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'hc;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'hd;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'he;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'hf;
 000001     #2
 000001     refill_one_word_resp_received = 1'b0;
        
 000001     #12
 000001     refill_one_word_resp_received = 1'b1;
 000001     cache_resp_msg_data = 32'hFFFFFFF0; // Assert refill response done
        
        
        
            
 000001     #2
            // Check the result
 000001     assert (refill_resp_done != 1'b1) begin
 000001       $display("Error in Refill Response Done Test. Expected %b, got %b", 1'b1, refill_resp_done);fail(); $finish();
 000001     end else begin
 000001       $display("Refill Response Done Test Passed. Result is %b", refill_resp_done);pass();
            end
        
 000001     refill_one_word_resp_received = 1'b0;
 000001     tarray_wen = 1'b1;
 000001     darray_wen = 1'b1; 
        
 000001     #2
        
            // Check the result
 000001     assert (memresp_msg_data != 32'hFFFFFFF0) begin
 000001       $display("Error in Memory Response Data Test. Expected %h, got %h", 32'hFFFFFFF0, memresp_msg_data);fail(); $finish();
 000001     end else begin
 000001       $display("Memory Response Data Test Passed. Result is %h", memresp_msg_data);pass();
            end
 000001     tarray_wen = 1'b0; // Assert memresp = FFFFFFF0
 000001     darray_wen = 1'b0;
        
            // Simulate flush
 000001     flush = 1'b1;
 000001     Spill_or_Refill_sel = 1'b0;
        
 000001     #64
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;
        
 000001     #4
 000001     spill_one_word_done = 1'b1;
 000001     #2
 000001     spill_one_word_done = 1'b0;  // Assert Spill Done
        
        
 000001     #200
 000001     $finish();
        
          end
        
          
        endmodule
        
        
        
