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
  // input  logic         reg_en_M1,
  input  logic         tarray_en,
  input  logic         tarray_wen,
  input  logic         z6b_sel,
  input  logic         darray_write_mux_sel,
  input  logic         darray_wen,
  input  logic         write_en_sel,
  // input  logic         parallel_read_sel,
  // input  logic         parallel_write_sel,
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

  // extra signal
  input  logic         flush,
);




//--------------------------------------------------------------------
// Y stage
//--------------------------------------------------------------------



//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------

  localparam c_reset_vector = 32'h200; 
  logic [31:0] cache_request_addr_M0;
  logic [31:0] cache_request_data_M0;

  vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_addr_reg_M0
    (
      .clk    (clk),
      .reset  (reset),
      .en     (reg_en_M0),
      .d      (memreq_msg_addr),
      .q      (cache_request_addr_M0)
    );

  vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_data_reg_M0
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

  always_comb begin
    if(tarray_en && valid_array[index_M0] && (current_tag == tag_array[index_M0])) begin
      tarray_match = 1b'1;
    end
    else begin
      tarray_match = 1b'0;
    end
  end

  always_ff @(posedge clk) begin
    if(reset) 
    tag_array[index_M0] <= tag_array[index_M0];

    if(tarray_wen) begin
      tag_array[index_M0] <= current_tag;
      valid_array[index_M0] <= 1b'1;
    end
  end
  

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
  logic [31:0] spill_initial_addr;
  logic [31:0] spill_addr;
  logic [5:0] spill_counter;

  assign spill_initial_addr = {{tag_array[index_M0]}, {index_M0},{6'b0}};

  always_ff@(posedge clk) begin
    if(reset) begin
        spill_counter <= 0;
        spill_addr <= 0;
    end
    else begin

        spill_counter <= spill_counter;
        spill_addr <= spill_addr;

        if(spill_one_word_done) begin
            spill_counter <= spill_counter + 1;
            spill_addr <= spill_initial_addr + (spill_counter << 2);
        end

        if(spill_done) begin
            spill_counter <= 0;
            spill_addr <= 0;
        end

    end
  end




  // Calculate Spill Data
  logic [31:0] cache_to_mem_data;

  always_comb begin
      if(spill_counter ==  6'd0) begin
          cache_to_mem_data = data_array[index_M0][31:0];
      end
      else if(spill_counter ==  6'd1) begin
          cache_to_mem_data = data_array[index_M0][63:32];
      end
      else if(spill_counter ==  6'd2) begin
          cache_to_mem_data = data_array[index_M0][95:64];
      end
      else if(spill_counter ==  6'd3) begin
          cache_to_mem_data = data_array[index_M0][127:96];
      end
      else if(spill_counter ==  6'd4) begin
          cache_to_mem_data = data_array[index_M0][159:128];
      end
      else if(spill_counter ==  6'd5) begin
          cache_to_mem_data = data_array[index_M0][191:160];
      end
      else if(spill_counter ==  6'd6) begin
          cache_to_mem_data = data_array[index_M0][223:192];
      end
      else if(spill_counter ==  6'd7) begin
          cache_to_mem_data = data_array[index_M0][255:224];
      end
      else if(spill_counter ==  6'd8) begin
          cache_to_mem_data = data_array[index_M0][287:256];
      end
      else if(spill_counter ==  6'd9) begin
          cache_to_mem_data = data_array[index_M0][319:288];
      end
      else if(spill_counter ==  6'd10) begin
          cache_to_mem_data = data_array[index_M0][351:320];
      end
      else if(spill_counter ==  6'd11) begin
          cache_to_mem_data = data_array[index_M0][383:352];
      end
      else if(spill_counter ==  6'd12) begin
          cache_to_mem_data = data_array[index_M0][415:384];
      end
      else if(spill_counter ==  6'd13) begin
          cache_to_mem_data = data_array[index_M0][447:416];
      end
      else if(spill_counter ==  6'd14) begin
          cache_to_mem_data = data_array[index_M0][479:448];
      end
      else if(spill_counter ==  6'd15) begin
          cache_to_mem_data = data_array[index_M0][511:480];
      end
      else begin
          cache_to_mem_data = 32'bx;
      end
  end


  // Assign Spill Data to Cache_to_Memory_Request Data 
  assign cache_req_msg_data = cache_to_mem_data;

  // Issue Spill Finish Signal
  always_comb begin
    if(spill_counter >= 6'd16) begin
        spill_done =1'b1;
    end
    else begin
        spill_done =1'b0;
    end
  end



  // Data Replicate itself for Write Hit
  logic [511:0] repl_cachereq_data;
  assign repl_cachereq_data = {{16{cache_request_data_M0}}};




  // Get Refill Req Address
  logic [31:0] refill_addr;
  logic [5:0] refill_req_counter;

  always_ff@(posedge clk) begin
    if(reset) begin
        refill_req_counter <= 0;
        refill_addr <= 0;
    end
    else begin

        refill_req_counter <= refill_req_counter;
        refill_addr <= refill_addr;

        if(refill_one_word_req_sent) begin
            refill_req_counter <= refill_req_counter + 1;
            refill_addr <= z6b_mux_result + (refill_req_counter << 2)
        end

        if(refill_req_done) begin
            refill_req_counter <= 0;
            refill_addr <= 0;
        end

    end
  end

  // Issue Refill Req End Signal
  always_comb begin
    if(refill_req_counter >= 6'd16) begin
        refill_req_done = 1'b1;
    end
    else begin
        refill_req_done = 1'b0;
    end
  end


  // Get 512 bits Refill data from cache_resp_msg_data
  logic [5:0] refill_resp_counter;
  logic [511:0] refill_data;

  always_ff@(posedge clk) begin
    if(reset) begin
        refill_resp_counter <= 0;
    end
    else begin

        refill_resp_counter <= refill_resp_counter;

        if(refill_one_word_resp_received) begin
            refill_resp_counter <= refill_resp_counter + 1;
        end

        if(refill_resp_done) begin
            refill_resp_counter <= 0;
        end

    end
  end

  // Concatenate Data
  always_ff@(posedge clk) begin
    if(reset) begin
        refill_data <= 0;
    end
    else begin
        refill_data <= refill_data

        if(refill_resp_counter == 6'd0 && refill_one_word_resp_received) begin
            refill_data[31:0] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd1 && refill_one_word_resp_received) begin
            refill_data[63:32] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd2 && refill_one_word_resp_received) begin
            refill_data[95:64] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd3 && refill_one_word_resp_received) begin
            refill_data[127:96] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd4 && refill_one_word_resp_received) begin
            refill_data[159:128] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd5 && refill_one_word_resp_received) begin
            refill_data[191:160] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd6 && refill_one_word_resp_received) begin
            refill_data[223:192] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd7 && refill_one_word_resp_received) begin
            refill_data[255:224] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd8 && refill_one_word_resp_received) begin
            refill_data[287:256] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd9 && refill_one_word_resp_received) begin
            refill_data[319:288] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd10 && refill_one_word_resp_received) begin
            refill_data[351:320] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd11 && refill_one_word_resp_received) begin
            refill_data[383:352] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd12 && refill_one_word_resp_received) begin
            refill_data[415:384] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd13 && refill_one_word_resp_received) begin
            refill_data[447:416] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd14 && refill_one_word_resp_received) begin
            refill_data[479:448] <= cache_resp_msg_data; 
        end
        else if(refill_resp_counter == 6'd15 && refill_one_word_resp_received) begin
            refill_data[511:480] <= cache_resp_msg_data; 
        end
    end
  end

  // Issue Refill Resp End Signal
  always_comb begin
    if(refill_resp_counter >= 6'd16) begin
        refill_resp_done =1'b1;
    end
    else begin
        refill_resp_done =1'b0;
    end
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
// M1 stage
//--------------------------------------------------------------------
  // logic [31:0]  cache_request_addr_M1;
  // logic [511:0] cache_request_data_M1;
  // logic [31:0]  bypass_output;
  // logic [511:0] bypass_output2;


  // vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_addr_reg_M1
  //   (
  //     .clk    (clk),
  //     .reset  (reset),
  //     .en     (reg_en_M1),
  //     .d      (cache_request_addr_M0),
  //     .q      (cache_request_addr_M1)
  //   );



  // vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_data_reg_M1
  //   (
  //     .clk    (clk),
  //     .reset  (reset),
  //     .en     (reg_en_M1),
  //     .d      (write_data),
  //     .q      (cache_request_data_M1)
  //   );



// vc_Mux2#(32) bypass_mux_read
//     (
//       .in0  (cache_request_addr_M0),
//       .in1  (cache_request_addr_M1),
//       .sel  (parallel_read_sel),
//       .out  (bypass_output)
//     );



// vc_Mux2#(32) bypass_mux_write
//     (
//       .in0  (write_data),
//       .in1  (cache_request_data_M1),
//       .sel  (parallel_write_sel),
//       .out  (bypass_output2)
//     );



  logic [15:0] write_word_enable;
  logic [15:0] offset_write;

  // logic [3:0]  offset_M1;
  // logic [4:0]  index_M1;
  // assign offset_M1 = bypass_output[5:2];
  // assign index_M1 =  bypass_output[10:6];

  // This creates a one-hot code with a '1' at the desired offset
  assign offset_write = 16'b1 << offset_M0;         

  vc_Mux2#(32) word_en_mux
    (
      .in0  (16'hFFFF),
      .in1  (offset_write),
      .sel  (write_en_sel),
      .out  (write_word_enable)
    );




  logic [511:0] data_array [0:31];
  logic [511:0] data_array_output;

  always_ff@(posedge clk) begin
    data_array[index_M0] <= data_array[index_M0];

    if(write_word_enable[0] && darray_wen) begin 
      data_array[index_M0][31:0] <= cache_request_data_M1[31:0];
    end

    if(write_word_enable[1] && darray_wen) begin
      data_array[index_M0][63:32] <= cache_request_data_M1[63:32];
    end

    if(write_word_enable[2] && darray_wen) begin
      data_array[index_M0][95:64] <= cache_request_data_M1[95:64];
    end

    if(write_word_enable[3] && darray_wen) begin
      data_array[index_M0][127:96] <= cache_request_data_M1[127:96];
    end

    if(write_word_enable[4] && darray_wen) begin
      data_array[index_M0][159:128] <= cache_request_data_M1[159:128];
    end

    if(write_word_enable[5] && darray_wen) begin
      data_array[index_M0][191:160] <= cache_request_data_M1[191:160];
    end

    if(write_word_enable[6] && darray_wen) begin
      data_array[index_M0][223:192] <= cache_request_data_M1[223:192];
    end

    if(write_word_enable[7] && darray_wen) begin
      data_array[index_M0][255:224] <= cache_request_data_M1[255:224];
    end

    if(write_word_enable[8] && darray_wen) begin
      data_array[index_M0][287:256] <= cache_request_data_M1[287:256];
    end

    if(write_word_enable[9] && darray_wen) begin
      data_array[index_M0][319:288] <= cache_request_data_M1[319:288];
    end

    if(write_word_enable[10] && darray_wen) begin
      data_array[index_M0][351:320] <= cache_request_data_M1[351:320];
    end

    if(write_word_enable[11] && darray_wen) begin
      data_array[index_M0][383:352] <= cache_request_data_M1[383:352];
    end

    if(write_word_enable[12] && darray_wen) begin
      data_array[index_M0][415:384] <= cache_request_data_M1[415:384];
    end

    if(write_word_enable[13] && darray_wen) begin
      data_array[index_M0][415:384] <= cache_request_data_M1[415:384];
    end

    if(write_word_enable[14] && darray_wen) begin
      data_array[index_M0][479:448] <= cache_request_data_M1[479:448];
    end

    if(write_word_enable[15] && darray_wen) begin
      data_array[index_M0][511:480] <= cache_request_data_M1[511:480];
    end
  end

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
