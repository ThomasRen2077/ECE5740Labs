`ifndef LAB3_CACHE_CACHE_BASE_DPATH_V
`define LAB3_CACHE_CACHE_BASE_DPATH_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/muxes.v"
`include "Mux16.v"




// -------------------- Cache Datapath --------------------
module lab3_cache_CacheBaseDpath
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
  input  logic         tarray_wen,
  input  logic         z6b_sel,
  input  logic         darray_write_mux_sel,
  input  logic         darray_wen,
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


  logic [20:0] tag_array [0:31];
  logic dirty_array [0:31];
  logic valid_array [0:31];

  logic [20:0] current_tag;
  logic [4:0] index_M0;
  logic [3:0] offset_M0;
  assign current_tag = cache_request_addr_M0[31:11];
  assign index_M0 = cache_request_addr_M0[10:6];
  assign offset_M0 = cache_request_addr_M0[5:2];

  // Check Hit or Miss
  always_comb begin
    if(tarray_en && valid_array[index_M0]) begin
      if(current_tag == tag_array[index_M0])    tarray_match = 1'b1;      // Hit
      else                                      tarray_match = 1'b0;      // Miss
    end
    else begin
      tarray_match = 1'b0;
    end
  end

  // Decide Current Dirty
  assign current_dirty = dirty_array[index_M0];


  always_ff @(posedge clk) begin
    if (reset) begin
      for (logic[5:0] i = 0; i < 32; i++) begin
        tag_array[i[4:0]] <= 0;
        valid_array[i[4:0]] <= 1'b0;
      end
    end
    else begin
      tag_array[index_M0] <= tag_array[index_M0];
      valid_array[index_M0] <= valid_array[index_M0];

      if(tarray_wen) begin
        tag_array[index_M0] <= current_tag;
        valid_array[index_M0] <= 1'b1;
      end

    end
  end

  // Data Replicate itself for Write Hit
  logic [511:0] repl_cachereq_data;
  assign repl_cachereq_data = {{16{cache_request_data_M0}}};

  


//--------------------------------------------------------------------
// SPILL
//--------------------------------------------------------------------

  // Get Spill Address
  logic [31:0]  spill_initial_addr;
  logic [31:0]  spill_addr;
  logic [4:0]   spill_counter;
  logic [5:0]   flush_counter;
  logic [4:0]   index_spill;

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
  vc_Mux2#(5) spill_index_mux
  (
    .in0  (index_M0),
    .in1  (flush_counter[4:0]),
    .sel  (flush),
    .out  (index_spill)
  );

  assign spill_initial_addr = {{tag_array[index_spill]}, {index_spill},{6'b0}};
  assign spill_addr = spill_initial_addr + {{26{1'b0}}, {spill_counter[3:0]}, {2'b0}};

  // Calculate Spill Data
  logic [31:0] cache_to_mem_data;

  always_comb begin
    cache_to_mem_data = 'x;
    for(int i = 0; i < 16; i++) begin
      if(spill_counter ==  i) begin
          cache_to_mem_data = data_array[index_spill][32 * i +: 32];
      end
    end
  end

  // Assign Spill Data to Cache_to_Memory_Request Data 
  assign cache_req_msg_data = cache_to_mem_data;

  // Issue Spill Done Signal
  always_comb begin
    if(spill_counter >= 5'd16)                            spill_done =1'b1;
    else if(flush && !dirty_array[index_spill])           spill_done =1'b1;
    else                                                  spill_done =1'b0;
  end

  // Issue Flush Done Signal
  always_comb begin
    if(flush_counter >= 6'd32)                            flush_done =1'b1;
    else                                                  flush_done =1'b0;
  end

//--------------------------------------------------------------------
// REFILL
//--------------------------------------------------------------------
  
  // Set Refill Req Counter
  logic [4:0] refill_req_counter;

  always_ff@(posedge clk) begin
    if(reset) begin
      refill_req_counter <= 0;
    end
    else begin
      refill_req_counter <= refill_req_counter;
      if(refill_one_word_req_sent)        refill_req_counter <= refill_req_counter + 1;
      if(refill_resp_done)                refill_req_counter <= 0;
    end
  end

  // Address Get through z6b Mux for Refill request
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

  // Calculate Refill Req Address
  logic [31:0] refill_addr;
  assign refill_addr = z6b_mux_result + {{26{1'b0}}, {refill_req_counter[3:0]}, {2'b0}};

  // Issue Refill Req End Signal
  always_comb begin
    if(refill_req_counter >= 5'd16)       refill_req_done = 1'b1;
    else                                  refill_req_done = 1'b0;
  end

  // Get 512 bits Refill data from cache_resp_msg_data
  logic [4:0] refill_resp_counter;
  logic [511:0] refill_data;

  // Set Refill Respone Counter
  always_ff@(posedge clk) begin
    if(reset) begin
        refill_resp_counter <= 0;
    end
    else begin
        refill_resp_counter <= refill_resp_counter;
        if(refill_one_word_resp_received)   refill_resp_counter <= refill_resp_counter + 1;
        if(refill_resp_done)                refill_resp_counter <= 0;
    end
  end

  // Concatenate Data
  always_ff@(posedge clk) begin
    if(reset) begin
        refill_data <= 0;
    end
    else begin
        for(int i = 0; i < 16; i++) begin
          if((refill_resp_counter == i) & refill_one_word_resp_received) begin
            refill_data[32 * i +: 32] <= cache_resp_msg_data; 
          end
        end
    end
  end

  // Issue Refill Resp End Signal
  always_comb begin
    if(refill_resp_counter >= 5'd16)    refill_resp_done =1'b1;
    else                                refill_resp_done =1'b0;
  end

//--------------------------------------------------------------------
// Return to PIPE
//--------------------------------------------------------------------

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

  logic [15:0] write_word_enable;
  logic [15:0] offset_write;

  // This creates a one-hot code with a '1' at the desired offset
  assign offset_write = 16'b1 << offset_M0;         

  // Select which word in cache line to write
  vc_Mux2#(16) word_en_mux
    (
      .in0  (16'hFFFF),
      .in1  (offset_write),
      .sel  (write_en_sel),
      .out  (write_word_enable)
    );

  logic [511:0] data_array [0:31];
  logic [511:0] data_array_output;

  // Write data to CacheLine
  always_ff@(posedge clk) begin
    if (reset) begin
      for (int i = 0; i < 32; i++) begin
        data_array[i] <= 0;
        dirty_array[i] <= 1'b0;
      end
    end
    else begin
      dirty_array[index_M0] <= dirty_array[index_M0];
      data_array[index_M0] <= data_array[index_M0];

      // Set dirty bit
      if(darray_wen && tarray_match)            dirty_array[index_M0] <= 1'b1;
      if(flush && spill_done)                   dirty_array[index_spill] <= 1'b0;

      // Write Data
      for (int i = 0; i < 16; i++) begin
        if(write_word_enable[i] && darray_wen) begin 
          data_array[index_M0][32 * i +: 32] <= write_data[32 * i +: 32];
        end
      end
    end
  end

  // Select output word
  assign data_array_output = data_array[index_M0];
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
