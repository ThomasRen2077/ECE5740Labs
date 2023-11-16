`ifndef LAB3_CACHE_CACHE_ALT_DPATH_V
`define LAB3_CACHE_CACHE_ALT_DPATH_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/muxes.v"
`include "Mux16.v"




// -------------------- Cache Datapath --------------------
module lab3_cache_CacheAltDpath
(
  input  logic         clk,
  input  logic         reset,
  
  // Processor to Cache 
  input  logic [31:0]  memreq_msg_addr,               
  input  logic [31:0]  memreq_msg_data,               
  output logic [31:0]  memresp_msg_data,

  // Cache to Memory
  output logic [31:0]  cache_req_msg_addr,               
  output logic [31:0]  cache_req_msg_data,               
  input  logic [31:0]  cache_resp_msg_data, 

  // control signals
  input  logic         reg_en_M0,
  input  logic         tarray_en,
  input  logic         tarray_en2,
  input  logic         tarray_wen,
  input  logic         tarray_wen2,
  input  logic         z6b_sel,
  input  logic         darray_write_mux_sel,
  input  logic         darray_wen,
  input  logic         darray_wen2,
  input  logic         write_en_sel,
  input  logic         spill_one_word_done,
  input  logic         refill_one_word_req_sent,
  input  logic         refill_one_word_resp_received,
  input  logic         Spill_or_Refill_sel,


  // status signals
  output logic         tarray_match,
  output logic         current_dirty,
  output logic         spill_done,
  output logic         refill_req_done,
  output logic         refill_resp_done,
  output logic         current_lru,
  output logic         flush_dirty,


  // extra signals
  input  logic        flush,
  output logic        flush_done


);


//--------------------------------------------------------------------
// PIPE
//--------------------------------------------------------------------

  localparam c_reset_vector = 32'h0; 
  logic [31:0] cache_request_addr_M0;
  logic [31:0] cache_request_data_M0;

  vc_EnResetReg#(32, c_reset_vector) cache_request_addr_reg_M0
    (
      .clk    (clk),
      .reset  (reset),
      .en     (reg_en_M0),
      .d      (memreq_msg_addr),
      .q      (cache_request_addr_M0)
    );

  vc_EnResetReg#(32, c_reset_vector) cache_request_data_reg_M0
    (
      .clk    (clk),
      .reset  (reset),
      .en     (reg_en_M0),
      .d      (memreq_msg_data),
      .q      (cache_request_data_M0)
    );

  // Register Array
  logic [20:0] tag_array [0:31];
  logic [20:0] tag_array2 [0:31];
  logic dirty_array [0:31];
  logic dirty_array2 [0:31];
  logic valid_array [0:31];
  logic valid_array2 [0:31];
  logic lru_array [0:31];

  // Caculate tag, index and offset
  logic [20:0] current_tag;
  logic [4:0] index_M0;
  logic [3:0] offset_M0;
  assign current_tag = cache_request_addr_M0[31:11];
  assign index_M0 = cache_request_addr_M0[10:6];
  assign offset_M0 = cache_request_addr_M0[5:2];

  // Two way hit signal
  logic tarray_match1;
  logic tarray_match2;

  
  // Check Two way Hit or Miss
  always_comb begin
    if(tarray_en && valid_array[index_M0] && (current_tag == tag_array[index_M0]))    tarray_match1 = 1'b1;       // Way 0 Hit
    else                                                                              tarray_match1 = 1'b0;       // Way 0 Miss

    if(tarray_en2 && valid_array2[index_M0] && (current_tag == tag_array2[index_M0])) tarray_match2 = 1'b1;       // Way 1 Hit
    else                                                                              tarray_match2 = 1'b0;       // Way 0 Miss

    // Decide tarray_match and current_way
    if (tarray_match1 == 1'b1) begin
        tarray_match = 1'b1;
        current_lru = 1'b0;
    end
    else if (tarray_match2 == 1'b1) begin
        tarray_match = 1'b1;
        current_lru = 1'b1;
    end
    else if(flush) begin
        tarray_match = 1'b0;
        current_lru = flush_counter[5];
    end
    else begin
        tarray_match = 1'b0;
        current_lru = lru_array[index_M0];
    end

    // Decide current dirty
    if(!current_lru) current_dirty = dirty_array[index_M0];
    else             current_dirty = dirty_array2[index_M0];
  end

  always_ff @(posedge clk) begin
    if (reset) begin
      for (logic[5:0] i = 0; i < 32; i++) begin
        tag_array[i[4:0]] <= 0;
        tag_array2[i[4:0]] <= 0;
        valid_array[i[4:0]] <= 1'b0;
        valid_array2[i[4:0]] <= 1'b0;
      end
    end
    else begin
        if (tarray_wen) begin
            tag_array[index_M0] <= current_tag;
            valid_array[index_M0] <= 1'b1;
        end
        else if (tarray_wen2) begin
            tag_array2[index_M0] <= current_tag;
            valid_array2[index_M0] <= 1'b1;
        end
        else begin
            tag_array[index_M0] <= tag_array[index_M0];
            valid_array[index_M0] <= valid_array[index_M0];
        end
    end
  end

  // Data Replicate itself for Write Hit
  logic [511:0] repl_cachereq_data;
  assign repl_cachereq_data = {{16{cache_request_data_M0}}};


  

  // Address Get through z6b Mux
  localparam mask = 32'hFFFFFFC0; 
  logic [31:0] z6b_result;
  assign z6b_result = cache_request_addr_M0 & mask;

  logic [31:0] z6b_mux_result;
  vc_Mux2#(32) z6b_mux
    (
      .in0  (cache_request_addr_M0),
      .in1  (z6b_result),
      .sel  (z6b_sel),
      .out  (z6b_mux_result)
    );


  // Get Spill Address
  logic [31:0]  spill_initial_addr;
  logic [31:0]  spill_addr;
  logic [4:0]   spill_counter;
  logic [6:0]   flush_counter;
  logic [4:0]   index_spill;


  // Calculate Spill address
  vc_Mux2#(5) spill_index_mux
  (
    .in0  (index_M0),
    .in1  (flush_counter[4:0]),
    .sel  (flush),
    .out  (index_spill)
  );

  logic [20:0] Spill_tag;
  vc_Mux2#(21) Spill_tag_mux
    (
      .in0  (tag_array2[index_spill]),
      .in1  (tag_array[index_spill]),
      .sel  (current_lru),
      .out  (Spill_tag)
    );
  
  assign spill_initial_addr = {{Spill_tag}, {index_spill},{6'b0}};


  // Updating Spill Counter and Flush Counter
  always_ff@(posedge clk) begin
    if(reset) begin
        spill_counter <= 0;
        flush_counter <= 0;
    end
    else begin
        spill_counter <= spill_counter;
        flush_counter <= flush_counter;

        if(spill_one_word_done)                    spill_counter <= spill_counter + 1;
        if(spill_done)                             spill_counter <= 0;
        if(flush && spill_done && !flush_done)     flush_counter <= flush_counter + 1;
        if(!flush)                                 flush_counter <= 0;
    end
  end

  // Calculate Spill address
  assign spill_addr = spill_initial_addr + {{26{1'b0}}, {spill_counter[3:0]}, {2'b0}};


  // Calculate Spill Data
  logic [31:0] cache_to_mem_data;

  always_comb begin
    if(current_lru) begin
      if(spill_counter ==  5'd0) begin
          cache_to_mem_data = data_array[index_spill][31:0];
      end
      else if(spill_counter ==  5'd1) begin
          cache_to_mem_data = data_array[index_spill][63:32];
      end
      else if(spill_counter ==  5'd2) begin
          cache_to_mem_data = data_array[index_spill][95:64];
      end
      else if(spill_counter ==  5'd3) begin
          cache_to_mem_data = data_array[index_spill][127:96];
      end
      else if(spill_counter ==  5'd4) begin
          cache_to_mem_data = data_array[index_spill][159:128];
      end
      else if(spill_counter ==  5'd5) begin
          cache_to_mem_data = data_array[index_spill][191:160];
      end
      else if(spill_counter ==  5'd6) begin
          cache_to_mem_data = data_array[index_spill][223:192];
      end
      else if(spill_counter ==  5'd7) begin
          cache_to_mem_data = data_array[index_spill][255:224];
      end
      else if(spill_counter ==  5'd8) begin
          cache_to_mem_data = data_array[index_spill][287:256];
      end
      else if(spill_counter ==  5'd9) begin
          cache_to_mem_data = data_array[index_spill][319:288];
      end
      else if(spill_counter ==  5'd10) begin
          cache_to_mem_data = data_array[index_spill][351:320];
      end
      else if(spill_counter ==  5'd11) begin
          cache_to_mem_data = data_array[index_spill][383:352];
      end
      else if(spill_counter ==  5'd12) begin
          cache_to_mem_data = data_array[index_spill][415:384];
      end
      else if(spill_counter ==  5'd13) begin
          cache_to_mem_data = data_array[index_spill][447:416];
      end
      else if(spill_counter ==  5'd14) begin
          cache_to_mem_data = data_array[index_spill][479:448];
      end
      else if(spill_counter ==  5'd15) begin
          cache_to_mem_data = data_array[index_spill][511:480];
      end
      else begin
          cache_to_mem_data = 32'bx;
      end
    end
    else begin
      if(spill_counter ==  5'd0) begin
          cache_to_mem_data = data_array2[index_spill][31:0];
      end
      else if(spill_counter ==  5'd1) begin
          cache_to_mem_data = data_array2[index_spill][63:32];
      end
      else if(spill_counter ==  5'd2) begin
          cache_to_mem_data = data_array2[index_spill][95:64];
      end
      else if(spill_counter ==  5'd3) begin
          cache_to_mem_data = data_array2[index_spill][127:96];
      end
      else if(spill_counter ==  5'd4) begin
          cache_to_mem_data = data_array2[index_spill][159:128];
      end
      else if(spill_counter ==  5'd5) begin
          cache_to_mem_data = data_array2[index_spill][191:160];
      end
      else if(spill_counter ==  5'd6) begin
          cache_to_mem_data = data_array2[index_spill][223:192];
      end
      else if(spill_counter ==  5'd7) begin
          cache_to_mem_data = data_array2[index_spill][255:224];
      end
      else if(spill_counter ==  5'd8) begin
          cache_to_mem_data = data_array2[index_spill][287:256];
      end
      else if(spill_counter ==  5'd9) begin
          cache_to_mem_data = data_array2[index_spill][319:288];
      end
      else if(spill_counter ==  5'd10) begin
          cache_to_mem_data = data_array2[index_spill][351:320];
      end
      else if(spill_counter ==  5'd11) begin
          cache_to_mem_data = data_array2[index_spill][383:352];
      end
      else if(spill_counter ==  5'd12) begin
          cache_to_mem_data = data_array2[index_spill][415:384];
      end
      else if(spill_counter ==  5'd13) begin
          cache_to_mem_data = data_array2[index_spill][447:416];
      end
      else if(spill_counter ==  5'd14) begin
          cache_to_mem_data = data_array2[index_spill][479:448];
      end
      else if(spill_counter ==  5'd15) begin
          cache_to_mem_data = data_array2[index_spill][511:480];
      end
      else begin
          cache_to_mem_data = 32'bx;
      end
    end
  end

  // Assign Spill Data to Cache_to_Memory_Request Data 
  assign cache_req_msg_data = cache_to_mem_data;

  // Dirty bit in Flush
  vc_Mux2#(1) FLush_dirty_mux
    (
      .in0  (dirty_array2[index_spill]),
      .in1  (dirty_array[index_spill]),
      .sel  (current_lru),
      .out  (flush_dirty)
    );

  // Issue Spill Done Signal
  always_comb begin
    if(spill_counter >= 5'd16)                            spill_done =1'b1;
    else if(flush && !flush_dirty)                        spill_done =1'b1;
    else                                                  spill_done =1'b0;
  end

  // Issue Flush Done Signal
  always_comb begin
    if(flush_counter >= 7'd64)                            flush_done =1'b1;
    else                                                  flush_done =1'b0;
  end



  // Update Refill Req Counter
  logic [31:0] refill_addr;
  logic [4:0] refill_req_counter;

  always_ff@(posedge clk) begin
    if(reset) begin
      refill_req_counter <= 0;
    end
    else begin
      refill_req_counter <= refill_req_counter;
      if(refill_one_word_req_sent)    refill_req_counter <= refill_req_counter + 1;
      if(refill_resp_done)            refill_req_counter <= 0;
    end
  end

  // Calculate Refill Req Address
  assign refill_addr = z6b_mux_result + {{26{1'b0}}, {refill_req_counter[3:0]}, {2'b0}};

  // Issue Refill Req End Signal
  always_comb begin
    if(refill_req_counter >= 5'd16)         refill_req_done = 1'b1;
    else                                    refill_req_done = 1'b0;
  end


  // Get 512 bits Refill data from cache_resp_msg_data
  logic [4:0] refill_resp_counter;
  logic [511:0] refill_data;

  always_ff@(posedge clk) begin
    if(reset) begin
        refill_resp_counter <= 0;
    end
    else begin
        refill_resp_counter <= refill_resp_counter;
        if(refill_one_word_resp_received)           refill_resp_counter <= refill_resp_counter + 1;
        if(refill_resp_done)                        refill_resp_counter <= 0;
    end
  end

  // Concatenate Data
  always_ff@(posedge clk) begin
    if(reset) begin
        refill_data <= 0;
    end
    else begin
        refill_data <= refill_data;

        if(refill_resp_counter == 5'd0 && refill_one_word_resp_received) begin
            refill_data[31:0] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd1 && refill_one_word_resp_received) begin
            refill_data[63:32] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd2 && refill_one_word_resp_received) begin
            refill_data[95:64] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd3 && refill_one_word_resp_received) begin
            refill_data[127:96] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd4 && refill_one_word_resp_received) begin
            refill_data[159:128] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd5 && refill_one_word_resp_received) begin
            refill_data[191:160] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd6 && refill_one_word_resp_received) begin
            refill_data[223:192] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd7 && refill_one_word_resp_received) begin
            refill_data[255:224] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd8 && refill_one_word_resp_received) begin
            refill_data[287:256] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd9 && refill_one_word_resp_received) begin
            refill_data[319:288] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd10 && refill_one_word_resp_received) begin
            refill_data[351:320] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd11 && refill_one_word_resp_received) begin
            refill_data[383:352] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd12 && refill_one_word_resp_received) begin
            refill_data[415:384] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd13 && refill_one_word_resp_received) begin
            refill_data[447:416] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd14 && refill_one_word_resp_received) begin
            refill_data[479:448] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 5'd15 && refill_one_word_resp_received) begin
            refill_data[511:480] <= cache_resp_msg_data; 
        end
    end
  end

  // Issue Refill Resp End Signal
  always_comb begin
    if(refill_resp_counter >= 5'd16)      refill_resp_done =1'b1;
    else                                  refill_resp_done =1'b0;
  end


  // Select Cache to Memory Request Address 
  vc_Mux2#(32) Spill_or_Refill_Mux
  (
    .in0  (spill_addr),
    .in1  (refill_addr),
    .sel  (Spill_or_Refill_sel),
    .out  (cache_req_msg_addr)
  );



  // Walk through Write Data Select Mux
  logic [511:0] write_data;
  vc_Mux2#(512) darray_write_mux
  (
    .in0  (repl_cachereq_data),
    .in1  (refill_data),                           
    .sel  (darray_write_mux_sel),
    .out  (write_data)
  );




//--------------------------------------------------------------------
// M1 part
//--------------------------------------------------------------------

  logic LRU_Way;
  logic [15:0] write_word_enable;
  logic [15:0] offset_write;

  // This creates a one-hot code with a '1' at the desired offset
  assign offset_write = 16'b1 << offset_M0;         

  vc_Mux2#(16) word_en_mux
    (
      .in0  (16'hFFFF),
      .in1  (offset_write),
      .sel  (write_en_sel),
      .out  (write_word_enable)
    );

  logic [511:0] data_array [0:31];
  logic [511:0] data_array2 [0:31];

  logic [511:0] data_array_output;

  // Store Current LRU
  always_ff @(posedge clk) begin
    if (reset) begin
      for (logic[5:0] i = 0; i < 32; i++) begin
        lru_array[i[4:0]] <= 1'b0;
      end
    end
    else begin
      lru_array[index_M0] <= current_lru;
    end
  end


  always_ff@(posedge clk) begin
    if (reset) begin
      for (logic[5:0] i = 0; i < 32; i++) begin
        data_array[i[4:0]] <= 0;
        data_array2[i[4:0]] <= 0;
        dirty_array[i[4:0]] <= 1'b0;
        dirty_array2[i[4:0]] <= 1'b0;
      end
    end
    else begin
      dirty_array[index_M0] <= dirty_array[index_M0];
      dirty_array2[index_M0] <= dirty_array2[index_M0];
      data_array[index_M0] <= data_array[index_M0];
      data_array2[index_M0] <= data_array2[index_M0];
       
      if(darray_wen && tarray_match)              dirty_array[index_M0] <= 1'b1;
      else if(darray_wen2 && tarray_match)        dirty_array2[index_M0] <= 1'b1;

      if(flush && spill_done && current_lru)      dirty_array[index_spill] <= 1'b0;
      if(flush && spill_done && !current_lru)     dirty_array2[index_spill] <= 1'b0;



      if(write_word_enable[0] && darray_wen) begin 
        data_array[index_M0][31:0] <= write_data[31:0];
      end
      else if(write_word_enable[0] && darray_wen2) begin 
        data_array2[index_M0][31:0] <= write_data[31:0];
      end
      

      if(write_word_enable[1] && darray_wen) begin
        data_array[index_M0][63:32] <= write_data[63:32];
      end
      else if(write_word_enable[1] && darray_wen2) begin
        data_array2[index_M0][63:32] <= write_data[63:32];
      end

      if(write_word_enable[2] && darray_wen) begin
        data_array[index_M0][95:64] <= write_data[95:64];
      end
      else if(write_word_enable[2] && darray_wen2) begin
        data_array2[index_M0][95:64] <= write_data[95:64];
      end

      if(write_word_enable[3] && darray_wen) begin
        data_array[index_M0][127:96] <= write_data[127:96];
      end
      else if(write_word_enable[3] && darray_wen2) begin
        data_array2[index_M0][127:96] <= write_data[127:96];
      end

      if(write_word_enable[4] && darray_wen) begin
        data_array[index_M0][159:128] <= write_data[159:128];
      end
      else if(write_word_enable[4] && darray_wen2) begin
        data_array2[index_M0][159:128] <= write_data[159:128];
      end

      if(write_word_enable[5] && darray_wen) begin
        data_array[index_M0][191:160] <= write_data[191:160];
      end
      else if(write_word_enable[5] && darray_wen2) begin
        data_array2[index_M0][191:160] <= write_data[191:160];
      end

      if(write_word_enable[6] && darray_wen) begin
        data_array[index_M0][223:192] <= write_data[223:192];
      end
      else if(write_word_enable[6] && darray_wen2) begin
        data_array2[index_M0][223:192] <= write_data[223:192];
      end

      if(write_word_enable[7] && darray_wen) begin
        data_array[index_M0][255:224] <= write_data[255:224];
      end
      else if(write_word_enable[7] && darray_wen2) begin
        data_array2[index_M0][255:224] <= write_data[255:224];
      end

      if(write_word_enable[8] && darray_wen) begin
        data_array[index_M0][287:256] <= write_data[287:256];
      end
      else if(write_word_enable[8] && darray_wen2) begin
        data_array2[index_M0][287:256] <= write_data[287:256];
      end

      if(write_word_enable[9] && darray_wen) begin
        data_array[index_M0][319:288] <= write_data[319:288];
      end
      else if(write_word_enable[9] && darray_wen2) begin
        data_array2[index_M0][319:288] <= write_data[319:288];
      end

      if(write_word_enable[10] && darray_wen) begin
        data_array[index_M0][351:320] <= write_data[351:320];
      end
      else if(write_word_enable[10] && darray_wen2) begin
        data_array2[index_M0][351:320] <= write_data[351:320];
      end

      if(write_word_enable[11] && darray_wen) begin
        data_array[index_M0][383:352] <= write_data[383:352];
      end
      else if(write_word_enable[11] && darray_wen2) begin
        data_array2[index_M0][383:352] <= write_data[383:352];
      end

      if(write_word_enable[12] && darray_wen) begin
        data_array[index_M0][415:384] <= write_data[415:384];
      end
      else if(write_word_enable[12] && darray_wen2) begin
        data_array2[index_M0][415:384] <= write_data[415:384];
      end

      if(write_word_enable[13] && darray_wen) begin
        data_array[index_M0][447:416] <= write_data[447:416];
      end
      else if(write_word_enable[13] && darray_wen2) begin
        data_array2[index_M0][447:416] <= write_data[447:416];
      end

      if(write_word_enable[14] && darray_wen) begin
        data_array[index_M0][479:448] <= write_data[479:448];
      end
      else if(write_word_enable[14] && darray_wen2) begin
        data_array2[index_M0][479:448] <= write_data[479:448];
      end

      if(write_word_enable[15] && darray_wen) begin
        data_array[index_M0][511:480] <= write_data[511:480];
      end
      else if(write_word_enable[15] && darray_wen2) begin
        data_array2[index_M0][511:480] <= write_data[511:480];
      end
    end
  end

  vc_Mux2#(512) way_output_sel_mux
    (
      .in0  (data_array[index_M0]),
      .in1  (data_array2[index_M0]),
      .sel  (current_lru),
      .out  (data_array_output)
    );

  lab3_cache_Mux16#(32) output_mux
      (
        .in0   (data_array_output[31:0]),
        .in1   (data_array_output[63:32]),
        .in2   (data_array_output[95:64]),
        .in3   (data_array_output[127:96]),
        .in4   (data_array_output[159:128]),
        .in5   (data_array_output[191:160]),
        .in6   (data_array_output[223:192]),
        .in7   (data_array_output[255:224]),
        .in8   (data_array_output[287:256]),
        .in9   (data_array_output[319:288]),
        .in10  (data_array_output[351:320]),
        .in11  (data_array_output[383:352]),
        .in12  (data_array_output[415:384]),
        .in13  (data_array_output[447:416]),
        .in14  (data_array_output[479:448]),
        .in15  (data_array_output[511:480]),
        .sel   (offset_M0),
        .out   (memresp_msg_data)
      );

endmodule





`endif 
