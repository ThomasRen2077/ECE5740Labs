//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"

module lab3_cache_CacheBase
(
  input  logic                    clk,
  input  logic                    reset,


  // imem

  input  logic                    memreq_val,
  output logic                    memreq_rdy,
  input  mem_req_4B_t             memreq_msg,

  output logic                    memresp_val,
  input  logic                    memresp_rdy,
  output mem_resp_4B_t            memresp_msg,

  //cache
  output  logic                    cache_req_val,
  input   logic                    cache_req_rdy,
  output  mem_req_4B_t             cache_req_msg,
 
  input  logic                     cache_resp_val,
  output logic                     cache_resp_rdy,
  input  mem_resp_4B_t             cache_resp_msg,


  // flush
  input logic                     flush,
  output logic                    flush_done
);

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;

module lab3_cache_CacheBaseDpath
(
  input  logic         clk,
  input  logic         reset,
  
  input  logic [31:0]  memreq_msg_addr,               
  input  logic [31:0]  memreq_msg_data,               
  output logic [31:0]  memresp_msg_data,

  output logic [31:0]  cache_req_msg_addr,               
  output logic [31:0]  cache_req_msg_data,               
  input  logic [31:0]  cache_resp_msg_data, 
  input  logic reg_en_M0
  input  logic reg_en_M1
  input  tarray_en;
  input  tarray_wen;
  output tarray_match;
  input  z6b_sel;
  input  darray_write_mux_sel;
  input  darray_wen;
  input  write_en_sel;
);

localparam c_reset_vector = 32'h200; 
localparam mask = 32'hFFFFFFC0; 
//logic [31:0] cache_request_addr_next_M0;
logic [31:0] cache_request_addr_M0;
//logic [31:0] cache_request_data_next_M0;
logic [31:0] cache_request_data_M0;
logic [31:0] z6b;
logic [4:0] = index;
logic [3:0] = offset;
logic [31:0] write_data;
assign z6b = cache_request_addr_M0 & mask;
assign offset = cache_request_addr_M0[5:2];
assign index = cache_request_addr_M0[10:6];
assign tag = cache_request_addr_M0[31:11];
assign data_array_output = data_array[index];
assign tarray_match = (tag == tag_array[index]);
assign repl_cachereq_data = {cache_req_msg_data, cache_req_msg_data, cache_req_msg_data, cache_req_msg_data,
cache_req_msg_data, cache_req_msg_data, cache_req_msg_data, cache_req_msg_data,
cache_req_msg_data, cache_req_msg_data, cache_req_msg_data, cache_req_msg_data,
cache_req_msg_data, cache_req_msg_data, cache_req_msg_data, cache_req_msg_data};
logic [20:0] tag_array [0:31];
logic [511:0] data_array [0:31];
logic [15:0] write_word_enable;
logic [15:0] mask2;
assign mask2 = 1 << offset;  // This creates a mask with a '1' at the desired offset
assign offset_write = data | mask;    // Bitwise OR operation
logic dirty_array [0:31];
logic valid_array [0:31];

vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_addr_reg_M0
  (
    .clk    (clk),
    .reset  (reset),
    .en     (reg_en_M0),
    .d      (cache_req_msg_addr),
    .q      (cache_request_addr_M0)
  );

vc_EnResetReg#(32, c_reset_vector - 32'd4) cache_request_data_reg_M0
  (
    .clk    (clk),
    .reset  (reset),
    .en     (reg_en_M0),
    .d      (cache_req_msg_data),
    .q      (cache_request_data_M0)
  );
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
    .d      (cache_request_data_M0),
    .q      (cache_request_data_M1)
  );
vc_Mux2#(32) z6b_mux
  (
    .in0  (cache_req_msg_addr),
    .in1  (z6b),
    .sel  (z6b_sel),
    .out  (memreq_msg_addr)
  );
vc_Mux2#(32) darray_write_mux
  (
    .in0  (repl_cachereq_data),
    .in1  (memresp_msg_data),
    .sel  (darray_write_mux_sel),
    .out  (write_data)
  );

vc_Mux2#(32) word_en_mux
  (
    .in0  (16'b1111111111111111),
    .in1  (offset_write),
    .sel  (write_en_sel),
    .out  (write_word_enable)
  );


endmodule

module lab3_cache_CacheBaseCtrl
(
  input  logic         clk,
  input  logic         reset,
  
  output logic        mem_req_val,                         // Request Message to Data Memory Valid Signal         
  input  logic        mem_req_rdy,                         // Data Memory Ready Signal
  input  logic        mem_resp_val,                        // Data Memory Response Message Valid Signal
  output logic        mem_resp_rdy,                        // Processor Ready to Receive Data Signal
  output logic        mem_reqp_type,                       // Data Operation Type of Memory Request Message

  output logic        cache_req_val,                         // Request Message to Data cache Valid Signal         
  input  logic        cache_req_rdy,                         // Cache Ready Signal
  input  logic        cache_resp_val,                        // Cache Response Message Valid Signal
  output logic        cache_resp_rdy,                        // Processor Ready to Receive Cache Signal
  output logic        cache_reqp_type,                       // Data Operation Type of Cache Request Message
  output  logic reg_en_M0,
  output  logic reg_en_M1,
  output  tarray_en,
  output  tarray_wen,
  input  tarray_match,
  output  z6b_sel,
  output  darray_write_mux_sel,
  output  darray_wen
);

logic flush;
logic flush_done;

endmodule

 
endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
