//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Simple Pipelined Processor Control
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_BASE_CTRL_V
        `define LAB2_PROC_PROC_BASE_CTRL_V
        
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        module lab2_proc_ProcBaseCtrl
        (
 040589   input  logic        clk,
 000007   input  logic        reset,
        
          // Instruction Memory Port
        
 014057   output logic        imem_reqstream_val,
%000000   input  logic        imem_reqstream_rdy,
 012645   input  logic        imem_respstream_val,
 014050   output logic        imem_respstream_rdy,
 001252   output logic        imem_respstream_drop,
        
          // Data Memory Port
        
 004592   output logic        dmem_reqstream_val,
 002455   input  logic        dmem_reqstream_rdy,
 004582   input  logic        dmem_respstream_val,
 004582   output logic        dmem_respstream_rdy,
        
          // mngr communication port
        
 000036   input  logic        mngr2proc_val,
 000034   output logic        mngr2proc_rdy,
 000006   output logic        proc2mngr_val,
 000006   input  logic        proc2mngr_rdy,
        
          // control signals (ctrl->dpath)
        
 014050   output logic        reg_en_F,
%000000   output logic [1:0]  pc_sel_F,
        
 002711   output logic        reg_en_D,
 000020   output logic [1:0]  op2_sel_D,
%000000   output logic [1:0]  csrr_sel_D,
%000000   output logic [2:0]  imm_type_D,
        
 001353   output logic        reg_en_X,
 000020   output logic [3:0]  alu_fn_X,
        
 003731   output logic        reg_en_M,
 001913   output logic        wb_result_sel_M,
        
%000000   output logic        reg_en_W,
 000406   output logic [4:0]  rf_waddr_W,
 006405   output logic        rf_wen_W,
%000000   output logic        stats_en_wen_W,
        
          // status signals (dpath->ctrl)
        
 002211   input  logic [31:0] inst_D,
 009715   input  logic        br_cond_eq_X,
        
          // extra ports
        
 012485   output logic        commit_inst
        );
        
          //----------------------------------------------------------------------
          // Notes
          //----------------------------------------------------------------------
          // We follow this principle to organize code for each pipeline stage in
          // the control unit.  Register enable logics should always at the
          // beginning. It followed by pipeline registers. Then logic that is not
          // dependent on stall or squash signals. Then logic that is dependent
          // on stall or squash signals. At the end there should be signals meant
          // to be passed to the next stage in the pipeline.
        
          //----------------------------------------------------------------------
          // Valid, stall, and squash signals
          //----------------------------------------------------------------------
          // We use valid signal to indicate if the instruction is valid.  An
          // instruction can become invalid because of being squashed or
          // stalled. Notice that invalid instructions are microarchitectural
          // events, they are different from archtectural no-ops. We must be
          // careful about control signals that might change the state of the
          // processor. We should always AND outgoing control signals with valid
          // signal.
        
 000007   logic val_F;
 010913   logic val_D;
 011331   logic val_X;
 011326   logic val_M;
 012485   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 012652   logic ostall_F;  // can ostall due to imem_respstream_val
 000874   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000767   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 003731   logic ostall_M;  // can ostall due to dmem_respstream_val
%000000   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 013274   logic stall_F;
 002711   logic stall_D;
 001353   logic stall_X;
 003731   logic stall_M;
%000000   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
%000000   logic osquash_D; // can osquash due to unconditional jumps
 001252   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 001252   logic squash_F;
 000316   logic squash_D;
        
          //----------------------------------------------------------------------
          // F stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_F = !stall_F || squash_F;
        
          // Pipeline registers
        
 020291   always_ff @( posedge clk ) begin
 000091     if ( reset )
 000091       val_F <= 1'b0;
 008985     else if ( reg_en_F )
 008985       val_F <= 1'b1;
          end
        
          // forward declaration for PC sel
        
 001252   logic       pc_redirect_X;
%000000   logic [1:0] pc_sel_X;
        
          // PC select logic
        
%000000   always_comb begin
 000626     if ( pc_redirect_X )   // If a branch is taken in X stage
 000626       pc_sel_F = pc_sel_X; // Use pc from X
            else
 019665       pc_sel_F = 2'b0;     // Use pc+4
          end
        
          // ostall due to the imem response not valid.
        
          assign ostall_F = val_F && !imem_respstream_val;
        
          // stall and squash in F
        
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // We drop the mem response when we are getting squashed
        
          assign imem_respstream_drop = squash_F;
        
          // imem is very special. Actually imem requests are sent before the F
          // stage. Note that we need to factor in reset to the imem_reqstream_val
          // signal because we don't want to send out imem request when we are
          // resetting.
        
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
          assign imem_respstream_rdy = !stall_F || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 013267   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_D = !stall_D || squash_D;
        
          // Pipline registers
        
 020291   always_ff @( posedge clk ) begin
 000091     if ( reset )
 000091       val_D <= 1'b0;
 002748     else if ( reg_en_D )
 017452       val_D <= next_val_F;
          end
        
          // Parse instruction fields
        
 000406   logic   [4:0] inst_rd_D;
%000000   logic   [4:0] inst_rs1_D;
 002150   logic   [4:0] inst_rs2_D;
 002150   logic   [11:0] inst_csr_D;
        
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .inst     (inst_D),
            .opcode   (),
            .rd       (inst_rd_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .funct3   (),
            .funct7   (),
            .csr      (inst_csr_D)
          );
        
          // Generic Parameters -- yes or no
        
          localparam n = 1'd0;
          localparam y = 1'd1;
        
          // Register specifiers
        
          localparam rx = 5'bx;   // don't care
          localparam r0 = 5'd0;   // zero
          localparam rL = 5'd31;  // for jal
        
          // Branch type
        
          localparam br_x     = 3'bx; // Don't care
          localparam br_na    = 3'b0; // No branch
          localparam br_bne   = 3'b1; // bne
        
          // Operand 1 Mux Select
        
          localparam bm_x     = 2'bx; // Don't care
          localparam bm_rf    = 2'd0; // Use data from register file
          localparam bm_imm   = 2'd1; // Use sign-extended immediate
          localparam bm_csr   = 2'd2; // Use from mngr data
        
          // ALU Function
        
          localparam alu_x    = 4'bx;
          localparam alu_add  = 4'd0;
          localparam alu_sub  = 4'd1;
          localparam alu_cp0  = 4'd11;
          localparam alu_cp1  = 4'd12;
        
          // Immediate Type
          localparam imm_x    = 3'bx;
          localparam imm_i    = 3'd0;
          localparam imm_s    = 3'd1;
          localparam imm_b    = 3'd2;
          localparam imm_u    = 3'd3;
          localparam imm_j    = 3'd4;
        
          // Memory Request Type
        
          localparam nr       = 2'd0; // No request
          localparam ld       = 2'd1; // Load
          localparam st       = 2'd2; // Store
        
          // Writeback Mux Select
        
          localparam wm_x     = 1'bx; // Don't care
          localparam wm_a     = 1'b0; // Use ALU output
          localparam wm_m     = 1'b1; // Use data memory response
        
          // Instruction Decode
        
 006904   logic       inst_val_D;
%000000   logic [2:0] br_type_D;
 006692   logic       rs1_en_D;
 003271   logic       rs2_en_D;
 000020   logic [3:0] alu_fn_D;
%000000   logic [1:0] dmem_reqstream_type_D;
 003419   logic       wb_result_sel_D;
 004823   logic       rf_wen_D;
 000020   logic       csrr_D;
 001258   logic       csrw_D;
 001258   logic       proc2mngr_val_D;
 000020   logic       mngr2proc_rdy_D;
%000000   logic       stats_en_wen_D;
        
 020291   task cs
          (
            input logic       cs_inst_val,
            input logic [2:0] cs_br_type,
            input logic [2:0] cs_imm_type,
            input logic       cs_rs1_en,
            input logic [1:0] cs_op2_sel,
            input logic       cs_rs2_en,
            input logic [3:0] cs_alu_fn,
            input logic [1:0] cs_dmem_reqstream_type,
            input logic       cs_wb_result_sel,
            input logic       cs_rf_wen,
            input logic       cs_csrr,
            input logic       cs_csrw
          );
 020291   begin
 020291     inst_val_D            = cs_inst_val;
 020291     br_type_D             = cs_br_type;
 020291     imm_type_D            = cs_imm_type;
 020291     rs1_en_D              = cs_rs1_en;
 020291     op2_sel_D             = cs_op2_sel;
 020291     rs2_en_D              = cs_rs2_en;
 020291     alu_fn_D              = cs_alu_fn;
 020291     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 020291     wb_result_sel_D       = cs_wb_result_sel;
 020291     rf_wen_D              = cs_rf_wen;
 020291     csrr_D                = cs_csrr;
 020291     csrw_D                = cs_csrw;
          end
          endtask
        
          // Control signals table
        
%000000   always_comb begin
        
%000000     casez ( inst_D )
        
              //                            br      imm   rs1 op2    rs2 alu      dmm wbmux rf
              //                       val  type    type   en muxsel  en fn       typ sel   wen csrr csrw
 000199       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x, n, bm_x,   n, alu_x,   nr, wm_a, n,  n,   n    );
 003024       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_add, nr, wm_a, y,  n,   n    );
 004057       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i, y, bm_imm, n, alu_add, ld, wm_m, y,  n,   n    );
 000627       `TINYRV2_INST_BNE     :cs( y, br_bne, imm_b, y, bm_rf,  y, alu_x,   nr, wm_a, n,  n,   n    );
 000129       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i, n, bm_csr, n, alu_cp1, nr, wm_a, y,  y,   n    );
 000632       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i, y, bm_rf,  n, alu_cp0, nr, wm_a, n,  n,   y    );
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
              // Add more instructions to the control signal table
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
 011623       default              :cs( n, br_x,  imm_x, n, bm_x,    n, alu_x,   nr, wm_x, n,  n,   n    );
        
            endcase
          end // always_comb
        
 000406   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
          // csrr and csrw logic
        
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
        
 000632     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000632       proc2mngr_val_D  = 1'b1;
 000129     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 000129       mngr2proc_rdy_D  = 1'b1;
 020291     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
 020291     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 020291     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
        
          // mngr2proc_rdy signal for csrr instruction
        
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;
        
 000024   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // ostall if write address in X matches rs1 in D
        
 000002   logic  ostall_waddr_X_rs1_D;
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs1 in D
        
 000158   logic  ostall_waddr_M_rs1_D;
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs1 in D
        
 000492   logic  ostall_waddr_W_rs1_D;
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // ostall if write address in X matches rs2 in D
        
 000496   logic  ostall_waddr_X_rs2_D;
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs2 in D
        
 000822   logic  ostall_waddr_M_rs2_D;
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs2 in D
        
 000848   logic  ostall_waddr_W_rs2_D;
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // Put together ostall signal due to hazards
        
 000850   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D;
        
          // Final ostall signal
        
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D );
        
          // osquash due to jump instruction in D stage (not implemented yet)
        
          assign osquash_D = 1'b0;
        
          // stall and squash in D
        
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_D = val_D && osquash_X;
        
          // Valid signal for the next stage
        
 011788   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_X = !stall_X;
        
 002210   logic [31:0] inst_X;
%000000   logic [1:0]  dmem_reqstream_type_X;
 002979   logic        wb_result_sel_X;
 004151   logic        rf_wen_X;
 000406   logic [4:0]  rf_waddr_X;
 001258   logic        proc2mngr_val_X;
%000000   logic        stats_en_wen_X;
%000000   logic [2:0]  br_type_X;
        
          // Pipeline registers
        
 020291   always_ff @( posedge clk )
 000091     if ( reset ) begin
 000091       val_X                 <= 1'b0;
            end
 000901     else if ( reg_en_X ) begin
 019299       val_X                 <= next_val_D;
 019299       rf_wen_X              <= rf_wen_D;
 019299       inst_X                <= inst_D;
 019299       alu_fn_X              <= alu_fn_D;
 019299       rf_waddr_X            <= rf_waddr_D;
 019299       proc2mngr_val_X       <= proc2mngr_val_D;
 019299       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 019299       wb_result_sel_X       <= wb_result_sel_D;
 019299       stats_en_wen_X        <= stats_en_wen_D;
 019299       br_type_X             <= br_type_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
%000000   always_comb begin
 000626     if ( val_X && ( br_type_X == br_bne ) ) begin
 000626       pc_redirect_X = !br_cond_eq_X;
 000626       pc_sel_X      = 2'b1; // use branch target
            end
 019665     else begin
 019665       pc_redirect_X = 1'b0;
 019665       pc_sel_X      = 2'b0; // use pc+4
            end
          end
        
          // ostall due to dmem_reqstream not ready.
        
          assign ostall_X = val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;
        
          // osquash due to taken branch, notice we can't osquash if current
          // stage stalls, otherwise we will send osquash twice.
        
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // stall and squash used in X stage
        
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );
        
          // set dmem_reqstream_val only if not stalling
        
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
        
          // Valid signal for the next stage
        
 012684   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_M  = !stall_M;
        
 002210   logic [31:0] inst_M;
%000000   logic [1:0]  dmem_reqstream_type_M;
 002799   logic        rf_wen_M;
 000406   logic [4:0]  rf_waddr_M;
 001258   logic        proc2mngr_val_M;
%000000   logic        stats_en_wen_M;
        
          // Pipeline register
        
 020291   always_ff @( posedge clk )
 000091     if ( reset ) begin
 000091       val_M                 <= 1'b0;
            end
 002489     else if ( reg_en_M ) begin
 017711       val_M                 <= next_val_X;
 017711       rf_wen_M              <= rf_wen_X;
 017711       inst_M                <= inst_X;
 017711       rf_waddr_M            <= rf_waddr_X;
 017711       proc2mngr_val_M       <= proc2mngr_val_X;
 017711       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 017711       wb_result_sel_M       <= wb_result_sel_X;
 017711       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // stall M
        
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
        
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // Valid signal for the next stage
        
 012489   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_W = !stall_W;
        
 002210   logic [31:0] inst_W;
 001258   logic        proc2mngr_val_W;
 002799   logic        rf_wen_pending_W;
%000000   logic        stats_en_wen_pending_W;
        
          // Pipeline registers
        
 020291   always_ff @( posedge clk ) begin
 000091     if ( reset ) begin
 000091       val_W                  <= 1'b0;
            end
%000000     else if ( reg_en_W ) begin
 020200       val_W                  <= next_val_M;
 020200       rf_wen_pending_W       <= rf_wen_M;
 020200       inst_W                 <= inst_M;
 020200       rf_waddr_W             <= rf_waddr_M;
 020200       proc2mngr_val_W        <= proc2mngr_val_M;
 020200       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
          // write enable
        
          assign rf_wen_W       = val_W && rf_wen_pending_W;
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
          // ostall due to proc2mngr
        
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall and squash signal used in W stage
        
          assign stall_W = val_W && ostall_W;
        
          // proc2mngr port
        
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
          assign commit_inst = val_W && !stall_W;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_CTRL_V */
        
