//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "ProcBaseCtrl.v"
        `include "vc/trace.v"
        
        
%000000 module top(input logic clk, input logic linetrace);  
        
 000001   logic        reset;
        
          // Instruction Memory Port
 000019   logic        imem_reqstream_val;                         // Request Message to Instruction Memory Valid Signal
 000001   logic        imem_reqstream_rdy;                         // Instruction Memory Ready Signal
 000003   logic        imem_respstream_val;                        // Instruction Memory Response Message Valid Signal
 000018   logic        imem_respstream_rdy;                        // Processor Ready to Receive Instruction Signal
 000016   logic        imem_respstream_drop;                       // Drop Instruction Signal
        
          // Data Memory Port
 000006   logic        dmem_reqstream_val;                         // Request Message to Data Memory Valid Signal         
 000003   logic        dmem_reqstream_rdy;                         // Data Memory Ready Signal
 000007   logic        dmem_respstream_val;                        // Data Memory Response Message Valid Signal
 000006   logic        dmem_respstream_rdy;                        // Processor Ready to Receive Data Signal
 000002   logic        dmem_reqstream_msg_type;                    // Data Operation Type of Request Message
        
          // mngr communication port
 000005   logic        mngr2proc_val;                              // Mngr2Proc Message Valid Signal
 000002   logic        mngr2proc_rdy;                              // Processor Ready to Receive Mngr Message Signal
 000004   logic        proc2mngr_val;                              // Proc2mngr Message Valid Signal
 000005   logic        proc2mngr_rdy;                              // Mngr Ready to Receive Proc Message Signal 
        
          // multiplier communication port
 000002   logic        IntMulAlt_reqstream_val;                    // Request Message to Multiplier Valid Signal
 000003   logic        IntMulAlt_reqstream_rdy;                    // Multiplier Ready Signal
 000007   logic        IntMulAlt_respstream_val;                   // Multiplier Response Message Valid Signal
 000008   logic        IntMulAlt_respstream_rdy;                   // Processor Ready to Receive Multiplier Message Signal
        
          // control signals (ctrl->dpath)
 000018   logic        reg_en_F;                                   // Register Enable of F Stage
 000004   logic [1:0]  pc_sel_F;                                   // PC redirection Select Mux Signal
 000018   logic        reg_en_D;                                   // Register Enable of D Stage
 000002   logic        op1_sel_D;                                  // Operand 1 Select Mux Signal
 000005   logic [1:0]  op2_sel_D;                                  // Operand 2 Select Mux Signal
 000001   logic [1:0]  csrr_sel_D;                                 // CSRR Select Signal
 000004   logic [2:0]  imm_type_D;                                 // Immediate Type
 000008   logic        reg_en_X;                                   // Register Enable of X Stage
 000013   logic [3:0]  alu_fn_X;                                   // Alu Function Signal
 000004   logic [1:0]  ex_result_sel_X;                            // Execuation Result Select Mux Signal 
 000004   logic        reg_en_M;                                   // Register Enable of M Stage
 000004   logic        wb_result_sel_M;                            // Register File Write Result Select
 000002   logic        reg_en_W;                                   // Register Enable of W Stage
 000002   logic [4:0]  rf_waddr_W;                                 // Register File Write Address
 000017   logic        rf_wen_W;                                   // Register File Write Enable
 000002   logic        stats_en_wen_W;                             // Execuation Result Select Mux Signal
        
          // status signals (dpath->ctrl)
 000002   logic [31:0] inst_D;                                     // Instruction to Decode
 000005   logic        br_cond_eq_X;                               // Branch conition equal signal
 000004   logic        br_cond_lt_X;                               // Branch conition less than signal
 000004   logic        br_cond_ltu_X;                              // Branch conition less than unsigned int signal
        
          // extra ports
 000031   logic        commit_inst;
        
        // Create an instance of the module under test
          lab2_proc_ProcBaseCtrl  DUT
          ( .*
          ); 
        
        
 000001   initial begin
 000001     $display("Start of Testbench");
            // Initalize all the signal inital values.
 000001     imem_reqstream_rdy = 0;                                       
 000001     imem_respstream_val = 0;                                      
 000001     dmem_reqstream_rdy = 0;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 0;                                             
 000001     IntMulAlt_reqstream_rdy = 0;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;   
 000001     reset = 1;
        
 000001     #20
            // Test Case 1: Simulate Invalid Instruction
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 1;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 1;   
 000001     inst_D = 32'hFFFFFFFF;                                                                   
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;                             
 000001     reset = 0;
        
        
 000001     #20
            // Test Case 2: Simulate nop
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;   
 000001     inst_D = 32'h00000013;                                                                               
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
                                 
        
 000001     #20
            // Test Case 3: Simulate csrr
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 1;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'hFC002173;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0; 
 000001     #2
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'hc) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hc, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hc, alu_fn_X); fail(); $finish();
            end 
                                    
        
 000001     #20
            // Test Case 4: Simulate csrw
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h7C011073;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'hb) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hb, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hb, alu_fn_X); fail(); $finish();
            end 
                                     
        
 000001     #20
            // Test Case 5: Simulate add
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h002081B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h0) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h0, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h0, alu_fn_X); fail(); $finish();
            end 
                                     
        
 000001     #20
            // Test Case 6: Simulate sub
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h402081B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h1) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h1, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h1, alu_fn_X); fail(); $finish();
            end 
           
        
 000001     #20
            // Test Case 7: Simulate mul
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h022081B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'hx) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'hx, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'hx, alu_fn_X); fail();$finish();
            end
 000001     #2  
 000001     @(negedge clk); 
 000001     IntMulAlt_respstream_val = 1;                                 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 8: Simulate and
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020F1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h2) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h2, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h2, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 9: Simulate or
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020E1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h3) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h3, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h3, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 10: Simulate xor
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020C1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h4) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h4, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h4, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 11: Simulate slt
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020A1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h5) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h5, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h5, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 12: Simulate sltu
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020B1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h6) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h6, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h6, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 13: Simulate sra
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h4020D1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h7) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h7, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h7, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 14: Simulate srl
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020D1B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h8) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h8, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h8, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 15: Simulate sll
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h002091B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2  
 000001     @(negedge clk); 
 000001     assert(alu_fn_X == 4'h9) begin
 000001       $display("alu_fn_X is correct.  Expected: %h, Actual: %h", 4'h9, alu_fn_X); pass();
 000001     end else begin
 000001       $display("alu_fn_X is incorrect.  Expected: %h, Actual: %h", 4'h9, alu_fn_X); fail();$finish();
            end 
        
 000001     #20
            // Test Case 16: Simulate addi
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00308193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h0) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h0, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h0, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 17: Simulate ori
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00F0E193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h3) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h3, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h3, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 18: Simulate andi
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'hFF00F193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h2) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h2, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h2, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 19: Simulate xori
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0500C193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h4) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h4, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h4, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 20: Simulate slti
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0090A193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h5) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h5, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h5, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 21: Simulate sltiu
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0080B193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h0 && alu_fn_X == 4'h6) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h6, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h0, 4'h6, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 22: Simulate srai
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h4020D193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h5 && alu_fn_X == 4'h7) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h7, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h7, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 23: Simulate srli
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020D193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h5 && alu_fn_X == 4'h8) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h8, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h8, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 24: Simulate slli
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00209193;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h5 && alu_fn_X == 4'h9) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h9, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h5, 4'h9, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 25: Simulate lui
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h001011B7;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h3 && alu_fn_X == 4'hc) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h3, 4'hc, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h3, 4'hc, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 26: Simulate auipc
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00020197;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(imm_type_D == 3'h3 && alu_fn_X == 4'h0) begin
 000001       $display("imm_type_D and alu_fn_X is correct. Expected: %h, %h, Actual: %h, %h", 3'h3, 4'h0, imm_type_D, alu_fn_X); pass();
 000001     end else begin
 000001       $display("imm_type_D or alu_fn_X is incorrect.Expected: %h, %h, Actual: %h, %h", 3'h3, 4'h0, imm_type_D, alu_fn_X); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 27: Simulate lw
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00012183;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(dmem_reqstream_msg_type == 1'h0) begin
 000001       $display("dmem_reqstream_msg_type is correct. Expected: %h, Actual: %h", 1'h0, dmem_reqstream_msg_type); pass();
 000001     end else begin
 000001       $display("dmem_reqstream_msg_type is incorrect. Expected: %h, Actual: %h", 1'h0, dmem_reqstream_msg_type); fail(); $finish();
            end 
        
 000001     #20
            // Test Case 28: Simulate sw
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00312023;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(negedge clk); 
 000001     assert(dmem_reqstream_msg_type == 1'h1) begin
 000001       $display("dmem_reqstream_msg_type is correct. Expected: %h, Actual: %h", 1'h1, dmem_reqstream_msg_type); pass();
 000001     end else begin
 000001       $display("dmem_reqstream_msg_type is incorrect. Expected: %h, Actual: %h", 1'h1, dmem_reqstream_msg_type); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     dmem_respstream_val = 1;                                      
 000001     inst_D = 32'h00000013;
        
        
 000001     #20
            // Test Case 29: Simulate jal
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h014001EF;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h2) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h2, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h2, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 30: Simulate jalr
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h088081E7;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h3) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h3, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h3, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 31: Simulate beq
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00208A63;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 32: Simulate bge
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020DA63;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 33: Simulate bgeu
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020FA63;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 34: Simulate blt
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h0020CA63;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 1;                                               
 000001     br_cond_ltu_X = 1;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 35: Simulate bltu
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00116A63;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 1;                                               
 000001     br_cond_ltu_X = 1;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 36: Simulate bne
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00209A63;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 1;                                               
 000001     br_cond_ltu_X = 1;
 000001     #2
 000001     @(posedge clk); 
 000001     assert(pc_sel_F == 2'h1) begin
 000001       $display("pc_sel_F is correct. Expected: %h, Actual: %h", 2'h1, pc_sel_F); pass();
 000001     end else begin
 000001       $display("pc_sel_F is incorrect. Expected: %h, Actual: %h", 2'h1, pc_sel_F); fail(); $finish();
            end 
 000001     #2  
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013;
        
 000001     #20
            // Test Case 37: Simulate Data Hazard:write address in X matches rs1 in D
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h000100B7;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;  
 000001     #2
 000001     @(negedge clk); 
 000001     imem_respstream_val = 0;                                      
 000001     inst_D = 32'h02008113;                                                 
 000001     br_cond_eq_X = 0;                                               
 000001     br_cond_lt_X = 1;                                               
 000001     br_cond_ltu_X = 1;
 000001     @(negedge clk); 
 000001     assert(reg_en_D == 1'b0) begin
 000001       $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
 000001     end else begin
 000001       $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail(); $finish();
            end 
 000001     #2
 000001     @(negedge clk); 
 000001     inst_D = 32'h0;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;                             
        
        
 000001     #20
            // Test Case 38: Simulate Data Memory is noy ready
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 0;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h00012183;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;  
 000001     #2
 000001     #2
 000001     inst_D = 32'h00000013; 
 000001     @(negedge clk); 
 000001     assert(reg_en_X == 1'b0) begin
 000001       $display("reg_en_X is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_X); pass();
 000001     end else begin
 000001       $display("reg_en_X is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_X); fail(); $finish();
            end 
 000001     #2
 000001     @(negedge clk); 
 000001     dmem_reqstream_rdy = 1; 
 000001     #2
 000001     @(negedge clk); 
 000001     dmem_respstream_val = 1;                                      
        
        
        
        
 000001     #20
            // Test Case 39: Simulate Multiplier is noy ready
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 0;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 0;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h022081B3;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;  
 000001     #2
 000001     inst_D = 32'h00000013; 
 000001     @(negedge clk); 
 000001     assert(reg_en_D == 1'b0) begin
 000001       $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
 000001     end else begin
 000001       $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail(); $finish();
            end 
 000001     #2
 000001     @(negedge clk); 
 000001     IntMulAlt_respstream_val = 1;                                 
        
 000001     #20
            // Test Case 40: Simulate proc2mngr is noy ready
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 0;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'h7C019073;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;  
 000001     #2
 000001     inst_D = 32'h00000013; 
 000001     #2
 000001     @(negedge clk); 
 000001     assert(reg_en_W == 1'b0) begin
 000001       $display("reg_en_W is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_W); pass();
 000001     end else begin
 000001       $display("reg_en_W is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_W); fail(); $finish();
            end 
 000001     #2
 000001     @(negedge clk); 
 000001     proc2mngr_rdy = 1;       
        
            // Test Case 41: Simulate proc wait for mngr message
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 0;                                             
 000001     proc2mngr_rdy = 0;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 0;                                 
 000001     inst_D = 32'hFC002173;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;  
 000001     #2
 000001     @(negedge clk); 
 000001     assert(reg_en_D == 1'b0) begin
 000001       $display("reg_en_D is correct.  Expected: %b, Actual: %b", 1'b0, reg_en_D); pass();
 000001     end else begin
 000001       $display("reg_en_D is incorrect.  Expected: %b, Actual: %b", 1'b0, reg_en_D); fail(); $finish();
            end 
 000001     #2
 000001     @(negedge clk); 
 000001     inst_D = 32'h00000013; 
 000001     mngr2proc_val = 1;                                             
                                              
        
        
        
        
 000001     #20
            // Test Case 42: Simulate States_EN
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 1;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 1;   
 000001     inst_D = 32'h7C111073;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;                             
 000001     reset = 0;
        
 000001     #20
            // Test Case 43: Simulate NUM_CORES
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 1;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 1;   
 000001     inst_D = 32'hFC102173;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;                             
 000001     reset = 0;
        
 000001     #20
            // Test Case 43: Simulate CORE_ID
 000001     @(negedge clk); 
 000001     imem_reqstream_rdy = 1;                                       
 000001     imem_respstream_val = 1;                                      
 000001     dmem_reqstream_rdy = 1;                                       
 000001     dmem_respstream_val = 1;                                      
 000001     mngr2proc_val = 1;                                             
 000001     proc2mngr_rdy = 1;                                             
 000001     IntMulAlt_reqstream_rdy = 1;                                   
 000001     IntMulAlt_respstream_val = 1;   
 000001     inst_D = 32'hF1402173;                                                 
 000001     br_cond_eq_X = 1;                                               
 000001     br_cond_lt_X = 0;                                               
 000001     br_cond_ltu_X = 0;                             
 000001     reset = 0;
        
        
        
        
 000001     #20
        
 000001     $finish();
        
          end
        
        
        
        endmodule
        
        
        
        
