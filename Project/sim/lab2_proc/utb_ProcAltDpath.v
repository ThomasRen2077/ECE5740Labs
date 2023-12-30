`default_nettype none
`timescale 1ps/1ps


`include "ProcAltDpath.v"
`include "vc/trace.v"

module top(  input logic clk, input logic linetrace );

 
  logic         reset;

  // Instruction Memory Port

  logic [31:0]  imem_reqstream_msg_addr;
  mem_resp_4B_t imem_respstream_msg;

  // Data Memory Port

  logic [31:0]  dmem_reqstream_msg_addr;
  logic [31:0]  dmem_reqstream_msg_data;
  logic [31:0]  dmem_respstream_msg_data;

  // mngr communication ports

  logic [31:0]  mngr2proc_data;
  logic [31:0]  proc2mngr_data;

  // Multiplier Memory Port

  logic [63:0]  IntMulAlt_reqstream_msg;
  logic [31:0]  IntMulAlt_respstream_msg;

  // control signals (ctrl->dpath)
  logic         imem_respstream_drop;
  logic         reg_en_F;
  logic [1:0]   pc_sel_F;
  logic         reg_en_D;
  logic [1:0]   op1_byp_sel_D;                         // Operand 1 Bypass Mux Signal
  logic [1:0]   op2_byp_sel_D;                         // Operand 2 Bypass Mux Signal
  logic         op1_sel_D;
  logic [1:0]   op2_sel_D;
  logic [1:0]   csrr_sel_D;
  logic [2:0]   imm_type_D;
  logic         reg_en_X;
  logic [3:0]   alu_fn_X;
  logic [1:0]   ex_result_sel_X;
  logic         imul_ostream_rdy_X;
  logic         reg_en_M;
  logic         wb_result_sel_M;
  logic         reg_en_W;
  logic [4:0]   rf_waddr_W;
  logic         rf_wen_W;
  logic         stats_en_wen_W;

  // status signals (dpath->ctrl)
  logic [31:0]  inst_D;
  logic         br_cond_eq_X;
  logic         br_cond_lt_X;
  logic         br_cond_ltu_X;

  // extra ports
  logic [31:0]  core_id;
  logic         stats_en;


  // Instantiate the processor datapath
  lab2_proc_ProcAltDpath 
  #(
    .p_num_cores( 1)
  )
  DUT
  ( .*
  ); 


  initial begin

    $display("Start of Testbench");
    // Initalize all the signal inital values.
    imem_respstream_msg.type_ = `VC_MEM_RESP_MSG_TYPE_READ;
    imem_respstream_msg.opaque = 8'b0;
    imem_respstream_msg.test = 2'b0;
    imem_respstream_msg.len    = 2'd0;
    imem_respstream_msg.data   = 'hDEADBEEF;
    imem_respstream_drop = 0;
    dmem_respstream_msg_data = '0;

    mngr2proc_data= '0;

    reg_en_F = 1;
    pc_sel_F = '0;

    reg_en_D = 1;
    op1_byp_sel_D = 2'b0;
    op2_byp_sel_D = 2'b0;
    op1_sel_D = 0;
    op2_sel_D = '0;
    csrr_sel_D = '0;
    imm_type_D = '0;

    reg_en_X =1;
    alu_fn_X =0;
    ex_result_sel_X =0;

    reg_en_M =1;
    wb_result_sel_M =0;

    reg_en_W =1;
    rf_waddr_W ='0;
    rf_wen_W = '0;
    stats_en_wen_W =0;

    core_id = '0;
    reset = 1;

  
    #20
    // Unit Testing #1  If PC is working correctly across the pipeline + a JAL
    @(negedge clk); 
    reset = 0;
    @(negedge clk); 
    $display( "Advancing time");
    // Checking F stage D/X stages are invalid
    assert(DUT.pc_F == 'h200) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_F); fail(); $finish();
    end 
    //Advancing time
    $display( "Advancing time");
    @(negedge clk); 
    // Checking F/D stage X stage is invalid
    assert(DUT.pc_F == 'h204) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_F);pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h200) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_D);pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_D); fail(); $finish();
    end 
    //Advancing time
    $display( "Advancing time");
    @(negedge clk); 
     // Checking F/D/X stage 
    assert(DUT.pc_F == 'h208) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h204) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_D);  pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_D); fail(); $finish();
    end 
    assert(DUT.pc_X == 'h200) begin
      $display("pc_X is correct.  Expected: %h, Actual: %h", 'h200,DUT.pc_X);  pass();
    end else begin
      $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h200,DUT.pc_X); fail(); $finish();
    end 
    // Setting Branch 
    imm_type_D = 4; // J-type imm-type
    pc_sel_F = 2; // J-type imm-type
    
    //Advancing time
    $display( "Advancing time with J imm jump on D stage");
    @(negedge clk); 
     // Checking F/D/X stage 
    assert(DUT.pc_F == 'hfffdb7ee) begin
      $display("pc_F is correct.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); pass();
    end else begin
      $display("pc_F is incorrect.  Expected: %h, Actual: %h", 'hfffdb7ee,DUT.pc_F); fail(); $finish();
    end 
    assert(DUT.pc_D == 'h208) begin
      $display("pc_D is correct.  Expected: %h, Actual: %h", 'h208,DUT.pc_D);  pass();
    end else begin
      $display("pc_D is incorrect.  Expected: %h, Actual: %h", 'h208,DUT.pc_D); fail(); $finish();
    end 
    assert(DUT.pc_X == 'h204) begin
      $display("pc_X is correct.  Expected: %h, Actual: %h", 'h204,DUT.pc_X);  pass();
    end else begin
      $display("pc_X is incorrect.  Expected: %h, Actual: %h", 'h204,DUT.pc_X); fail(); $finish();
    end 


    #20
    @(negedge clk); 
    // Unit Testing #2  Simulate a extreme case (toggle all bits of the inputs) 
    imem_respstream_msg.type_  = 3'b111;
    imem_respstream_msg.opaque = 8'hFF;
    imem_respstream_msg.test   = 2'b11;
    imem_respstream_msg.len    = 2'b11;
    imem_respstream_msg.data   = 32'hFFFFFFFF;
    imem_respstream_drop = 1;
    dmem_respstream_msg_data   = 32'hFFFFFFFF;
    mngr2proc_data= 32'hFFFFFFFF;
    IntMulAlt_respstream_msg   = 32'hFFFFFFFF;
    reg_en_F = 0;
    pc_sel_F = '1;
    reg_en_D = 0;
    op1_byp_sel_D = 2'b11;
    op2_byp_sel_D = 2'b11;
    op1_sel_D = 1;
    op2_sel_D = '1;
    csrr_sel_D = '1;
    imm_type_D = '1;
    reg_en_X = 0;
    alu_fn_X = 4'hF;
    ex_result_sel_X = 2'b11;
    reg_en_M = 0;
    wb_result_sel_M = 1;
    reg_en_W = 0;
    rf_waddr_W ='1;
    rf_wen_W = '1;
    stats_en_wen_W = 1;
    core_id = 32'hFFFFFFFF;
    reset = 0;

    #20
    // Unit Testing #3  Dense CSRR INPUT
    @(negedge clk); 
    reg_en_F = 1;
    reg_en_D = 1;
    csrr_sel_D = '0;
    op2_sel_D = 2'd2;
    reg_en_X = 1;
    alu_fn_X = 4'd12;
    ex_result_sel_X = 2'b0;
    reg_en_M = 1;
    wb_result_sel_M = 0;
    reg_en_W = 1;
    stats_en_wen_W = 1;
    #4
    @(negedge clk); 
    // Checking proc2mngr_data in W stage 
    assert(proc2mngr_data == 32'hFFFFFFFF) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); fail(); 
    end 

    #20
    // Unit Testing #3  Dense Immediate
    @(negedge clk); 
    imem_respstream_msg.data   = 32'hFFFFFFFF;
    reg_en_F = 1;
    reg_en_D = 1;
    imm_type_D = 3'd0;
    op2_sel_D = 2'd1;
    reg_en_X = 1;
    alu_fn_X = 4'd12;
    ex_result_sel_X = 2'b0;
    reg_en_M = 1;
    wb_result_sel_M = 0;
    reg_en_W = 1;
    stats_en_wen_W = 1;
    #4
    @(negedge clk); 
    // Checking proc2mngr_data in W stage 
    assert(proc2mngr_data == 32'hFFFFFFFF) begin
      $display("proc2mngr_data is correct.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); pass();
    end else begin
      $display("proc2mngr_data is incorrect.  Expected: %h, Actual: %h", 32'hFFFFFFFF, proc2mngr_data); fail(); 
    end 


    #20


    $finish();

  end

  
endmodule


