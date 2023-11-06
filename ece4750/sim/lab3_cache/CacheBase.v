// Cache Base Design
`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "vc/muxes.v"
`include "Mux16.v"
`include "CacheBaseCtrl.v"
`include "CacheBaseDpath.v"


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
 logic        reg_en_M0;
 logic        tarray_en;
 logic        tarray_wen;
 logic        z6b_sel;
 logic        darray_write_mux_sel;
 logic        reg_en_M1;
 logic        darray_wen;
 logic        parallel_read_sel;
 logic        spill_one_word_done;
 logic        refill_one_word_req_sent;
 logic        refill_one_word_resp_received;

  // Status signals
 logic        tarray_match;
 logic        current_dirty;
 logic        spill_done;
 logic        refill_req_done;
 logic        refill_resp_done;



 
 logic [31:0]  memreq_msg_addr;              
 logic [31:0]  memreq_msg_data;            
 logic [31:0]  memresp_msg_data;

 logic [31:0]  cache_req_msg_addr;            
 logic [31:0]  cache_req_msg_data;               
 logic [31:0]  cache_resp_msg_data; 

 logic memreq_type;
 logic memresp_type;
 logic cache_req_type;
 logic cache_resp_type;


 assign memreq_msg_addr = memreq_msg.addr;
 assign memreq_msg_data = memreq_msg.data;
 assign memresp_msg_data = memresp_msg.data;

 assign cache_req_msg_addr = cache_req_msg.addr;
 assign cache_req_msg_data = cache_req_msg.data;
 assign cache_resp_msg_data = cache_resp_msg.data;

 assign memreq_type = memreq_msg.type_[0];
 assign memresp_type = memresp_msg.type_[0];
 assign cache_req_type = cache_req_msg.type_[0];
 assign cache_resp_type = cache_resp_msg.type_[0];

// Instantiate and connect datapath
lab3_cache_CacheBaseDpath dpath
(
  .*
);

// Instantiate and connect control unit
  lab3_cache_CacheBaseCtrl ctrl 
(
  .*
);


`endif /* LAB3_CACHE_CACHE_BASE_V */
