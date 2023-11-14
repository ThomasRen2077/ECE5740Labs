//=========================================================================
// Cache Alt Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_ALT_V
`define LAB3_CACHE_CACHE_ALT_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/muxes.v"
`include "Mux16.v"
`include "CacheAltCtrl.v"
`include "CacheAltDpath.v"

module lab3_cache_CacheAlt
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

logic mem_resp_msg_type;

always_comb begin
  if(mem_resp_msg_type) begin
    memresp_msg.type_ = `VC_MEM_RESP_MSG_TYPE_WRITE;
  end
  else begin
    memresp_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
  end
end

assign memresp_msg.opaque = 8'b0;
assign memresp_msg.test = 2'b0;
assign memresp_msg.len = 2'b0;

logic cache_req_msg_type;

always_comb begin
  if(cache_req_msg_type) begin
    cache_req_msg.type_ = `VC_MEM_REQ_MSG_TYPE_WRITE;
  end
  else begin
    cache_req_msg.type_ = `VC_MEM_REQ_MSG_TYPE_READ;
  end
end

assign cache_req_msg.opaque = 8'b0;
assign cache_req_msg.len = 2'b0;







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
  logic        current_way;
  logic        current_lru;


// Instantiate and connect datapath
lab3_cache_CacheAltDpath dpath
(
  .memreq_msg_addr(memreq_msg.addr),
  .memreq_msg_data(memreq_msg.data),
  .memresp_msg_data(memresp_msg.data),

  .cache_req_msg_addr(cache_req_msg.addr),
  .cache_req_msg_data(cache_req_msg.data),
  .cache_resp_msg_data(cache_resp_msg.data),

  .*
);

// Instantiate and connect control unit
lab3_cache_CacheAltCtrl ctrl
(
  .memreq_type(memreq_msg.type_[0]),
  .memresp_type(mem_resp_msg_type),

  .cache_req_type(cache_req_msg.type_[0]),
  .cache_resp_type(cache_resp_msg.type_[0]),

  .*
);


endmodule


`endif /* LAB3_CACHE_CACHE_ALT_V */
