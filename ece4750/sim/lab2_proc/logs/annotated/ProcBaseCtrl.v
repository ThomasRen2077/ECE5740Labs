//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_BASE_CTRL_V
        `define LAB2_PROC_PROC_BASE_CTRL_V
        
        `include "vc/trace.v"
        `include "tinyrv2_encoding.v"
        
        
        
        
        
        
        module lab2_proc_ProcBaseCtrl
        (
        // Input ports of the module
 020979   input  logic        clk,
        // Input ports of the module
 000041   input  logic        reset,
        
        
          // Instruction Memory Port
        // Output ports of the module
 006646   output logic        imem_reqstream_val,
        // Input ports of the module
%000000   input  logic        imem_reqstream_rdy,
        // Input ports of the module
 006136   input  logic        imem_respstream_val,
        // Output ports of the module
 006605   output logic        imem_respstream_rdy,
        // Output ports of the module
 000460   output logic        imem_respstream_drop,
        
        
          // Data Memory Port
        // Output ports of the module
 001752   output logic        dmem_reqstream_val,
        // Input ports of the module
 000896   input  logic        dmem_reqstream_rdy,
        // Input ports of the module
 001740   input  logic        dmem_respstream_val,
        // Output ports of the module
 001740   output logic        dmem_respstream_rdy,
        // Output ports of the module
%000000   output logic [2:0]  dmem_reqstream_msg_type,
        
        
          // mngr communication port
        // Input ports of the module
 000202   input  logic        mngr2proc_val,
        // Output ports of the module
 000202   output logic        mngr2proc_rdy,
        // Output ports of the module
 000078   output logic        proc2mngr_val,
        // Input ports of the module
 000078   input  logic        proc2mngr_rdy,
        
          // multiplier communication port
        // Output ports of the module
 000002   output logic        IntMulAlt_reqstream_val,
        // Input ports of the module
 000002   input  logic        IntMulAlt_reqstream_rdy,
        // Input ports of the module
 000002   input  logic        IntMulAlt_respstream_val,
        // Output ports of the module
 000360   output logic        IntMulAlt_respstream_rdy,
        
        
        
          // control signals (ctrl->dpath)
        // Output ports of the module
 006605   output logic        reg_en_F,
        // Output ports of the module
 000008   output logic [1:0]  pc_sel_F,
        // Output ports of the module
 001538   output logic        reg_en_D,
        // Output ports of the module
 000002   output logic        op1_sel_D,  // op1_sel Mux signal
        // Output ports of the module
 000182   output logic [1:0]  op2_sel_D,
        // Output ports of the module
%000000   output logic [1:0]  csrr_sel_D,
        // Output ports of the module
 000010   output logic [2:0]  imm_type_D,
        // Output ports of the module
 000360   output logic        reg_en_X,
        // Output ports of the module
 000216   output logic [3:0]  alu_fn_X,
        // Output ports of the module
 000002   output logic [1:0]  ex_result_sel_X,
        // Output ports of the module
 001386   output logic        reg_en_M,
        // Output ports of the module
 000610   output logic        wb_result_sel_M,
        // Output ports of the module
%000000   output logic        reg_en_W,
        // Output ports of the module
 000254   output logic [4:0]  rf_waddr_W,
        // Output ports of the module
 003354   output logic        rf_wen_W,
        // Output ports of the module
%000000   output logic        stats_en_wen_W,
        
        
        
          // status signals (dpath->ctrl)
        // Input ports of the module
 000002   input  logic [31:0] inst_D,
        // Input ports of the module
 003306   input  logic        br_cond_eq_X,
        // Input ports of the module
 000170   input  logic        br_cond_lt_X,
        // Input ports of the module
 000622   input  logic        br_cond_ltu_X,
        
        
          // extra ports
        // Output ports of the module
 005813   output logic        commit_inst
        );
        
        
        
        
          //----------------------------------------------------------------------
          // Notes
          //----------------------------------------------------------------------
          // We follow this principle to organize code for each pipeline stage in
        // Always block for combinational or sequential logic
          // the control unit.  Register enable logics should always at the
        // Internal registers to hold state
          // beginning. It followed by pipeline registers. Then logic that is not
        // End of always block
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
        // Always block for combinational or sequential logic
          // processor. We should always AND outgoing control signals with valid
          // signal.
        
 000041   logic val_F;
 005121   logic val_D;
 005436   logic val_X;
 005401   logic val_M;
 005813   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
        // Conditional logic based on inputs or internal state
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 006177   logic ostall_F;  // can ostall due to imem_respstream_val
 000896   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000190   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 001386   logic ostall_M;  // can ostall due to dmem_respstream_val
%000000   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 006583   logic stall_F;
 001538   logic stall_D;
 000360   logic stall_X;
 001386   logic stall_M;
%000000   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
        // Conditional logic based on inputs or internal state
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
%000000   logic osquash_D; // can osquash due to unconditional jumps
 000460   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 000460   logic squash_F;
 000388   logic squash_D;
        
          //----------------------------------------------------------------------
          // F stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
        // Internal registers to hold state
          assign reg_en_F = !stall_F || squash_F;
        
        // Internal registers to hold state
          // Pipeline registers
        
        // Always block for combinational or sequential logic
 010469   always_ff @( posedge clk ) begin
        // Conditional logic based on inputs or internal state
 000533     if ( reset )
 000533       val_F <= 1'b0;
        // Internal registers to hold state
 004392     else if ( reg_en_F )
 004392       val_F <= 1'b1;
        // End of always block
          end
        
          // forward declaration for PC sel
        
 000460   logic       pc_redirect_X;
 000004   logic       pc_redirect_D;
 000004   logic [1:0] pc_sel_D;
 000004   logic [1:0] pc_sel_X;
        
          // PC select logic
        
        // Always block for combinational or sequential logic
%000000   always_comb begin
        // Conditional logic based on inputs or internal state
 000002     if ( pc_redirect_D )          // If pc jumps in D stage
 000002       pc_sel_F = pc_sel_D;        // Use pc from D
        // Conditional logic based on inputs or internal state
 000230     else if ( pc_redirect_X )     // If a branch is taken in X stage
 000230       pc_sel_F = pc_sel_X;        // Use pc from X
            else
 010237       pc_sel_F = 2'b0;            // Use pc + 4
        // End of always block
          end
        
          // ostall due to the imem response not valid.
        
        // Continuous assignment to wire or output
          assign ostall_F = val_F && !imem_respstream_val;
        
          // stall and squash in F
        
        // Continuous assignment to wire or output
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
        // Continuous assignment to wire or output
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // We drop the mem response when we are getting squashed
        
        // Continuous assignment to wire or output
          assign imem_respstream_drop = squash_F;
        
          // imem is very special. Actually imem requests are sent before the F
          // stage. Note that we need to factor in reset to the imem_reqstream_val
          // signal because we don't want to send out imem request when we are
          // resetting.
        
        // Continuous assignment to wire or output
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
        // Continuous assignment to wire or output
          assign imem_respstream_rdy = !stall_F || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 006542   logic  next_val_F;
        // Continuous assignment to wire or output
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
        // Internal registers to hold state
          assign reg_en_D = !stall_D || squash_D;
        
        // Internal registers to hold state
          // Pipline registers
        
        // Always block for combinational or sequential logic
 010469   always_ff @( posedge clk ) begin
        // Conditional logic based on inputs or internal state
 000533     if ( reset )
 000533       val_D <= 1'b0;
        // Internal registers to hold state
 001901     else if ( reg_en_D )
 008035       val_D <= next_val_F;
        // End of always block
          end
        
          // Parse instruction fields
        
 000254   logic   [4:0] inst_rd_D;
 000002   logic   [4:0] inst_rs1_D;
 000562   logic   [4:0] inst_rs2_D;
 000562   logic   [11:0] inst_csr_D;
        
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
          localparam br_x      = 4'bx; // Don't care
          localparam br_na     = 4'b0; // No branch
          localparam br_bne    = 4'b1; // bne
          localparam br_beq    = 4'd2; // beq
          localparam br_blt    = 4'd3; // blt
          localparam br_bltu   = 4'd4; // bltu
          localparam br_bge    = 4'd5; // bge
          localparam br_bgeu   = 4'd6; // bgeu
          localparam jal       = 4'd7; // jal
          localparam jalr      = 4'd8; // jalr
        
        
        
        
          // Operand 0 Mux Select 
          localparam am_x     = 1'bx; // Don't care
        // Internal registers to hold state
          localparam am_rf    = 1'd0; // Use data from register file
        // Internal registers to hold state
          localparam am_pc    = 1'd1; // Use data from register pc
        
        
          // Operand 1 Mux Select
          localparam bm_x     = 2'bx; // Don't care
        // Internal registers to hold state
          localparam bm_rf    = 2'd0; // Use data from register file
          localparam bm_imm   = 2'd1; // Use sign-extended immediate
          localparam bm_csr   = 2'd2; // Use from mngr data
        
        
          // ALU Function
          localparam alu_x        = 4'bx;
          localparam alu_add      = 4'd0;
          localparam alu_sub      = 4'd1;
          localparam alu_and      = 4'd2;
          localparam alu_or       = 4'd3;
          localparam alu_xor      = 4'd4;
          localparam alu_slt      = 4'd5;
          localparam alu_sltu     = 4'd6;
          localparam alu_sra      = 4'd7;
          localparam alu_srl      = 4'd8;
          localparam alu_sll      = 4'd9;
          localparam alu_pc_add   = 4'd10;
          localparam alu_cp0      = 4'd11;
          localparam alu_cp1      = 4'd12;
        
        
        
          // Immediate Type
          localparam imm_x    = 3'bx;
          localparam imm_i    = 3'd0;
          localparam imm_s    = 3'd1;
          localparam imm_b    = 3'd2;
          localparam imm_u    = 3'd3;
          localparam imm_j    = 3'd4;
          localparam imm_iv    = 3'd5;
          
          //ex_result Mux Select
          localparam a_alu    = 2'd0;
          localparam a_mul    = 2'd1;
          localparam a_pc     = 2'd2;
        
        
        
          // Memory Request Type
          localparam nr       = 2'd0; // No request
          localparam ld       = 2'd1; // Load
          localparam st       = 2'd2; // Store
        
        
          // Writeback Mux Select
          localparam wm_x     = 1'bx; // Don't care
        // Output ports of the module
          localparam wm_a     = 1'b0; // Use ALU output
          localparam wm_m     = 1'b1; // Use data memory response
        
        
          // Instruction Decode
 005038   logic       inst_val_D;
 000004   logic [3:0] br_type_D;
 003402   logic       rs1_en_D;
 001042   logic       rs2_en_D;
 000216   logic [3:0] alu_fn_D;
 000002   logic [1:0] ex_result_sel_D;
 000552   logic [1:0] dmem_reqstream_type_D;
 000950   logic       wb_result_sel_D;
 002904   logic       rf_wen_D;
 000182   logic       csrr_D;
 000522   logic       csrw_D;
 000522   logic       proc2mngr_val_D;
 000182   logic       mngr2proc_rdy_D;
%000000   logic       stats_en_wen_D;
        
        
        
 010469   task cs
          (
        // Input ports of the module
            input logic       cs_inst_val,
        // Input ports of the module
            input logic [3:0] cs_br_type,
        // Input ports of the module
            input logic [2:0] cs_imm_type,
        // Input ports of the module
            input logic       cs_op1_sel,
        // Input ports of the module
            input logic       cs_rs1_en,
        // Input ports of the module
            input logic [1:0] cs_op2_sel,
        // Input ports of the module
            input logic       cs_rs2_en,
        // Input ports of the module
            input logic [3:0] cs_alu_fn,
        // Input ports of the module
            input logic [1:0] cs_ex_result_sel,
        // Input ports of the module
            input logic [1:0] cs_dmem_reqstream_type,
        // Input ports of the module
            input logic       cs_wb_result_sel,
        // Input ports of the module
            input logic       cs_rf_wen,
        // Input ports of the module
            input logic       cs_csrr,
        // Input ports of the module
            input logic       cs_csrw
          );
 010469   begin
 010469     inst_val_D            = cs_inst_val;
 010469     br_type_D             = cs_br_type;
 010469     imm_type_D            = cs_imm_type;
 010469     rs1_en_D              = cs_rs1_en;
 010469     op1_sel_D             = cs_op1_sel;
 010469     op2_sel_D             = cs_op2_sel;
 010469     rs2_en_D              = cs_rs2_en;
 010469     alu_fn_D              = cs_alu_fn;
 010469     ex_result_sel_D       = cs_ex_result_sel;
 010469     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 010469     wb_result_sel_D       = cs_wb_result_sel;
 010469     rf_wen_D              = cs_rf_wen;
 010469     csrr_D                = cs_csrr;
 010469     csrw_D                = cs_csrw;
          end
          endtask
        
        
        
          // Control signals table
        // Always block for combinational or sequential logic
%000000   always_comb begin
%000000     casez ( inst_D )
        
              //                            br      imm     op1     rs1 op2    rs2 alu       ex_result dmm wbmux rf
              //                       val  type    type    muxsel   en muxsel  en fn        muxsel    typ sel   wen csrr csrw
 001422       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x,  am_x,    n, bm_x,   n, alu_x,    a_alu,    nr, wm_a, n,  n,   n    );
 000433       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i,  am_x,    n, bm_csr, n, alu_cp1,  a_alu,    nr, wm_a, y,  y,   n    );
 000264       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i,  am_rf,   y, bm_rf,  n, alu_cp0,  a_alu,    nr, wm_a, n,  n,   y    );
        
              //Add Row to Control Signal
              //Reg-Reg Instruction
 001096       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SUB     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sub,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_MUL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_x,    a_mul,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_AND     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_and,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_OR      :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_or,   a_alu,    nr, wm_a, y,  n,   n    );
 000005       `TINYRV2_INST_XOR     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_xor,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLT     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_slt,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTU    :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sltu, a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRA     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sra,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_srl,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLL     :cs( y, br_na,  imm_x,  am_rf,   y, bm_rf,  y, alu_sll,  a_alu,    nr, wm_a, y,  n,   n    );
        
              //Reg-Imm Instruction
 001148       `TINYRV2_INST_ADDI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_ORI     :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_or,   a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_ANDI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_and,  a_alu,    nr, wm_a, y,  n,   n    );
 000009       `TINYRV2_INST_XORI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_xor,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTI    :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_slt,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLTIU   :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_sltu, a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRAI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_sra,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SRLI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_srl,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLLI    :cs( y, br_na,  imm_iv, am_rf,   y, bm_imm, n, alu_sll,  a_alu,    nr, wm_a, y,  n,   n    );
 000005       `TINYRV2_INST_LUI     :cs( y, br_na,  imm_u,  am_rf,   y, bm_imm, n, alu_cp1,  a_alu,    nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_AUIPC   :cs( y, br_na,  imm_u,  am_pc,   n, bm_imm, n, alu_add,  a_alu,    nr, wm_a, y,  n,   n    );
        
              //Memory Instruction
 000927       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i,  am_rf,   y, bm_imm, n, alu_add,  a_alu,    ld, wm_m, y,  n,   n    );
 000367       `TINYRV2_INST_SW      :cs( y, br_na,  imm_s,  am_rf,   y, bm_imm, n, alu_add,  a_alu,    st, wm_x, n,  n,   n    );
        
              //Jump Instruction
 000002       `TINYRV2_INST_JAL     :cs( y, jal,    imm_j,  am_x,    n, bm_x,   n, alu_x,    a_pc,     nr, wm_a, y,  n,   n    );
 000002       `TINYRV2_INST_JALR    :cs( y, jalr,   imm_i,  am_rf,   y, bm_imm, n, alu_pc_add,  a_pc,     nr, wm_a, y,  n,   n    );
        
              //Branch Instruction
 000624       `TINYRV2_INST_BNE     :cs( y, br_bne,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BEQ     :cs( y, br_beq,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BLT     :cs( y, br_blt,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BLTU    :cs( y, br_bltu, imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BGE     :cs( y, br_bge,  imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
 000001       `TINYRV2_INST_BGEU    :cs( y, br_bgeu, imm_b, am_rf,   y,  bm_rf,  y, alu_x,   a_alu,    nr, wm_a, n,  n,   n    );
             
 004143       default               :cs( n, br_x,  imm_x,   am_x,    n,  bm_x,   n, alu_x,   a_alu,    nr, wm_x, n,  n,   n    );
        // End of always block
            endcase
          end
        
        
 000254   logic [4:0] rf_waddr_D;
        // Continuous assignment to wire or output
          assign rf_waddr_D = inst_rd_D;
        
        
          // csrr and csrw logic
        // Always block for combinational or sequential logic
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
        
        // Conditional logic based on inputs or internal state
 000264     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000264       proc2mngr_val_D  = 1'b1;
        // Conditional logic based on inputs or internal state
 000433     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 000433       mngr2proc_rdy_D  = 1'b1;
        // Conditional logic based on inputs or internal state
 010469     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
        // Conditional logic based on inputs or internal state
 010469     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
        // Conditional logic based on inputs or internal state
 010469     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
        // End of always block
          end
        
        // Always block for combinational or sequential logic
%000000   always_comb begin
        // Conditional logic based on inputs or internal state
 000002     if( val_D && ( br_type_D == jal ) ) begin
 000002       pc_redirect_D = 1'd1;
 000002       pc_sel_D = 2'd2;              // pc take jumps
        // End of always block
            end
 010467     else begin
 010467       pc_redirect_D = 1'd0;
 010467       pc_sel_D = 2'd0;
            end
          end
        
          // mngr2proc_rdy signal for csrr instruction
        // Continuous assignment to wire or output
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;
        
 000076   logic  ostall_mngr2proc_D;
        // Continuous assignment to wire or output
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // set IntMulAlt_reqstream_val only if not stalling and current instruction is mul
        // Continuous assignment to wire or output
          assign IntMulAlt_reqstream_val = val_D && !stall_D && (ex_result_sel_D == a_mul);
        
          // ostall if multiplier is not ready and current instruction is mul
 000002   logic  ostall_IntMulAlt_D;
        // Continuous assignment to wire or output
          assign ostall_IntMulAlt_D = val_D && !IntMulAlt_reqstream_rdy;
        
        
          // ostall if write address in X matches rs1 in D
 000114   logic  ostall_waddr_X_rs1_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
        
          // ostall if write address in M matches rs1 in D
 000384   logic  ostall_waddr_M_rs1_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
        
          // ostall if write address in W matches rs1 in D
 000688   logic  ostall_waddr_W_rs1_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
        
          // ostall if write address in X matches rs2 in D
 000268   logic  ostall_waddr_X_rs2_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
        
          // ostall if write address in M matches rs2 in D
 000388   logic  ostall_waddr_M_rs2_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
        
          // ostall if write address in W matches rs2 in D
 000402   logic  ostall_waddr_W_rs2_D;
        // Continuous assignment to wire or output
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
        
          // Put together ostall signal due to hazards
 000818   logic  ostall_hazard_D;
        // Continuous assignment to wire or output
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D;
        
        
          // Final ostall signal
        // Continuous assignment to wire or output
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_IntMulAlt_D || ostall_hazard_D );
        
        
          // osquash due to jump instruction in D stage (not implemented yet)
        // Continuous assignment to wire or output
          assign osquash_D = 1'b0;
        
        
          // stall and squash in D
        // Continuous assignment to wire or output
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
        // Continuous assignment to wire or output
          assign squash_D = val_D && osquash_X;
        
        
          // Valid signal for the next stage
 005557   logic  next_val_D;
        // Continuous assignment to wire or output
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
        // Internal registers to hold state
          assign reg_en_X = !stall_X;
        
 000002   logic [31:0] inst_X;
 000538   logic [1:0]  dmem_reqstream_type_X;
 000898   logic        wb_result_sel_X;
 002734   logic        rf_wen_X;
 000254   logic [4:0]  rf_waddr_X;
 000522   logic        proc2mngr_val_X;
%000000   logic        stats_en_wen_X;
 000004   logic [3:0]  br_type_X;
        
        // Internal registers to hold state
          // Pipeline registers
        
        // Always block for combinational or sequential logic
 010469   always_ff @( posedge clk )
        // Conditional logic based on inputs or internal state
 000533     if ( reset ) begin
 000533       val_X                 <= 1'b0;
        // End of always block
            end
        // Internal registers to hold state
 000245     else if ( reg_en_X ) begin
 009691       val_X                 <= next_val_D;
 009691       rf_wen_X              <= rf_wen_D;
 009691       inst_X                <= inst_D;
 009691       alu_fn_X              <= alu_fn_D;
 009691       ex_result_sel_X       <= ex_result_sel_D;
 009691       rf_waddr_X            <= rf_waddr_D;
 009691       proc2mngr_val_X       <= proc2mngr_val_D;
 009691       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 009691       wb_result_sel_X       <= wb_result_sel_D;
 009691       stats_en_wen_X        <= stats_en_wen_D;
 009691       br_type_X             <= br_type_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
        // Always block for combinational or sequential logic
%000000   always_comb begin
        // Conditional logic based on inputs or internal state
 000226     if ( val_X && ( br_type_X == br_bne ) ) begin
 000226       pc_redirect_X = !br_cond_eq_X;
 000226       pc_sel_X      = 2'b1; // use branch target
        // End of always block
            end
 000001     else if ( val_X && ( br_type_X == br_beq ) ) begin
 000001       pc_redirect_X = br_cond_eq_X;
 000001       pc_sel_X      = 2'b1; 
            end
 000001     else if ( val_X && ( br_type_X == br_blt ) ) begin
 000001       pc_redirect_X = br_cond_lt_X;
 000001       pc_sel_X      = 2'b1; 
            end
 000001     else if ( val_X && ( br_type_X == br_bltu ) ) begin
 000001       pc_redirect_X = br_cond_ltu_X;
 000001       pc_sel_X      = 2'b1; 
            end
 000001     else if ( val_X && ( br_type_X == br_bge ) ) begin
 000001       pc_redirect_X = !br_cond_lt_X;
 000001       pc_sel_X      = 2'b1; 
            end
 000001     else if ( val_X && ( br_type_X == br_bgeu ) ) begin
 000001       pc_redirect_X = !br_cond_ltu_X;
 000001       pc_sel_X      = 2'b1; 
            end
 000002     else if ( val_X && ( br_type_X == jalr) ) begin
 000002       pc_redirect_X = 1'b1;
 000002       pc_sel_X      = 2'd3; 
            end
 010236     else begin
 010236       pc_redirect_X = 1'b0;
 010236       pc_sel_X      = 2'b0; // use pc+4
            end
          end
        
          // set IntMulAlt_respstream_rdy only if not stalling
        // Continuous assignment to wire or output
          assign IntMulAlt_respstream_rdy = !stall_X;
        
          // ostall due to dmem_reqstream not ready.
 000188   logic ostall_dmem_reqstream_X;
        // Continuous assignment to wire or output
          assign ostall_dmem_reqstream_X = (val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy);
        
          // ostall due to IntMulAlt_respstream not valid and current instruction is mul
 000002   logic ostall_IntMulAlt_X;
        // Continuous assignment to wire or output
          assign ostall_IntMulAlt_X = val_X && !IntMulAlt_respstream_val && (ex_result_sel_X == a_mul);
        
          // Final ostall signal
        // Continuous assignment to wire or output
          assign ostall_X = ostall_dmem_reqstream_X || ostall_IntMulAlt_X;
        
          // osquash due to taken branch, notice we can't osquash if current
          // stage stalls, otherwise we will send osquash twice.
        // Continuous assignment to wire or output
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // stall and squash used in X stage
        // Continuous assignment to wire or output
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );
        
          // set dmem_reqstream_val only if not stalling
        // Continuous assignment to wire or output
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
        
          // set dmem_reqstream_msg_type
        // Always block for combinational or sequential logic
%000000     always_comb begin
        // Conditional logic based on inputs or internal state
 000388       if(dmem_reqstream_type_X == st)  dmem_reqstream_msg_type = `VC_MEM_REQ_MSG_TYPE_WRITE;
 010081       else  dmem_reqstream_msg_type = `VC_MEM_REQ_MSG_TYPE_READ;
        // End of always block
            end
        
        
        
          // Valid signal for the next stage
 005794   logic  next_val_X;
        // Continuous assignment to wire or output
          assign next_val_X = val_X && !stall_X;
        
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
        // Internal registers to hold state
          assign reg_en_M  = !stall_M;
        
 000002   logic [31:0] inst_M;
 000484   logic [1:0]  dmem_reqstream_type_M;
 002352   logic        rf_wen_M;
 000254   logic [4:0]  rf_waddr_M;
 000522   logic        proc2mngr_val_M;
%000000   logic        stats_en_wen_M;
        
        // Internal registers to hold state
          // Pipeline register
        
        // Always block for combinational or sequential logic
 010469   always_ff @( posedge clk )
        // Conditional logic based on inputs or internal state
 000533     if ( reset ) begin
 000533       val_M                 <= 1'b0;
        // End of always block
            end
        // Internal registers to hold state
 000934     else if ( reg_en_M ) begin
 009002       val_M                 <= next_val_X;
 009002       rf_wen_M              <= rf_wen_X;
 009002       inst_M                <= inst_X;
 009002       rf_waddr_M            <= rf_waddr_X;
 009002       proc2mngr_val_M       <= proc2mngr_val_X;
 009002       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 009002       wb_result_sel_M       <= wb_result_sel_X;
 009002       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
        // Continuous assignment to wire or output
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // stall M
        
        // Continuous assignment to wire or output
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
        
        // Continuous assignment to wire or output
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // Valid signal for the next stage
        
 005837   logic  next_val_M;
        // Continuous assignment to wire or output
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
        // Internal registers to hold state
          assign reg_en_W = !stall_W;
        
 000002   logic [31:0] inst_W;
 000522   logic        proc2mngr_val_W;
 002352   logic        rf_wen_pending_W;
%000000   logic        stats_en_wen_pending_W;
        
        // Internal registers to hold state
          // Pipeline registers
        
        // Always block for combinational or sequential logic
 010469   always_ff @( posedge clk ) begin
        // Conditional logic based on inputs or internal state
 000533     if ( reset ) begin
 000533       val_W                  <= 1'b0;
        // End of always block
            end
        // Internal registers to hold state
%000000     else if ( reg_en_W ) begin
 009936       val_W                  <= next_val_M;
 009936       rf_wen_pending_W       <= rf_wen_M;
 009936       inst_W                 <= inst_M;
 009936       rf_waddr_W             <= rf_waddr_M;
 009936       proc2mngr_val_W        <= proc2mngr_val_M;
 009936       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
          // write enable
        
        // Continuous assignment to wire or output
          assign rf_wen_W       = val_W && rf_wen_pending_W;
        // Continuous assignment to wire or output
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
          // ostall due to proc2mngr
        
        // Continuous assignment to wire or output
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall and squash signal used in W stage
        
        // Continuous assignment to wire or output
          assign stall_W = val_W && ostall_W;
        
          // proc2mngr port
        
        // Continuous assignment to wire or output
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
        // Continuous assignment to wire or output
          assign commit_inst = val_W && !stall_W;
        
        // Main module for handling control logic or datapath
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_CTRL_V */
        
