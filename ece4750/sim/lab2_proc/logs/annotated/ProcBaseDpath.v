//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_BASE_DPATH_V
        `define LAB2_PROC_PROC_BASE_DPATH_V
        
        `include "vc/arithmetic.v"
        `include "vc/mem-msgs.v"
        `include "vc/muxes.v"
        `include "vc/regs.v"
        `include "vc/regfiles.v"
        `include "tinyrv2_encoding.v"
        `include "ProcDpathImmGen.v"
        `include "ProcDpathAlu.v"
        
        
        module lab2_proc_ProcBaseDpath
        #(
          parameter p_num_cores = 1
        )
        (
 000125   input  logic         clk,
 000001   input  logic         reset,
        
        // Instruction Memory Port
%000000   output logic [31:0]  imem_reqstream_msg_addr,               // Address of Instruction
%000000   input  mem_resp_4B_t imem_respstream_msg,                   // Next Instruction Fetched
        
        // Data Memory Port
 000001   output logic [31:0]  dmem_reqstream_msg_addr,               // Address of data
 000001   output logic [31:0]  dmem_reqstream_msg_data,               // Data sent to memory
 000001   input  logic [31:0]  dmem_respstream_msg_data,              // Data received from memory
        
        // mngr communication ports
 000001   input  logic [31:0]  mngr2proc_data,                        // Message received from mngr
 000001   output logic [31:0]  proc2mngr_data,                        // Message sent to mngr
        
        // Multiplier Port
 000001   output logic [63:0]  IntMulAlt_reqstream_msg,               // Data sent to multiplier
 000001   input  logic [31:0]  IntMulAlt_respstream_msg,              // Data received from multiplier
        
        
        // control signals (ctrl->dpath)
 000001   input  logic         imem_respstream_drop,                  // Drop Unit message
 000002   input  logic         reg_en_F,                              // Register Enable of F Stage
 000001   input  logic [1:0]   pc_sel_F,                              // PC redirection Select Mux Signal
 000002   input  logic         reg_en_D,                              // Register Enable of D Stage
 000001   input  logic         op1_sel_D,                             // Operand 1 Select Mux Signal
 000002   input  logic [1:0]   op2_sel_D,                             // Operand 2 Select Mux Signal
%000000   input  logic [1:0]   csrr_sel_D,                            // CSRR Select Signal
 000002   input  logic [2:0]   imm_type_D,                            // Immediate Type
 000002   input  logic         reg_en_X,                              // Register Enable of X Stage
 000001   input  logic [3:0]   alu_fn_X,                              // Alu Function Signal
 000002   input  logic [1:0]   ex_result_sel_X,                       // Execuation Result Select Mux Signal 
 000002   input  logic         reg_en_M,                              // Register Enable of M Stage
 000002   input  logic         wb_result_sel_M,                       // Register File Write Result Select
%000000   input  logic         reg_en_W,                              // Register Enable of W Stage
 000001   input  logic [4:0]   rf_waddr_W,                            // Register File Write Address
 000001   input  logic         rf_wen_W,                              // Register File Write Enable
%000000   input  logic         stats_en_wen_W,                        // Execuation Result Select Mux Signal
        
        // status signals (dpath->ctrl)
 000001   output logic [31:0]  inst_D,                                // Instruction to Decode
 000002   output logic         br_cond_eq_X,                          // Branch conition equal signal
 000002   output logic         br_cond_lt_X,                          // Branch conition less than signal
 000002   output logic         br_cond_ltu_X,                         // Branch conition less than unsigned int signal
        
        // extra ports
%000000   input  logic [31:0]  core_id,
%000000   output logic         stats_en
        );
        
          localparam c_reset_vector = 32'h200;                        // Reset Vector
          localparam c_reset_inst   = 32'h00000000;                   // Reset Instruction
        
          // Fetch address
          assign imem_reqstream_msg_addr = pc_next_F;
        
        //--------------------------------------------------------------------
        // F stage
        //--------------------------------------------------------------------
        
 000004   logic [31:0] pc_F;                                          // Current Fetched Instruction PC
%000000   logic [31:0] pc_next_F;                                     // Next to Fetch Instruction PC
%000000   logic [31:0] pc_plus4_F;                                    // PC Plus 4
 000003   logic [31:0] br_target_X;                                   // Branch Target Address
 000003   logic [31:0] jal_target_D;                                  // JUMP Target Address
 000001   logic [31:0] jalr_target_X;                                 // JUMP Target Address
        
        // Internal Register to store current PC
          vc_EnResetReg#(32, c_reset_vector - 32'd4) pc_reg_F
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_F),
            .d      (pc_next_F),
            .q      (pc_F)
          );
        
        // Internal Module to increment PC
          vc_Incrementer#(32, 4) pc_incr_F
          (
            .in   (pc_F),
            .out  (pc_plus4_F)
          );
        
        // PC redirection Select Mux
          vc_Mux4#(32) pc_sel_mux_F
          (
            .in0  (pc_plus4_F),
            .in1  (br_target_X),
            .in2  (jal_target_D),
            .in3  (jalr_target_X),
            .sel  (pc_sel_F),
            .out  (pc_next_F)
          );
        
        //--------------------------------------------------------------------
        // D stage
        //--------------------------------------------------------------------
        
 000005   logic [31:0] pc_D;                                          // Current Decoding Instruction PC
 000001   logic [ 4:0] inst_rd_D;                                     // Destination Register Address
 000001   logic [ 4:0] inst_rs1_D;                                    // Read Register 1 Address
 000001   logic [ 4:0] inst_rs2_D;                                    // Read Register 2 Address
 000001   logic [31:0] imm_D;                                         // Immediate Value
        
        // Registers to Store Current Decoding Instruction PC
          vc_EnResetReg#(32) pc_reg_D
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_D),
            .d      (pc_F),
            .q      (pc_D)
          );
        
        
        // Registers to Store Current Decoding Instruction
          vc_EnResetReg#(32, c_reset_inst) inst_D_reg
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_D),
            .d      (imem_respstream_msg.data),
            .q      (inst_D)
          );
        
        // Instruction unpack module
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .opcode   (),
            .inst     (inst_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .rd       (inst_rd_D),
            .funct3   (),
            .funct7   (),
            .csr      ()
          );
        
        // Immediate Generation module
          lab2_proc_ProcDpathImmGen imm_gen_D
          (
            .imm_type (imm_type_D),
            .inst     (inst_D),
            .imm      (imm_D)
          );
        
 000001   logic [31:0] rf_rdata0_D;                                       // Read Register 1 Data
 000001   logic [31:0] rf_rdata1_D;                                       // Read Register 2 Data
 000001   logic [31:0] rf_wdata_W;                                        // Data to Write to Register 
        
        // Register File Read/Write module
          vc_Regfile_2r1w_zero rf
          (
            .clk      (clk),
            .reset    (reset),
            .rd_addr0 (inst_rs1_D),
            .rd_data0 (rf_rdata0_D),
            .rd_addr1 (inst_rs2_D),
            .rd_data1 (rf_rdata1_D),
            .wr_en    (rf_wen_W),
            .wr_addr  (rf_waddr_W),
            .wr_data  (rf_wdata_W)
          );
        
        
 000001   logic [31:0] op1_D;                                           // ALU Operand 1
 000001   logic [31:0] op2_D;                                           // ALU Operand 2
 000001   logic [31:0] csrr_data_D;                                     // CSRR Data
%000000   logic [31:0] num_cores;                                       // number of cores
        
          assign num_cores = p_num_cores;
        
          // CSRR Data Select Mux
          vc_Mux3#(32) csrr_sel_mux_D
          (
           .in0  (mngr2proc_data),
           .in1  (num_cores),
           .in2  (core_id),
           .sel  (csrr_sel_D),
           .out  (csrr_data_D)
          );
        
          // Operand 1 Select Mux
          vc_Mux2#(32) op1_sel_mux_D
          (
            .in0  (rf_rdata0_D),
            .in1  (pc_D),
            .sel  (op1_sel_D),
            .out  (op1_D)
          );
        
          // Operand 2 Select Mux
          vc_Mux3#(32) op2_sel_mux_D
          (
            .in0  (rf_rdata1_D),
            .in1  (imm_D),
            .in2  (csrr_data_D),
            .sel  (op2_sel_D),
            .out  (op2_D)
          );
        
          // Generate Multiplier Request Message
          assign IntMulAlt_reqstream_msg = {op1_D, op2_D};
        
          // Module for Calculating Jal Target Address
          vc_Adder#(32) pc_plus_imm_D
          (
            .in0  (pc_D),
            .in1  (imm_D),
            .cin  (1'b0),
            .out  (jal_target_D),
            .cout ()
          );
        
        //--------------------------------------------------------------------
        // X stage
        //--------------------------------------------------------------------
        
 000001   logic [31:0] op1_X;                                           // Execuation Operand 1
 000001   logic [31:0] op2_X;                                           // Execuation Operand 2
 000005   logic [31:0] pc_X;                                            // PC of Instruction in X stage
 000002   logic [31:0] pc_plus4_X;                                      // PC plus 4
        
        
        
        // Register to Store Operand 1
          vc_EnResetReg#(32, 0) op1_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (op1_D),
            .q     (op1_X)
          );
        
        // Register to Store Operand 2
          vc_EnResetReg#(32, 0) op2_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (op2_D),
            .q     (op2_X)
          );
        
        // Register to Branch Target Address
          vc_EnResetReg#(32, 0) br_target_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (jal_target_D),
            .q     (br_target_X)
          );
        
        // Registers to Store Current Execuating Instruction PC
          vc_EnResetReg#(32, 0) pc_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (pc_D),
            .q     (pc_X)
          );
        
        // Module to Increment Current Execuating Instruction PC by 4
          vc_Incrementer#(32, 4) pc_incr_X
          (
            .in   (pc_X),
            .out  (pc_plus4_X)
          );
        
 000001   logic [31:0] rf_rdata1_X;                                   // Read Register 2 Data to Write to Memory
        
        // Registers to Store Read Register 2 Data for Later Memory Writing
          vc_EnResetReg#(32, 0) dmem_write_data_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (rf_rdata1_D),
            .q     (rf_rdata1_X)
          );
        
        // Write Register 2 Data to Data Memory Request Message Data Part
          assign dmem_reqstream_msg_data = rf_rdata1_X;
        
        
 000001   logic [31:0] alu_result_X;                                // Alu Execuation Result 
 000001   logic [31:0] ex_result_X;                                 // Actual Execuation Result of X stage
        
        // Connect Alu module
          lab2_proc_ProcDpathAlu alu
          (
            .in0      (op1_X),
            .in1      (op2_X),
            .fn       (alu_fn_X),
            .out      (alu_result_X),
            .ops_eq   (br_cond_eq_X),
            .ops_lt   (br_cond_lt_X),
            .ops_ltu  (br_cond_ltu_X)
          );
        
        // Write Alu Execuation Result to Data Memory Request Message Address Part
          assign dmem_reqstream_msg_addr = alu_result_X; 
        
        // Assign Alu Execuation Result to Jalr Target Address
          assign jalr_target_X = alu_result_X;
        
        // Actual Execuation Result Select Mux
          vc_Mux3#(32) ex_result_sel_mux_X
          (
            .in0  (alu_result_X),
            .in1  (IntMulAlt_respstream_msg),
            .in2  (pc_plus4_X),
            .sel  (ex_result_sel_X),
            .out  (ex_result_X)
          );
        
        
        
        //--------------------------------------------------------------------
        // M stage
        //--------------------------------------------------------------------
        
 000001   logic [31:0] ex_result_M;                                 // Actual Execuation Result recevied in M stage
        
        // Rregisters to Store Actual Execuation Result
          vc_EnResetReg#(32, 0) ex_result_reg_M
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_M),
            .d      (ex_result_X),   
            .q      (ex_result_M)
          );
        
 000001   logic [31:0] dmem_result_M;                              // Data get from Data Memory Response
 000003   logic [31:0] wb_result_M;                                // Writing Result Select Mux Signal
        
        // Assign the Data Part of Data Memory Response Message to Data Memory Result
          assign dmem_result_M = dmem_respstream_msg_data;
        
        // Writing Result Select Mux
          vc_Mux2#(32) wb_result_sel_mux_M
          (
            .in0    (ex_result_M),
            .in1    (dmem_result_M),
            .sel    (wb_result_sel_M),
            .out    (wb_result_M)
          );
        
        //--------------------------------------------------------------------
        // W stage
        //--------------------------------------------------------------------
        
 000001   logic [31:0] wb_result_W;                                // Selected Writing Result recevied in W stage
        
        // Register to Store Selected Writing Result
          vc_EnResetReg#(32, 0) wb_result_reg_W
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_W),
            .d      (wb_result_M),
            .q      (wb_result_W)
          );
        
        // Assign Selected Writing Result to Mngr Communication Portion
          assign proc2mngr_data = wb_result_W;
        
        // Assign Selected Writing Result to Register Writing Data
          assign rf_wdata_W = wb_result_W;
        
        
        
%000000   logic [31:0] stats_en_W;                                // State Register Enable Signal
        
        // Assign State Register Enable Signal
          assign stats_en = | stats_en_W;
        
        // Register to Store States
          vc_EnResetReg#(32, 0) stats_en_reg_W
          (
           .clk    (clk),
           .reset  (reset),
           .en     (stats_en_wen_W),
           .d      (wb_result_W),
           .q      (stats_en_W)
          );
        
        endmodule
        
        `endif 
        
        
