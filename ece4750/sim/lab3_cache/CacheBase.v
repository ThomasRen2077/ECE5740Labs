// Cache Base Design
`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

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
  input  logic         reg_en_M1,
  input  logic         tarray_en,
  input  logic         tarray_wen,
  input  logic         z6b_sel,
  input  logic         darray_write_mux_sel,
  input  logic         darray_wen,
  input  logic         write_en_sel,
  input  logic         parallel_read_sel,

  // status signals
  output logic         tarray_match,
  output logic         spill_done,
  output logic         refill_done,

  // extra signal
  input  logic         flush
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

  localparam mask = 32'hFFFFFFC0; 
  logic [31:0] z6b;
  assign z6b = cache_request_addr_M0 & mask;

  vc_Mux2#(32) z6b_mux
    (
      .in0  (memreq_msg_addr),
      .in1  (z6b),
      .sel  (z6b_sel),
      .out  (cache_req_msg_addr)
    );

  logic [20:0] tag_array [0:31];

  logic [20:0] tag;
  logic [4:0] index;
  logic [3:0] offset;
  assign tag = cache_request_addr_M0[31:11];
  assign index = cache_request_addr_M0[10:6];
  assign offset = cache_request_addr_M0[5:2];

  // assign tarray_match = (tag == tag_array[index]);  // Use tarray_en

  always_comb begin
    if((tag == tag_array[index]) & tarray_en) begin
      tarray_match = 1b'1;
    end
    else begin
      tarray_match = 1b'0;
    end
  end

  // always_comb begin
  //   if(tarray_wen) begin
  //     tag_array[index] = tag;
  //   end
  //   else begin
  //     tag_array[index] = tag_array[index];
  //   end
  // end

  always_ff @(tarray_wen) begin
    tag_array[index] <= tag;
  end
  

  assign cache_req_msg_data = cache_request_data_M0;

  logic [511:0] repl_cachereq_data;
  assign repl_cachereq_data = {{16{cache_request_data_M0}}};

  logic [511:0] write_data;


  vc_Mux2#(512) darray_write_mux
  (
    .in0  (repl_cachereq_data),
    .in1  (cache_resp_msg_data),                               // 32 bits to 512 bits
    .sel  (darray_write_mux_sel),
    .out  (write_data)
  );




//--------------------------------------------------------------------
// M1 stage
//--------------------------------------------------------------------
  logic [31:0]  cache_request_addr_M1;
  logic [511:0] cache_request_data_M1;
  logic [31:0]  bypass_output;

  vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_addr_reg_M1
    (
      .clk    (clk),
      .reset  (reset),
      .en     (reg_en_M1),
      .d      (cache_request_addr_M0),
      .q      (cache_request_addr_M1)
    );

  vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_data_reg_M1
    (
      .clk    (clk),
      .reset  (reset),
      .en     (reg_en_M1),
      .d      (write_data),
      .q      (cache_request_data_M1)
    );

vc_Mux2#(32) bypass_mux
    (
      .in0  (cache_request_addr_M0),
      .in1  (cache_request_addr_M1),
      .sel  (parallel_read_sel),
      .out  (bypass_output)
    );


  logic [15:0] write_word_enable;
  logic [15:0] offset_write;
  logic [3:0]  offset2;
  logic [4:0]  index2;
  assign offset2 = bypass_output[5:2];
  assign index2 =  bypass_output[10:6];

  // This creates a one-hot code with a '1' at the desired offset
  assign offset_write = 16'b1 << offset2;         

  vc_Mux2#(32) word_en_mux
    (
      .in0  (16'hFFFF),
      .in1  (offset_write),
      .sel  (write_en_sel),
      .out  (write_word_enable)
    );


  logic dirty_array [0:31];
  logic valid_array [0:31];
  logic [511:0] data_array [0:31];
  logic [511:0] data_array_output;

  always_ff@(write_word_enable[0] && darray_wen) begin
    data_array[index2][31:0] <= cache_request_data_M1[31:0];
  end

  always_ff@(write_word_enable[1] && darray_wen ) begin
    data_array[index2][63:32] <= cache_request_data_M1[63:32];
  end

  always_ff@(write_word_enable[2] && darray_wen ) begin
    data_array[index2][95:64] <= cache_request_data_M1[95:64];
  end

  always_ff@(write_word_enable[3] && darray_wen ) begin
    data_array[index2][127:96] <= cache_request_data_M1[127:96];
  end

  always_ff@(write_word_enable[4] && darray_wen) begin
    data_array[index2][159:128] <= cache_request_data_M1[159:128];
  end

  always_ff@(write_word_enable[5] && darray_wen ) begin
    data_array[index2][191:160] <= cache_request_data_M1[191:160];
  end

  always_ff@(write_word_enable[6] && darray_wen ) begin
    data_array[index2][223:192] <= cache_request_data_M1[223:192];
  end

  always_ff@(write_word_enable[7] && darray_wen ) begin
    data_array[index2][255:224] <= cache_request_data_M1[255:224];
  end

  always_ff@(write_word_enable[8] && darray_wen) begin
    data_array[index2][287:256] <= cache_request_data_M1[287:256];
  end

  always_ff@(write_word_enable[9] && darray_wen ) begin
    data_array[index2][319:288] <= cache_request_data_M1[319:288];
  end

  always_ff@(write_word_enable[10] && darray_wen ) begin
    data_array[index2][351:320] <= cache_request_data_M1[351:320];
  end

  always_ff@(write_word_enable[11] && darray_wen ) begin
    data_array[index2][383:352] <= cache_request_data_M1[383:352];
  end

  always_ff@(write_word_enable[12] && darray_wen) begin
    data_array[index2][415:384] <= cache_request_data_M1[415:384];
  end

  always_ff@(write_word_enable[13] && darray_wen ) begin
    data_array[index2][447:416] <= cache_request_data_M1[447:416];
  end

  always_ff@(write_word_enable[14] && darray_wen ) begin
    data_array[index2][479:448] <= cache_request_data_M1[479:448];
  end

  always_ff@(write_word_enable[15] && darray_wen ) begin
    data_array[index2][511:480] <= cache_request_data_M1[511:480];
  end


  assign data_array_output = data_array[index2];

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
        .sel   (offset2),
        .out   (memresp_msg_data)
      );


 


endmodule

module lab3_cache_CacheBaseCtrl
(
  input  logic         clk,
  input  logic         reset,

  // Processor to Cache 
  output logic        memreq_val,                           // Request Message to Data Memory Valid Signal         
  input  logic        memreq_rdy,                           // Data Memory Ready Signal
  input  logic        memreq_type,                          // Data Operation Type of Memory Request Message


  input  logic        memresp_val,                          // Data Memory Response Message Valid Signal
  output logic        memresp_rdy,                          // Processor Ready to Receive Data Signal
  output logic        memresp_type,                         // Data Operation Type of Memory Request Message

  // Cache to Memory
  output logic        cache_req_val,                         // Request Message to Data cache Valid Signal         
  input  logic        cache_req_rdy,                         // Cache Ready Signal
  input  logic        cache_req_type,                        // Data Operation Type of Cache Request Message


  input  logic        cache_resp_val,                        // Cache Response Message Valid Signal
  output logic        cache_resp_rdy,                        // Processor Ready to Receive Cache Signal
  output logic        cache_resp_type,                       // Data Operation Type of Cache Request Message

  // Control Signals
  output logic        reg_en_M0,
  output logic        tarray_en,
  output logic        tarray_wen,
  output logic        z6b_sel,
  output logic        darray_write_mux_sel,
  output logic        reg_en_M1,
  output logic        darray_wen,
  output logic        parallel_read_sel,

  // Status signals
  input  logic        tarray_match,
  output logic        spill_done,
  output logic        refill_done,


  // Extra Signal
  output logic        flush_done
);

//--------------------------------------------------------------------
// Y stage
//--------------------------------------------------------------------

  // Possible Stall Signal
  logic input_go;
  assign input_go = memreq_val && memreq_rdy;

  logic ostall_Y;
  ostall_Y = !input_go;

  logic stall_Y;
  stall_Y = ostall_Y || ostall_M0 || ostall_M1;

//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------

  assign reg_en_M0 = !stall_Y; 

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  localparam STATE_PIPE = 2'd0;
  localparam STATE_SPILL = 2'd1;
  localparam STATE_REFILL = 2'd2;

  logic [1:0] state_reg;
  logic [1:0] state_next;

  always @( posedge clk ) begin
    if ( reset )
      state_reg <= STATE_PIPE;
    else
      state_reg <= state_next;
  end


  always_comb begin
    state_next = state_reg;

    case ( state_reg )
      STATE_PIPE:     if ( tarray_match == 1b'0)  state_next = STATE_SPILL;
      STATE_SPILL:    if ( mem_msg_done)          state_next = STATE_REFILL;
      STATE_REFILL:                               state_next = STATE_PIPE;
      default:                                    state_next = 'x;

    endcase

    end

 //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------
    always_comb begin
      if( state_reg == STATE_PIPE) begin 
        tarray_en = 1b'1;            
        tarray_wen = 1b'0;
        if(tarray_match) begin
          z6b_sel = 1b'0;
        end
        else begin
          tarray_wen = 1b'1;
          z6b_sel = 1b'1;
        end
      end
      else if (state_reg == STATE_R0) begin
      end
      else begin
      end
    end


//--------------------------------------------------------------------
// M1 stage
//--------------------------------------------------------------------
assign reg_en_M1 = !stall_M0; 


endmodule



// -------------------- Cache Implementation --------------------

module lab3_cache_CacheBase
(
  input  logic                      clk,
  input  logic                      reset,


  // Memory
  input  logic                      memreq_val,                           // Processor to Cache Request
  output logic                      memreq_rdy,
  input  mem_req_4B_t               memreq_msg,

  output logic                      memresp_val,                          // Memory to Cache Response
  input  logic                      memresp_rdy,
  output mem_resp_4B_t              memresp_msg,

  // Cache
  output  logic                     cache_req_val,                       // Cache to Mem Request
  input   logic                     cache_req_rdy,
  output  mem_req_4B_t              cache_req_msg,
 
  input  logic                      cache_resp_val,                      // Cache to Processor Response
  output logic                      cache_resp_rdy,
  input  mem_resp_4B_t              cache_resp_msg,


  // Flush
  input logic                       flush,                                // Dirty Bit Write Back
  output logic                      flush_done
);

endmodule

// Control Signals

// Instantiate and connect datapath

// Instantiate and connect control unit
  lab3_cache_CacheBaseCtrl ctrl 
(
  .*
);

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;

`endif /* LAB3_CACHE_CACHE_BASE_V */
