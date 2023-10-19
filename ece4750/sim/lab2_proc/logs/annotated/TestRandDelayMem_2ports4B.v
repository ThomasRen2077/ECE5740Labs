//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Memory with Random Delays
        //========================================================================
        // This is dual-ported test memory that handles a limited subset of
        // memory request messages and returns memory response messages.
        
        `ifndef VC_TEST_RAND_DELAY_MEM_2PORTS4B_V
        `define VC_TEST_RAND_DELAY_MEM_2PORTS4B_V
        
        `include "vc/mem-msgs.v"
        `include "vc/TestMem_2ports4B.v"
        `include "vc/TestRandDelay.v"
        `include "vc/trace.v"
        
        module vc_TestRandDelayMem_2ports4B
        #(
          parameter p_mem_nbytes   = 1024, // size of physical memory in bytes
          parameter p_opaque_nbits = 8,    // mem message opaque field num bits
          parameter p_addr_nbits   = 32,   // mem message address num bits
          parameter p_data_nbits   = 32,   // mem message data num bits
          parameter p_reset_to_x   = 1,    // reset all values to X's
        
          // Shorter names for message type, not to be set from outside the module
          parameter o = p_opaque_nbits,
          parameter a = p_addr_nbits,
          parameter d = p_data_nbits,
        
          // Local constants not meant to be set from outside the module
          parameter c_req_nbits  = $bits(mem_req_4B_t),
          parameter c_resp_nbits = $bits(mem_resp_4B_t)
        )(
 128469   input  logic                    clk,
 000129   input  logic                    reset,
        
          // clears the content of memory
        
 000129   input  logic                    mem_clear,
        
          // maximum delay
        
%000000   input  logic [31:0]             max_delay,
        
          // Memory request interface port 0
        
 026616   input  logic                    memreq0_val,
 037047   output logic                    memreq0_rdy,
%000000   input  logic [c_req_nbits-1:0]  memreq0_msg,
        
          // Memory request interface port 1
        
 003390   input  logic                    memreq1_val,
 031707   output logic                    memreq1_rdy,
 001492   input  logic [c_req_nbits-1:0]  memreq1_msg,
        
          // Memory response interface port 0
        
 032550   output logic                    memresp0_val,
 032286   input  logic                    memresp0_rdy,
 008340   output logic [c_resp_nbits-1:0] memresp0_msg,
        
          // Memory response interface port 1
        
 003510   output logic                    memresp1_val,
 003510   input  logic                    memresp1_rdy,
 000770   output logic [c_resp_nbits-1:0] memresp1_msg
        );
        
          //------------------------------------------------------------------------
          // Dual ported test memory
          //------------------------------------------------------------------------
        
 033486   logic                    mem_memreq0_val;
 000758   logic                    mem_memreq0_rdy;
%000000   logic [c_req_nbits-1:0]  mem_memreq0_msg;
        
 003520   logic                    mem_memreq1_val;
%000000   logic                    mem_memreq1_rdy;
 000670   logic [c_req_nbits-1:0]  mem_memreq1_msg;
        
        
 024886   logic                    mem_memresp0_val;
 034126   logic                    mem_memresp0_rdy;
 004624   logic [c_resp_nbits-1:0] mem_memresp0_msg;
        
 003368   logic                    mem_memresp1_val;
 003662   logic                    mem_memresp1_rdy;
 000798   logic [c_resp_nbits-1:0] mem_memresp1_msg;
        
          //------------------------------------------------------------------------
          // Test random delay
          //------------------------------------------------------------------------
        
          vc_TestRandDelay#(c_req_nbits) rand_req_delay0
          (
            .clk       (clk),
            .reset     (reset),
        
            // dividing the max delay by two because we have delay for both in and
            // out
            .max_delay (max_delay >> 1),
        
            .in_val    (memreq0_val),
            .in_rdy    (memreq0_rdy),
            .in_msg    (memreq0_msg),
        
            .out_val   (mem_memreq0_val),
            .out_rdy   (mem_memreq0_rdy),
            .out_msg   (mem_memreq0_msg)
        
          );
        
          vc_TestRandDelay#(c_req_nbits) rand_req_delay1
          (
            .clk       (clk),
            .reset     (reset),
        
            // dividing the max delay by two because we have delay for both in and
            // out
            .max_delay (max_delay >> 1),
        
            .in_val    (memreq1_val),
            .in_rdy    (memreq1_rdy),
            .in_msg    (memreq1_msg),
        
            .out_val   (mem_memreq1_val),
            .out_rdy   (mem_memreq1_rdy),
            .out_msg   (mem_memreq1_msg)
        
           );
        
          vc_TestMem_2ports4B
          #(
            .p_mem_nbytes   (p_mem_nbytes),
            .p_opaque_nbits (p_opaque_nbits),
            .p_addr_nbits   (p_addr_nbits),
            .p_data_nbits   (p_data_nbits)
          )
          mem
          (
            .clk          (clk),
            .reset        (reset),
            .mem_clear    (mem_clear),
        
            .memreq0_val  (mem_memreq0_val),
            .memreq0_rdy  (mem_memreq0_rdy),
            .memreq0_msg  (mem_memreq0_msg),
        
            .memreq1_val  (mem_memreq1_val),
            .memreq1_rdy  (mem_memreq1_rdy),
            .memreq1_msg  (mem_memreq1_msg),
        
            .memresp0_val (mem_memresp0_val),
            .memresp0_rdy (mem_memresp0_rdy),
            .memresp0_msg (mem_memresp0_msg),
        
            .memresp1_val (mem_memresp1_val),
            .memresp1_rdy (mem_memresp1_rdy),
            .memresp1_msg (mem_memresp1_msg)
          );
        
 000129   task load (integer filein);
 000129   begin
 000129     mem.load(filein);
          end
          endtask
 000129   task dump (integer filein);
 000129   begin
 000129     mem.dump(filein);
          end
          endtask
          //------------------------------------------------------------------------
          // Test random delay
          //------------------------------------------------------------------------
        
          vc_TestRandDelay#(c_resp_nbits) rand_resp_delay0
          (
            .clk       (clk),
            .reset     (reset),
        
            // dividing the max delay by two because we have delay for both in and
            // out
            .max_delay (max_delay >> 1),
        
            .in_val    (mem_memresp0_val),
            .in_rdy    (mem_memresp0_rdy),
            .in_msg    (mem_memresp0_msg),
        
            .out_val   (memresp0_val),
            .out_rdy   (memresp0_rdy),
            .out_msg   (memresp0_msg)
          );
        
          vc_TestRandDelay#(c_resp_nbits) rand_resp_delay1
          (
            .clk       (clk),
            .reset     (reset),
        
            // dividing the max delay by two because we have delay for both in and
            // out
            .max_delay (max_delay >> 1),
        
            .in_val    (mem_memresp1_val),
            .in_rdy    (mem_memresp1_rdy),
            .in_msg    (mem_memresp1_msg),
        
            .out_val   (memresp1_val),
            .out_rdy   (memresp1_rdy),
            .out_msg   (memresp1_msg)
          );
        
          //----------------------------------------------------------------------
          // Line tracing
          //----------------------------------------------------------------------
        
          vc_MemReqMsg4BTrace memreq0_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memreq0_val),
            .rdy   (memreq0_rdy),
            .msg   (memreq0_msg)
          );
        
          vc_MemReqMsg4BTrace memreq1_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memreq1_val),
            .rdy   (memreq1_rdy),
            .msg   (memreq1_msg)
          );
        
          vc_MemRespMsg4BTrace memresp0_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memresp0_val),
            .rdy   (memresp0_rdy),
            .msg   (memresp0_msg)
          );
        
          vc_MemRespMsg4BTrace memresp1_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (memresp1_val),
            .rdy   (memresp1_rdy),
            .msg   (memresp1_msg)
          );
        
          `VC_TRACE_BEGIN
          begin
        
            memreq0_trace.line_trace( trace_str );
            vc_trace.append_str( trace_str, "|" );
            memreq1_trace.line_trace( trace_str );
        
            vc_trace.append_str( trace_str, "()" );
        
            memresp0_trace.line_trace( trace_str );
            vc_trace.append_str( trace_str, "|" );
            memresp1_trace.line_trace( trace_str );
        
          end
          `VC_TRACE_END
        
        endmodule
        
        `endif /* VC_TEST_RAND_DELAY_MEM_2PORTS_V */
        
        
