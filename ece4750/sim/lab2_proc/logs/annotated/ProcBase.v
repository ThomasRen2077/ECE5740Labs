//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_BASE_V
        `define LAB2_PROC_PROC_BASE_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/trace.v"
        `include "tinyrv2_encoding.v"
        `include "ProcBaseCtrl.v"
        `include "ProcBaseDpath.v"
        `include "DropUnit.v"
        `include "lab1_imul/IntMulAlt.v"
        
        
        
        
        
        
        
 002589 module lab2_proc_ProcBase
 000015 #(
          parameter p_num_cores = 1
        )
 000006 (
 000068   input  logic         clk,
 000025   input  logic         reset,
 000001 
          // From mngr streaming port
 000006   input  logic [31:0]  mngr2proc_msg,
 000026   input  logic         mngr2proc_val,
 000002   output logic         mngr2proc_rdy,
 000002 
          // To mngr streaming port
 000022   output logic [31:0]  proc2mngr_msg,
 000002   output logic         proc2mngr_val,
 000002   input  logic         proc2mngr_rdy,
 000008 
          // Instruction Memory Request Port
%000000   output mem_req_4B_t  imem_reqstream_msg,
 000757   output logic         imem_reqstream_val,
 000032   input  logic         imem_reqstream_rdy,
 000047 
          // Instruction Memory Response Port
%000000   input  mem_resp_4B_t imem_respstream_msg,
 005503   input  logic         imem_respstream_val,
 000050   output logic         imem_respstream_rdy,
 000051 
          // Data Memory Request Port
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 000004   output logic         dmem_reqstream_val,
 000004   input  logic         dmem_reqstream_rdy,
 000034 
          // Data Memory Response Port
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001736   input  logic         dmem_respstream_val,
%000000   output logic         dmem_respstream_rdy,
%000000 
          // Extra Port
%000000   input  logic [31:0]  core_id,
%000000   output logic         commit_inst,
%000000   output logic         stats_en
%000000 );
 000797 
%000000 
%000000 
        
 000032 
%000000 
 000052 
%000000 //Connect external device
%000000 
          // Instruction Memory Request Bypass Queue
 002927   logic [1:0]  imem_queue_num_free_entries;
%000000   mem_req_4B_t imem_reqstream_enq_msg;
 004692   logic        imem_reqstream_enq_val;
 001105   logic        imem_reqstream_enq_rdy;
%000000   logic [31:0] imem_reqstream_enq_msg_addr;
%000000 
          assign imem_reqstream_enq_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_enq_msg.opaque = 8'b0;
          assign imem_reqstream_enq_msg.addr   = imem_reqstream_enq_msg_addr;
          assign imem_reqstream_enq_msg.len    = 2'd0;
          assign imem_reqstream_enq_msg.data   = 32'bx;
        
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),2) imem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(imem_queue_num_free_entries),
 000012 
%000000     .enq_msg (imem_reqstream_enq_msg),
 000769     .enq_val (imem_reqstream_enq_val),
 000782     .enq_rdy (imem_reqstream_enq_rdy),
        
            .deq_msg (imem_reqstream_msg),
%000000     .deq_val (imem_reqstream_val),
%000000     .deq_rdy (imem_reqstream_rdy)
 000050   );
 000051 
        
        
        
 000002 
%000000 
 000041 
 000044   // Imem Drop Unit
 000444   logic         imem_respstream_drop;
%000000   mem_resp_4B_t imem_respstream_drop_msg;
 004298   logic         imem_respstream_drop_val;
 000978   logic         imem_respstream_drop_rdy;
 001039 
          lab2_proc_DropUnit #($bits(mem_resp_4B_t)) imem_respstream_drop_unit
%000000   (
%000000     .clk         (clk),
 000004     .reset       (reset),
%000000 
%000000     .drop        (imem_respstream_drop),
 000008 
 000004     .istream_msg (imem_respstream_msg),
%000000     .istream_val (imem_respstream_val),
%000000     .istream_rdy (imem_respstream_rdy),
%000000 
%000000     .ostream_msg (imem_respstream_drop_msg),
%000000     .ostream_val (imem_respstream_drop_val),
%000000     .ostream_rdy (imem_respstream_drop_rdy)
%000000   );
%000000 
%000000 
%000000 
%000000 
 000006 
%000000 
          // Data Memory Request Bypass Queue
 000896   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001742   logic        dmem_reqstream_enq_val;
 000006   logic        dmem_reqstream_enq_rdy;
%000000   logic [2:0]  dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000334   logic [31:0] dmem_reqstream_enq_msg_data;
 000002 
          // assign dmem_reqstream_enq_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign dmem_reqstream_enq_msg.type_  = dmem_reqstream_enq_msg_type;
          assign dmem_reqstream_enq_msg.opaque = 8'b0;
 000026   assign dmem_reqstream_enq_msg.addr   = dmem_reqstream_enq_msg_addr; // Address of Accessing
 000008   assign dmem_reqstream_enq_msg.len    = 2'd0;
 000026   assign dmem_reqstream_enq_msg.data   = dmem_reqstream_enq_msg_data;  // Data to be written
 000026 
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),1) dmem_queue
          (
 000002     .clk     (clk),
 000002     .reset   (reset),
 000002     .num_free_entries(dmem_queue_num_free_entries),
 000002 
            .enq_msg (dmem_reqstream_enq_msg),
            .enq_val (dmem_reqstream_enq_val),
            .enq_rdy (dmem_reqstream_enq_rdy),
 000002 
 000006     .deq_msg (dmem_reqstream_msg),
 000002     .deq_val (dmem_reqstream_val),
 000002     .deq_rdy (dmem_reqstream_rdy)
          );
        
        
        
        
 000002 
 000002 
%000000 
%000000   // proc2mngr Bypass Queue
 000006   logic        proc2mngr_queue_num_free_entries;
 000040   logic [31:0] proc2mngr_enq_msg;
%000000   logic        proc2mngr_enq_val;
%000000   logic        proc2mngr_enq_rdy;
%000000 
%000000   vc_Queue#(`VC_QUEUE_BYPASS,32,1) proc2mngr_queue
          (
            .clk     (clk),
%000000     .reset   (reset),
%000000     .num_free_entries(proc2mngr_queue_num_free_entries),
%000000 
%000000     .enq_msg (proc2mngr_enq_msg),
%000000     .enq_val (proc2mngr_enq_val),
            .enq_rdy (proc2mngr_enq_rdy),
        
%000000     .deq_msg (proc2mngr_msg),
%000000     .deq_val (proc2mngr_val),
%000000     .deq_rdy (proc2mngr_rdy)
          );
 000002 
%000000 
%000000 
 000002 
 000024 
%000000   // Multiplier from lab1
%000000   // Multiplier Request Message
%000000   logic [63:0]        IntMulAlt_reqstream_msg;
%000000   logic               IntMulAlt_reqstream_val;
 000002   logic               IntMulAlt_reqstream_rdy;
 000002 
%000000   // Multiplier Response Message
%000000   logic [31:0]        IntMulAlt_respstream_msg;
%000000   logic               IntMulAlt_respstream_val;
 000002   logic               IntMulAlt_respstream_rdy;
 000002 
 000002   lab1_imul_IntMulAlt mul
%000000   (
%000000     .clk            (clk),
%000000     .reset          (reset),
%000000     .istream_val    (IntMulAlt_reqstream_val),
%000000     .istream_rdy    (IntMulAlt_reqstream_rdy),
 000008     .istream_msg    (IntMulAlt_reqstream_msg),
%000000     .ostream_val    (IntMulAlt_respstream_val),
 000002     .ostream_rdy    (IntMulAlt_respstream_rdy),
%000000     .ostream_msg    (IntMulAlt_respstream_msg)
%000000   );
%000000 
 000002 
 000010 
%000000 
%000000 
 000002 
%000000 // Connect DataPath and Control Unit
%000000 
%000000   // Control/Status Signals
%000000   // control signals (ctrl->dpath)
 000002   logic        reg_en_F;
 000010   logic [1:0]  pc_sel_F;
%000000   logic        reg_en_D;
 000010   logic        op1_sel_D;
 000094   logic [1:0]  op2_sel_D;
%000000   logic [1:0]  csrr_sel_D;
%000000   logic [2:0]  imm_type_D;
 000360   logic        reg_en_X;
%000000   logic [3:0]  alu_fn_X;
 000004   logic [1:0]  ex_result_sel_X;
%000000   logic        reg_en_M;
 000610   logic        wb_result_sel_M;
%000000   logic        reg_en_W;
 000250   logic [4:0]  rf_waddr_W;
 003180   logic        rf_wen_W;
%000000   logic        stats_en_wen_W;
%000000 
 000002   // status signals (dpath->ctrl)
 000638   logic [31:0] inst_D;
%000000   logic        br_cond_eq_X;
%000000   logic        br_cond_lt_X;
 000006   logic        br_cond_ltu_X;
 000002 
 000002 
        
        
        
        
        
          // Control Unit
          lab2_proc_ProcBaseCtrl ctrl
          (
            // Instruction Memory Port
            .imem_reqstream_val       (imem_reqstream_enq_val),
            .imem_reqstream_rdy       (imem_reqstream_enq_rdy),
            .imem_respstream_val      (imem_respstream_drop_val),
            .imem_respstream_rdy      (imem_respstream_drop_rdy),
        
            // Data Memory Port
            .dmem_reqstream_val       (dmem_reqstream_enq_val),
            .dmem_reqstream_rdy       (dmem_reqstream_enq_rdy),
            .dmem_respstream_val      (dmem_respstream_val),
            .dmem_respstream_rdy      (dmem_respstream_rdy),
            .dmem_reqstream_msg_type  (dmem_reqstream_enq_msg_type),
        
            // mngr communication ports
            .mngr2proc_val            (mngr2proc_val),
            .mngr2proc_rdy            (mngr2proc_rdy),
            .proc2mngr_val            (proc2mngr_enq_val),
            .proc2mngr_rdy            (proc2mngr_enq_rdy),
        
            // multiplier communication ports
            .IntMulAlt_reqstream_val   (IntMulAlt_reqstream_val),
            .IntMulAlt_reqstream_rdy   (IntMulAlt_reqstream_rdy),
            .IntMulAlt_respstream_val  (IntMulAlt_respstream_val),
            .IntMulAlt_respstream_rdy  (IntMulAlt_respstream_rdy),
        
            // clk/reset/control/status signals
            .*
          );
        
        
        
        
        
        
        
          //  Data Path
          lab2_proc_ProcBaseDpath
          #(
            .p_num_cores              (p_num_cores)
          )
          dpath
          (
            // Instruction Memory Port
            .imem_reqstream_msg_addr  (imem_reqstream_enq_msg_addr),
            .imem_respstream_msg      (imem_respstream_drop_msg),
        
            // Data Memory Port
            .dmem_reqstream_msg_addr  (dmem_reqstream_enq_msg_addr),
            .dmem_reqstream_msg_data  (dmem_reqstream_enq_msg_data),
            .dmem_respstream_msg_data (dmem_respstream_msg.data),
        
            // mngr communication ports
            .mngr2proc_data           (mngr2proc_msg),
            .proc2mngr_data           (proc2mngr_enq_msg),
        
            // Multiplier Memory Port
            .IntMulAlt_reqstream_msg  (IntMulAlt_reqstream_msg),
            .IntMulAlt_respstream_msg (IntMulAlt_respstream_msg),
        
            // clk/reset/control/status signals
            .*
          );
        
        
        
        
        
        
        
        
        
        
        
        
        
          //----------------------------------------------------------------------
          // Line tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          lab2_proc_tinyrv2_encoding_InstTasks tinyrv2();
          logic [`VC_TRACE_NBITS-1:0] temp;
        
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
        
            $sformat(temp,"%x",mngr2proc_msg);
            vc_trace.append_val_rdy_str( trace_str, mngr2proc_val, mngr2proc_rdy, temp );
            vc_trace.append_str( trace_str, ">" );
            if ( !ctrl.val_F )
              vc_trace.append_chars( trace_str, " ", 8 );
            else if ( ctrl.squash_F ) begin
              vc_trace.append_str( trace_str, "~" );
              vc_trace.append_chars( trace_str, " ", 8-1 );
            end else if ( ctrl.stall_F ) begin
              vc_trace.append_str( trace_str, "#" );
              vc_trace.append_chars( trace_str, " ", 8-1 );
            end else begin
              $sformat( str, "%x", dpath.pc_F );
              vc_trace.append_str( trace_str, str );
            end
        
            vc_trace.append_str( trace_str, "|" );
        
            if ( !ctrl.val_D )
              vc_trace.append_chars( trace_str, " ", 23 );
            else if ( ctrl.squash_D ) begin
              vc_trace.append_str( trace_str, "~" );
              vc_trace.append_chars( trace_str, " ", 23-1 );
            end else if ( ctrl.stall_D ) begin
              vc_trace.append_str( trace_str, "#" );
              vc_trace.append_chars( trace_str, " ", 23-1 );
            end else
              vc_trace.append_str( trace_str, { 3896'b0, tinyrv2.disasm( ctrl.inst_D ) } );
        
            vc_trace.append_str( trace_str, "|" );
        
            if ( !ctrl.val_X )
              vc_trace.append_chars( trace_str, " ", 4 );
            else if ( ctrl.stall_X ) begin
              vc_trace.append_str( trace_str, "#" );
              vc_trace.append_chars( trace_str, " ", 4-1 );
            end else
              vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_X ) } );
        
            vc_trace.append_str( trace_str, "|" );
        
            if ( !ctrl.val_M )
              vc_trace.append_chars( trace_str, " ", 4 );
            else if ( ctrl.stall_M ) begin
              vc_trace.append_str( trace_str, "#" );
              vc_trace.append_chars( trace_str, " ", 4-1 );
            end else
              vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_M ) } );
        
            vc_trace.append_str( trace_str, "|" );
        
            if ( !ctrl.val_W )
              vc_trace.append_chars( trace_str, " ", 4 );
            else if ( ctrl.stall_W ) begin
              vc_trace.append_str( trace_str, "#" );
              vc_trace.append_chars( trace_str, " ", 4-1 );
            end else
              vc_trace.append_str( trace_str, { 4064'b0, tinyrv2.disasm_tiny( ctrl.inst_W ) } );
        
            vc_trace.append_str( trace_str, ">" );
            $sformat(temp,"%x",proc2mngr_enq_msg);
            vc_trace.append_val_rdy_str( trace_str, proc2mngr_enq_val, proc2mngr_enq_rdy, temp);
            
        
          end
          `VC_TRACE_END
        
          // These trace modules are useful because they breakout all the
          // individual fields so you can see them in gtkwave
        
          vc_MemReqMsg4BTrace imem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .msg   (imem_reqstream_msg),
            .val   (imem_reqstream_val),
            .rdy   (imem_reqstream_rdy)
          );
        
          vc_MemReqMsg4BTrace dmem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .msg   (dmem_reqstream_msg),
            .val   (dmem_reqstream_val),
            .rdy   (dmem_reqstream_rdy)
          );
        
          vc_MemRespMsg4BTrace imem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .msg   (imem_respstream_msg),
            .val   (imem_respstream_val),
            .rdy   (imem_respstream_rdy)
          );
        
          vc_MemRespMsg4BTrace dmem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .msg   (dmem_respstream_msg),
            .val   (dmem_respstream_val),
            .rdy   (dmem_respstream_rdy)
          );
        
          `endif
        
        endmodule
        
        `endif
        
