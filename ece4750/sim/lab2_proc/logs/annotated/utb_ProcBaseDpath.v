//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "ProcBaseDpath.v"
        `include "vc/trace.v"
        
%000000 module top(  input logic clk, input logic linetrace );
        
         
 000001   logic         reset;
        
          // Instruction Memory Port
        
 000001   logic [31:0]  imem_reqstream_msg_addr;
 000001   mem_resp_4B_t imem_respstream_msg;
        
          // Data Memory Port
        
 000001   logic [31:0]  dmem_reqstream_msg_addr;
 000001   logic [31:0]  dmem_reqstream_msg_data;
 000001   logic [31:0]  dmem_respstream_msg_data;
        
          // mngr communication ports
        
 000001   logic [31:0]  mngr2proc_data;
 000001   logic [31:0]  proc2mngr_data;
        
          // Multiplier Memory Port
        
 000001   logic [63:0]  IntMulAlt_reqstream_msg;
 000001   logic [31:0]  IntMulAlt_respstream_msg;
        
          // control signals (ctrl->dpath)
 000001   logic         imem_respstream_drop;
 000002   logic         reg_en_F;
 000001   logic [1:0]   pc_sel_F;
 000002   logic         reg_en_D;
 000001   logic         op1_sel_D;
 000002   logic [1:0]   op2_sel_D;
 000002   logic [1:0]   csrr_sel_D;
 000002   logic [2:0]   imm_type_D;
 000002   logic         reg_en_X;
 000001   logic [3:0]   alu_fn_X;
 000002   logic [1:0]   ex_result_sel_X;
%000000   logic         imul_ostream_rdy_X;
 000002   logic         reg_en_M;
 000002   logic         wb_result_sel_M;
 000002   logic         reg_en_W;
 000001   logic [4:0]   rf_waddr_W;
 000001   logic         rf_wen_W;
 000001   logic         stats_en_wen_W;
        
          // status signals (dpath->ctrl)
 000001   logic [31:0]  inst_D;
 000002   logic         br_cond_eq_X;
 000002   logic         br_cond_lt_X;
 000002   logic         br_cond_ltu_X;
        
          // extra ports
 000001   logic [31:0]  core_id;
 000001   logic         stats_en;
        
        
          // Instantiate the processor datapath
          lab2_proc_ProcBaseDpath 
          #(
            .p_num_cores( 1)
          )
          DUT
          ( .*
          ); 
        
        
 000001   initial begin
        
 000001     $display("Start of Testbench");
            // Initalize all the signal inital values.
 000001     imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
 000001     imem_respstream_msg.opaque = 8'b0;
 000001     imem_respstream_msg.test = 2'b0;
 000001     imem_respstream_msg.len    = 2'd0;
 000001     imem_respstream_msg.data   = 'hDEADBEEF;
 000001     imem_respstream_drop = 0;
 000001     dmem_respstream_msg_data = '0;
        
 000001     mngr2proc_data= '0;
        
 000001     reg_en_F = 1;
 000001     pc_sel_F = '0;
        
 000001     reg_en_D = 1;
 000001     op1_sel_D = 0;
 000001     op2_sel_D = '0;
 000001     csrr_sel_D = '0;
 000001     imm_type_D = '0;
        
 000001     reg_en_X =1;
 000001     alu_fn_X =0;
 000001     ex_result_sel_X =0;
        
 000001     reg_en_M =1;
 000001     wb_result_sel_M =0;
        
 000001     reg_en_W =1;
 000001     rf_waddr_W ='0;
 000001     rf_wen_W = '0;
 000001     stats_en_wen_W =0;
        
 000001     core_id = '0;
 000001     reset = 1;
        
          
 000001     #20
            // Unit Testing #1  If PC is working correctly across the pipeline + a JAL
 000001     @(negedge clk); 
 000001     reset = 0;
 000001     @(negedge clk); 
 000001     $display( "Advancing time");
            // Checking F stage D/X stages are invalid
 000001     assert(DUT.pc_F == 'h200) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); fail(); $finish();
            end 
            //Advancing time
 000001     $display( "Advancing time");
 000001     @(negedge clk); 
            // Checking F/D stage X stage is invalid
 000001     assert(DUT.pc_F == 'h204) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_F);pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h200) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_D);pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_D); fail(); $finish();
            end 
            //Advancing time
 000001     $display( "Advancing time");
 000001     @(negedge clk); 
             // Checking F/D/X stage 
 000001     assert(DUT.pc_F == 'h208) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h204) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_D);  pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_D); fail(); $finish();
            end 
 000001     assert(DUT.pc_X == 'h200) begin
 000001       $display("pc_X is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_X);  pass();
 000001     end else begin
 000001       $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_X); fail(); $finish();
            end 
            // Setting Branch 
 000001     imm_type_D = 4; // J-type imm-type
 000001     pc_sel_F = 2; // J-type imm-type
            
            //Advancing time
 000001     $display( "Advancing time with J imm jump on D stage");
 000001     @(negedge clk); 
             // Checking F/D/X stage 
 000001     assert(DUT.pc_F == 'hfffdb7ee) begin
 000001       $display("pc_F is correct.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); pass();
 000001     end else begin
 000001       $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); fail(); $finish();
            end 
 000001     assert(DUT.pc_D == 'h208) begin
 000001       $display("pc_D is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_D);  pass();
 000001     end else begin
 000001       $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_D); fail(); $finish();
            end 
 000001     assert(DUT.pc_X == 'h204) begin
 000001       $display("pc_X is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_X);  pass();
 000001     end else begin
 000001       $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_X); fail(); $finish();
            end 
        
        
 000001     #20
 000001     @(negedge clk); 
            // Unit Testing #2  Simulate a extreme case (toggle all bits of the inputs) 
 000001     imem_respstream_msg.type_  = 3'b111;
 000001     imem_respstream_msg.opaque = 8'hFF;
 000001     imem_respstream_msg.test   = 2'b11;
 000001     imem_respstream_msg.len    = 2'b11;
 000001     imem_respstream_msg.data   = 32'hFFFFFFFF;
 000001     imem_respstream_drop = 1;
 000001     dmem_respstream_msg_data   = 32'hFFFFFFFF;
 000001     mngr2proc_data= 32'hFFFFFFFF;
 000001     IntMulAlt_respstream_msg   = 32'hFFFFFFFF;
 000001     reg_en_F = 0;
 000001     pc_sel_F = '1;
 000001     reg_en_D = 0;
 000001     op1_sel_D = 1;
 000001     op2_sel_D = '1;
 000001     csrr_sel_D = '1;
 000001     imm_type_D = '1;
 000001     reg_en_X = 0;
 000001     alu_fn_X = 4'hF;
 000001     ex_result_sel_X = 2'b11;
 000001     reg_en_M = 0;
 000001     wb_result_sel_M = 1;
 000001     reg_en_W = 0;
 000001     rf_waddr_W ='1;
 000001     rf_wen_W = '1;
 000001     stats_en_wen_W = 1;
 000001     core_id = 32'hFFFFFFFF;
 000001     reset = 0;
        
 000001     #20
            // Unit Testing #3  Dense CSRR INPUT
 000001     @(negedge clk); 
 000001     reg_en_F = 1;
 000001     reg_en_D = 1;
 000001     csrr_sel_D = '0;
 000001     op2_sel_D = 2'd2;
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd12;
 000001     ex_result_sel_X = 2'b0;
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 0;
 000001     reg_en_W = 1;
 000001     stats_en_wen_W = 1;
 000001     #4
 000001     @(negedge clk); 
            // Checking proc2mngr_data in W stage 
 000001     assert(proc2mngr_data == 32'hFFFFFFFF) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); fail(); 
            end 
        
 000001     #20
            // Unit Testing #3  Dense Immediate
 000001     @(negedge clk); 
 000001     imem_respstream_msg.data   = 32'hFFFFFFFF;
 000001     reg_en_F = 1;
 000001     reg_en_D = 1;
 000001     imm_type_D = 3'd0;
 000001     op2_sel_D = 2'd1;
 000001     reg_en_X = 1;
 000001     alu_fn_X = 4'd12;
 000001     ex_result_sel_X = 2'b0;
 000001     reg_en_M = 1;
 000001     wb_result_sel_M = 0;
 000001     reg_en_W = 1;
 000001     stats_en_wen_W = 1;
 000001     #4
 000001     @(negedge clk); 
            // Checking proc2mngr_data in W stage 
 000001     assert(proc2mngr_data == 32'hFFFFFFFF) begin
 000001       $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); pass();
 000001     end else begin
 000001       $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); fail(); 
            end 
        
        
 000001     #20
        
        
 000001     $finish();
        
          end
        
          
        endmodule
        
        
        
