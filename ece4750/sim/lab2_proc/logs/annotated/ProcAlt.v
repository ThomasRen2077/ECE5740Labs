//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_ALT_V
        `define LAB2_PROC_PROC_ALT_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/trace.v"
        `include "tinyrv2_encoding.v"
        `include "ProcAltCtrl.v"
        `include "ProcAltDpath.v"
        `include "DropUnit.v"
        `include "lab1_imul/IntMulAlt.v"
        
        // Main module for processor
        module lab2_proc_ProcAlt
        #(
          parameter p_num_cores = 1
        )
        (
 029302   input  logic         clk,
 000042   input  logic         reset,
        
          // From mngr streaming port
 000012   input  logic [31:0]  mngr2proc_msg,
 000196   input  logic         mngr2proc_val,
 000196   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
 000732   output logic [31:0]  proc2mngr_msg,
 000080   output logic         proc2mngr_val,
 001606   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
%000000   output mem_req_4B_t  imem_reqstream_msg,
 006737   output logic         imem_reqstream_val,
 009144   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
%000000   input  mem_resp_4B_t imem_respstream_msg,
 010274   input  logic         imem_respstream_val,
 010138   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001072   output logic         dmem_reqstream_val,
 007450   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001132   input  logic         dmem_respstream_val,
 001132   output logic         dmem_respstream_rdy,
        
          // Extra Port
%000000   input  logic [31:0]  core_id,
 009133   output logic         commit_inst,
%000000   output logic         stats_en
        );
        
        //---------- Connect External ----------
        
          // ------ Connect Instruction Memory ------
          // Instruction Memory Request Bypass Queue Message
 006657   logic [1:0]  imem_queue_num_free_entries;
%000000   mem_req_4B_t imem_reqstream_enq_msg;
 010574   logic        imem_reqstream_enq_val;
%000000   logic        imem_reqstream_enq_rdy;
%000000   logic [31:0] imem_reqstream_enq_msg_addr;
          assign imem_reqstream_enq_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_enq_msg.opaque = 8'b0;
          assign imem_reqstream_enq_msg.addr   = imem_reqstream_enq_msg_addr;
          assign imem_reqstream_enq_msg.len    = 2'd0;
          assign imem_reqstream_enq_msg.data   = 32'bx;
        
          // Instruction Memory Request Bypass Queue Connection
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),2) imem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(imem_queue_num_free_entries),
        
            .enq_msg (imem_reqstream_enq_msg),
            .enq_val (imem_reqstream_enq_val),
            .enq_rdy (imem_reqstream_enq_rdy),
        
            .deq_msg (imem_reqstream_msg),
            .deq_val (imem_reqstream_val),
            .deq_rdy (imem_reqstream_rdy)
          );
        
          // ------ Connect Imem Drop Unit ------
          // Imem Drop Unit Message
 001862   logic         imem_respstream_drop;
%000000   mem_resp_4B_t imem_respstream_drop_msg;
 009220   logic         imem_respstream_drop_val;
 010532   logic         imem_respstream_drop_rdy;
        
          // Imem Drop Unit Connection
          lab2_proc_DropUnit #($bits(mem_resp_4B_t)) imem_respstream_drop_unit
          (
            .clk         (clk),
            .reset       (reset),
        
            .drop        (imem_respstream_drop),
        
            .istream_msg (imem_respstream_msg),
            .istream_val (imem_respstream_val),
            .istream_rdy (imem_respstream_rdy),
        
            .ostream_msg (imem_respstream_drop_msg),
            .ostream_val (imem_respstream_drop_val),
            .ostream_rdy (imem_respstream_drop_rdy)
          );
        
          // ------ Connect Data Memory ------
          // Data Memory Request Bypass Queue Message
 000628   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001148   logic        dmem_reqstream_enq_val;
 000628   logic        dmem_reqstream_enq_rdy;
%000000   logic [2:0]  dmem_reqstream_enq_msg_type;
 000784   logic [31:0] dmem_reqstream_enq_msg_addr;
 000108   logic [31:0] dmem_reqstream_enq_msg_data;
          assign dmem_reqstream_enq_msg.type_  = dmem_reqstream_enq_msg_type;
          assign dmem_reqstream_enq_msg.opaque = 8'b0;
          assign dmem_reqstream_enq_msg.addr   = dmem_reqstream_enq_msg_addr;
          assign dmem_reqstream_enq_msg.len    = 2'd0;
          assign dmem_reqstream_enq_msg.data   = dmem_reqstream_enq_msg_data;
        
          // Data Memory Request Bypass Queue Connection
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),1) dmem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(dmem_queue_num_free_entries),
        
            .enq_msg (dmem_reqstream_enq_msg),
            .enq_val (dmem_reqstream_enq_val),
            .enq_rdy (dmem_reqstream_enq_rdy),
        
            .deq_msg (dmem_reqstream_msg),
            .deq_val (dmem_reqstream_val),
            .deq_rdy (dmem_reqstream_rdy)
          );
        
          // ------ Connect Mngr streaming ------
          // proc2mngr Bypass Queue Message
 000060   logic        proc2mngr_queue_num_free_entries;
 000732   logic [31:0] proc2mngr_enq_msg;
 000080   logic        proc2mngr_enq_val;
 000060   logic        proc2mngr_enq_rdy;
        
          // proc2mngr Bypass Queue Connection
          vc_Queue#(`VC_QUEUE_BYPASS,32,1) proc2mngr_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(proc2mngr_queue_num_free_entries),
        
            .enq_msg (proc2mngr_enq_msg),
            .enq_val (proc2mngr_enq_val),
            .enq_rdy (proc2mngr_enq_rdy),
        
            .deq_msg (proc2mngr_msg),
            .deq_val (proc2mngr_val),
            .deq_rdy (proc2mngr_rdy)
          );
        
          // ------ Connect Multiplier from Lab1 ------
          // Multiplier Request Message
 000016   logic [63:0]        IntMulAlt_reqstream_msg;
 000002   logic               IntMulAlt_reqstream_val;
 000002   logic               IntMulAlt_reqstream_rdy;
        
          // Multiplier Response Message
 000002   logic [31:0]        IntMulAlt_respstream_msg;
 000002   logic               IntMulAlt_respstream_val;
 000306   logic               IntMulAlt_respstream_rdy;
        
          // Multiplier Response Connection
          lab1_imul_IntMulAlt mul
          (
            .clk            (clk),
            .reset          (reset),
            .istream_val    (IntMulAlt_reqstream_val),
            .istream_rdy    (IntMulAlt_reqstream_rdy),
            .istream_msg    (IntMulAlt_reqstream_msg),
            .ostream_val    (IntMulAlt_respstream_val),
            .ostream_rdy    (IntMulAlt_respstream_rdy),
            .ostream_msg    (IntMulAlt_respstream_msg)
          );
        
        // ---------- Connect DataPath and Control Unit ----------
        
          // Control/Status Signals
          // control signals (ctrl->dpath)
 010532   logic        reg_en_F;
 000008   logic [1:0]  pc_sel_F;
 000624   logic        reg_en_D;
 001842   logic [1:0]  op1_byp_sel_D;
 000490   logic [1:0]  op2_byp_sel_D;
 000002   logic        op1_sel_D;
 000188   logic [1:0]  op2_sel_D;
%000000   logic [1:0]  csrr_sel_D;
 000010   logic [2:0]  imm_type_D;
 000306   logic        reg_en_X;
 000230   logic [3:0]  alu_fn_X;
 000002   logic [1:0]  ex_result_sel_X;
 000918   logic        reg_en_M;
 000362   logic        wb_result_sel_M;
%000000   logic        reg_en_W;
 000732   logic [4:0]  rf_waddr_W;
 005212   logic        rf_wen_W;
%000000   logic        stats_en_wen_W;
          
          // status signals (dpath->ctrl)
 000004   logic [31:0] inst_D;
 007750   logic        br_cond_eq_X;
 002234   logic        br_cond_lt_X;
 002486   logic        br_cond_ltu_X;
        
          // ------ Connect Control Unit ------
          lab2_proc_ProcAltCtrl ctrl
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
        
          // ------ Connect DataPath ------
          lab2_proc_ProcAltDpath
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
        
