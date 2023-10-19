`default_nettype none
`timescale 1ps/1ps


`include "ProcAltCtrl.v"
`include "vc/trace.v"


module top(input logic clk, input logic linetrace);  

  logic        reset;

  // Instruction Memory Port
  logic        imem_reqstream_val;                         // Request Message to Instruction Memory Valid Signal
  logic        imem_reqstream_rdy;                         // Instruction Memory Ready Signal
  logic        imem_respstream_val;                        // Instruction Memory Response Message Valid Signal
  logic        imem_respstream_rdy;                        // Processor Ready to Receive Instruction Signal
  logic        imem_respstream_drop;                       // Drop Instruction Signal

  // Data Memory Port
  logic        dmem_reqstream_val;                         // Request Message to Data Memory Valid Signal         
  logic        dmem_reqstream_rdy;                         // Data Memory Ready Signal
  logic        dmem_respstream_val;                        // Data Memory Response Message Valid Signal
  logic        dmem_respstream_rdy;                        // Processor Ready to Receive Data Signal
  logic        dmem_reqstream_msg_type;                    // Data Operation Type of Request Message

  // mngr communication port
  logic        mngr2proc_val;                              // Mngr2Proc Message Valid Signal
  logic        mngr2proc_rdy;                              // Processor Ready to Receive Mngr Message Signal
  logic        proc2mngr_val;                              // Proc2mngr Message Valid Signal
  logic        proc2mngr_rdy;                              // Mngr Ready to Receive Proc Message Signal 

  // multiplier communication port
  logic        IntMulAlt_reqstream_val;                    // Request Message to Multiplier Valid Signal
  logic        IntMulAlt_reqstream_rdy;                    // Multiplier Ready Signal
  logic        IntMulAlt_respstream_val;                   // Multiplier Response Message Valid Signal
  logic        IntMulAlt_respstream_rdy;                   // Processor Ready to Receive Multiplier Message Signal

  // control signals (ctrl->dpath)
  logic        reg_en_F;                                   // Register Enable of F Stage
  logic [1:0]  pc_sel_F;                                   // PC redirection Select Mux Signal
  logic        reg_en_D;                                   // Register Enable of D Stage
  logic [1:0]  op1_byp_sel_D;                              // Operand 1 Bypass Mux Signal
  logic [1:0]  op2_byp_sel_D;                              // Operand 2 Bypass Mux Signal
  logic        op1_sel_D;                                  // Operand 1 Select Mux Signal
  logic [1:0]  op2_sel_D;                                  // Operand 2 Select Mux Signal
  logic [1:0]  csrr_sel_D;                                 // CSRR Select Signal
  logic [2:0]  imm_type_D;                                 // Immediate Type
  logic        reg_en_X;                                   // Register Enable of X Stage
  logic [3:0]  alu_fn_X;                                   // Alu Function Signal
  logic [1:0]  ex_result_sel_X;                            // Execuation Result Select Mux Signal 
  logic        reg_en_M;                                   // Register Enable of M Stage
  logic        wb_result_sel_M;                            // Register File Write Result Select
  logic        reg_en_W;                                   // Register Enable of W Stage
  logic [4:0]  rf_waddr_W;                                 // Register File Write Address
  logic        rf_wen_W;                                   // Register File Write Enable
  logic        stats_en_wen_W;                             // Execuation Result Select Mux Signal

  // status signals (dpath->ctrl)
  logic [31:0] inst_D;                                     // Instruction to Decode
  logic        br_cond_eq_X;                               // Branch conition equal signal
  logic        br_cond_lt_X;                               // Branch conition less than signal
  logic        br_cond_ltu_X;                              // Branch conition less than unsigned int signal

  // extra ports
  logic        commit_inst;

// Create an instance of the module under test
  lab2_proc_ProcAltCtrl  DUT
  ( .*
  ); 


  initial begin
    $display("Start of Testbench");
    // Initalize all the signal inital values.
    imem_reqstream_rdy = 0;                                       
    imem_respstream_val = 0;                                      
    dmem_reqstream_rdy = 0;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 0;                                             
    IntMulAlt_reqstream_rdy = 0;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;   
    reset = 1;

    #20
    // Test Case 1: Simulate Invalid Instruction
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 1;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 1;   
    inst_D = 32'hFFFFFFFF;                                                                   
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;                             
    reset = 0;


    #20
    // Test Case 2: Simulate nop
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;   
    inst_D = 32'h00000013;                                                                               
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
                         

    #20
    // Test Case 3: Simulate csrr
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 1;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'hFC002173;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0; 
    #2
    @(negedge clk); 
    assert(alu_fn_X == 4'hc) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hc, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hc, alu_fn_X); fail(); $finish();
    end 
                            

    #20
    // Test Case 4: Simulate csrw
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h7C011073;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(alu_fn_X == 4'hb) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hb, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hb, alu_fn_X); fail(); $finish();
    end 
                             

    #20
    // Test Case 5: Simulate add
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h002081B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(alu_fn_X == 4'h0) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h0, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h0, alu_fn_X); fail(); $finish();
    end 
                             

    #20
    // Test Case 6: Simulate sub
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h402081B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h1) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h1, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h1, alu_fn_X); fail(); $finish();
    end 
   

    #20
    // Test Case 7: Simulate mul
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h022081B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'hx) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hx, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hx, alu_fn_X); fail();$finish();
    end
    #2  
    @(negedge clk); 
    IntMulAlt_respstream_val = 1;                                 
    inst_D = 32'h00000013;

    #20
    // Test Case 8: Simulate and
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020F1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h2) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h2, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h2, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 9: Simulate or
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020E1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h3) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h3, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h3, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 10: Simulate xor
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020C1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h4) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h4, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h4, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 11: Simulate slt
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020A1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h5) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h5, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h5, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 12: Simulate sltu
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020B1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h6) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h6, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h6, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 13: Simulate sra
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h4020D1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h7) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h7, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h7, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 14: Simulate srl
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020D1B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h8) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h8, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h8, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 15: Simulate sll
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h002091B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2  
    @(negedge clk); 
    assert(alu_fn_X == 4'h9) begin
      $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h9, alu_fn_X); pass();
    end else begin
      $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h9, alu_fn_X); fail();$finish();
    end 

    #20
    // Test Case 16: Simulate addi
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00308193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h0) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h0, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h0, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 17: Simulate ori
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00F0E193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h3) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h3, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h3, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 18: Simulate andi
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'hFF00F193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h2) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h2, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h2, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 19: Simulate xori
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0500C193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h4) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h4, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h4, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 20: Simulate slti
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0090A193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h5) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h5, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h5, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 21: Simulate sltiu
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0080B193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h0 && alu_fn_X == 4'h6) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h6, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h6, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 22: Simulate srai
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h4020D193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h5 && alu_fn_X == 4'h7) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h7, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h7, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 23: Simulate srli
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020D193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h5 && alu_fn_X == 4'h8) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h8, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h8, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 24: Simulate slli
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00209193;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h5 && alu_fn_X == 4'h9) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h9, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h9, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 25: Simulate lui
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h001011B7;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h3 && alu_fn_X == 4'hc) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h3, 4'hc, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h3, 4'hc, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 26: Simulate auipc
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00020197;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(imm_type_D == 3'h3 && alu_fn_X == 4'h0) begin
      $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h3, 4'h0, imm_type_D, alu_fn_X); pass();
    end else begin
      $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h3, 4'h0, imm_type_D, alu_fn_X); fail(); $finish();
    end 

    #20
    // Test Case 27: Simulate lw
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00012183;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(dmem_reqstream_msg_type == 1'h0) begin
      $display("dmem_reqstream_msg_type is correct. Expected: %h, Actual: %h", 1'h0, dmem_reqstream_msg_type); pass();
    end else begin
      $display("dmem_reqstream_msg_type is incorrect. Expected: %h, Actual: %h", 1'h0, dmem_reqstream_msg_type); fail(); $finish();
    end 

    #20
    // Test Case 28: Simulate sw
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00312023;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(negedge clk); 
    assert(dmem_reqstream_msg_type == 1'h1) begin
      $display("dmem_reqstream_msg_type is correct. Expected: %h, Actual: %h", 1'h1, dmem_reqstream_msg_type); pass();
    end else begin
      $display("dmem_reqstream_msg_type is incorrect. Expected: %h, Actual: %h", 1'h1, dmem_reqstream_msg_type); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    dmem_respstream_val = 1;                                      
    inst_D = 32'h00000013;


    #20
    // Test Case 29: Simulate jal
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h014001EF;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    @(posedge clk); 
    assert(pc_sel_F == 2'h2) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h2, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h2, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 30: Simulate jalr
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h088081E7;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h3) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h3, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h3, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 31: Simulate beq
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00208A63;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 32: Simulate bge
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020DA63;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 33: Simulate bgeu
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020FA63;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 34: Simulate blt
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0020CA63;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 1;                                               
    br_cond_ltu_X = 1;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 35: Simulate bltu
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00116A63;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 1;                                               
    br_cond_ltu_X = 1;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 36: Simulate bne
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00209A63;                                                 
    br_cond_eq_X = 0;                                               
    br_cond_lt_X = 1;                                               
    br_cond_ltu_X = 1;
    #2
    @(posedge clk); 
    assert(pc_sel_F == 2'h1) begin
      $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
    end else begin
      $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
    end 
    #2  
    @(negedge clk); 
    inst_D = 32'h00000013;

    #20
    // Test Case 37: Simulate Bypass Operand 1 from X: write address in X matches rs1 in D
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h000100B7;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    @(negedge clk); 
    imem_respstream_val = 0;                                      
    inst_D = 32'h02008113;                                                 
    @(posedge clk); 
    assert(op1_byp_sel_D == 2'h1) begin
      $display("op1_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'h1, op1_byp_sel_D); pass();
    end else begin
      $display("op1_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'h1, op1_byp_sel_D); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    inst_D = 32'h0;          

    #20
    // Test Case 37: Simulate Bypass Operand 2 from X: write address in X matches rs1 in D
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00020137;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    @(negedge clk); 
    imem_respstream_val = 0;                                      
    inst_D = 32'h00208133;                                                 
    @(posedge clk); 
    assert(op2_byp_sel_D == 2'h1) begin
      $display("op2_byp_sel_D is correct.  Expected: %h, Actual: %h", 2'h1, op2_byp_sel_D); pass();
    end else begin
      $display("op2_byp_sel_D is incorrect.  Expected: %h, Actual: %h", 2'h1, op2_byp_sel_D); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    inst_D = 32'h0;

    #20
    // Test Case 37: Simulate Data Hazard: load write address in X matches rs1 in D
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h0000A103;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    @(negedge clk); 
    imem_respstream_val = 0;                                      
    inst_D = 32'h02010113;                                                 
    @(posedge clk); 
    assert(reg_en_D == 1'b0) begin
      $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
    end else begin
      $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail();
    end 
    #2
    @(negedge clk); 
    inst_D = 32'h0;                                                 
                                                 
                                       
    #20
    // Test Case 38: Simulate Data Memory is noy ready
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 0;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h00012183;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    #2
    inst_D = 32'h00000013; 
    @(negedge clk); 
    assert(reg_en_X == 1'b0) begin
      $display("reg_en_X is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_X); pass();
    end else begin
      $display("reg_en_X is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_X); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    dmem_reqstream_rdy = 1; 
    #2
    @(negedge clk); 
    dmem_respstream_val = 1;                                      




    #20
    // Test Case 39: Simulate Multiplier is noy ready
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 0;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 0;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h022081B3;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    inst_D = 32'h00000013; 
    @(negedge clk); 
    assert(reg_en_D == 1'b0) begin
      $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
    end else begin
      $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    IntMulAlt_respstream_val = 1;                                 

    #20
    // Test Case 40: Simulate proc2mngr is noy ready
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 0;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'h7C019073;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    inst_D = 32'h00000013; 
    #2
    @(negedge clk); 
    assert(reg_en_W == 1'b0) begin
      $display("reg_en_W is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_W); pass();
    end else begin
      $display("reg_en_W is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_W); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    proc2mngr_rdy = 1;       

    // Test Case 41: Simulate proc wait for mngr message
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 0;                                             
    proc2mngr_rdy = 0;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 0;                                 
    inst_D = 32'hFC002173;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;  
    #2
    @(negedge clk); 
    assert(reg_en_D == 1'b0) begin
      $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
    end else begin
      $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail(); $finish();
    end 
    #2
    @(negedge clk); 
    inst_D = 32'h00000013; 
    mngr2proc_val = 1;                                             
                                      




    #20
    // Test Case 42: Simulate States_EN
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 1;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 1;   
    inst_D = 32'h7C111073;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;                             
    reset = 0;

    #20
    // Test Case 43: Simulate NUM_CORES
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 1;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 1;   
    inst_D = 32'hFC102173;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;                             
    reset = 0;

    #20
    // Test Case 43: Simulate CORE_ID
    @(negedge clk); 
    imem_reqstream_rdy = 1;                                       
    imem_respstream_val = 1;                                      
    dmem_reqstream_rdy = 1;                                       
    dmem_respstream_val = 1;                                      
    mngr2proc_val = 1;                                             
    proc2mngr_rdy = 1;                                             
    IntMulAlt_reqstream_rdy = 1;                                   
    IntMulAlt_respstream_val = 1;   
    inst_D = 32'hF1402173;                                                 
    br_cond_eq_X = 1;                                               
    br_cond_lt_X = 0;                                               
    br_cond_ltu_X = 0;                             
    reset = 0;




    #20

    $finish();

  end



endmodule



