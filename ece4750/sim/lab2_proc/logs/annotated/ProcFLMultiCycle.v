//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_BASE_V
        `define LAB2_PROC_PROC_BASE_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        
        module lab2_proc_ProcFLMultiCycle
        #(
          parameter p_num_cores = 1
        )
        (
 061129   input  logic         clk,
 000043   input  logic         reset,
        
          // From mngr streaming port
        
 000012   input  logic [31:0]  mngr2proc_msg,
 000202   input  logic         mngr2proc_val,
 000202   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000004   output logic [31:0]  proc2mngr_msg,
 000082   output logic         proc2mngr_val,
 002638   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 011402   output logic         imem_reqstream_val,
 016717   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 011364   input  logic         imem_respstream_val,
 011370   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001214   output logic         dmem_reqstream_val,
 015079   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001214   input  logic         dmem_respstream_val,
 001214   output logic         dmem_respstream_rdy,
        
          // stats output; core_id is an input port rather than a parameter so
          // that the module only needs to be compiled once. If it were a
          // parameter, each core would be compiled separately.
        
%000000   input  logic [31:0]  core_id,
%000000   output logic         commit_inst,
%000000   output logic         stats_en
        
        );
        
          //----------------------------------------------------------------------
          // Instruction Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
%000000   logic [1:0]  imem_queue_num_free_entries;
%000000   mem_req_4B_t imem_reqstream_enq_msg;
%000000   logic        imem_reqstream_enq_val;
%000000   logic        imem_reqstream_enq_rdy;
        
 000006   logic [31:0] imem_reqstream_msg_addr;
        
          assign imem_reqstream_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_msg.opaque = 8'b0;
          assign imem_reqstream_msg.addr   = imem_reqstream_msg_addr;
          assign imem_reqstream_msg.len    = 2'd0;
          assign imem_reqstream_msg.data   = 32'bx;
        
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
 000576   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001214   logic        dmem_reqstream_enq_val;
 000576   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000104   logic [31:0] dmem_reqstream_enq_msg_data;
        
          assign dmem_reqstream_enq_msg.type_  = dmem_reqstream_enq_msg_type;
          assign dmem_reqstream_enq_msg.opaque = 8'b0;
          assign dmem_reqstream_enq_msg.addr   = dmem_reqstream_enq_msg_addr;
          assign dmem_reqstream_enq_msg.len    = 2'd0;
          assign dmem_reqstream_enq_msg.data   = dmem_reqstream_enq_msg_data;
        
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
        
          //----------------------------------------------------------------------
          // proc2mngr Bypass Queue
          //----------------------------------------------------------------------
        
 000062   logic        proc2mngr_queue_num_free_entries;
 000004   logic [31:0] proc2mngr_enq_msg;
 000082   logic        proc2mngr_enq_val;
 000062   logic        proc2mngr_enq_rdy;
        
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
        
          //----------------------------------------------------------------------
          // Instruction Unpacking
          //----------------------------------------------------------------------
%000000   logic [`TINYRV2_INST_OPCODE_NBITS-1:0] opcode;
 000666   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
 000602   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000864   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000050   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000864   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
           lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .opcode   (),
            .inst     (inst),
            .rs1      (rs1),
            .rs2      (rs2),
            .rd       (rd),
            .funct3   (funct3),
            .funct7   (funct7),
            .csr      (csr)
          );
%000000   logic [31:0] PC;
 000006   logic [31:0] PC_prev;
%000000   logic [31:0] n_PC;
 000006   logic [31:0] inst;
 000006   logic [31:0] n_inst;
 011352   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 007479     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 007479   begin
            // I-type immediate
 007479     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
 000018   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
 000018   begin
            // I-type immediate, specialized for shift amounts
 000018     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 000612   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 000612   begin
            // S-type immediate
 000612     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 002787   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 002787   begin
            // B-type immediate
 002787     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
          end
          endfunction
        
 000033   function [19:0] imm_u_sh12( input [`TINYRV2_INST_NBITS-1:0] inst );
 000033   begin
            // U-type immediate, shifted right by 12
 000033     imm_u_sh12 = { inst[31], inst[30:20], inst[19:12] };
          end
          endfunction
        
 000009   function [20:0] imm_j( input [`TINYRV2_INST_NBITS-1:0] inst );
 000009   begin
            // J-type immediate
 000009     imm_j = { inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
          end
          endfunction
        
          /* verilator lint_off WIDTH */
          typedef enum { Idle, IReq,IWait, E, EWait} pstate;
          pstate state, n_state;
%000000   always_comb begin
%000000     n_state= state;
%000000     n_PC=PC;
%000000     n_inst=inst;
%000000     print_trace =1;
%000000     n_rf=rf;
%000000     imem_reqstream_val=0;
%000000     dmem_reqstream_enq_msg_addr = 0;
%000000     dmem_reqstream_enq_msg_data =0;
%000000     dmem_reqstream_enq_msg_type =0;
%000000     dmem_reqstream_enq_val=0;
%000000     dmem_respstream_rdy =0;
%000000     proc2mngr_enq_val =0;
%000000     proc2mngr_enq_msg=0;
%000000     mngr2proc_rdy=0;
%000000     imem_respstream_rdy=0;
 000086     if (reset) begin
 000172         n_state = Idle;
 000172         n_rf ='{default:32'h00000000};
            end
 000086     else begin
 005714       if (state == Idle)begin
 005714         n_state =IReq;
              end
 008480       else if (state == IReq)begin
 008480           imem_reqstream_val =1;
 008480           imem_reqstream_msg_addr = PC;
 002771         if(imem_reqstream_rdy && imem_reqstream_val)begin
 005709           n_state=IWait;
                end 
 002771         else n_state=IReq;
              end
 008685       else if (state == IWait)begin
 008685         imem_respstream_rdy =1;
 003002         if(imem_respstream_rdy && imem_respstream_val) begin
 005683           n_state = E;
 005683           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 003002         end else begin
 003002           n_state=IWait;
                end
              end
 005932       else if (state == E)begin
 005932           n_state=Idle;
 005932           n_PC=PC+4;
 005932           casez ( inst )
 000352           `TINYRV2_INST_CSRR  : begin
 000352             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 000352               mngr2proc_rdy =1;
 000303               if(mngr2proc_val)begin
 000303                 n_rf[rd]=mngr2proc_msg;
 000753               end else begin
 000753                  n_state=E;
 000753                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000041           `TINYRV2_INST_CSRW  : begin
%000000             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000041               proc2mngr_enq_val =1;
 000041               proc2mngr_enq_msg=rf[rs1];
%000000               if(proc2mngr_enq_rdy)begin
%000000               end else begin
%000000                 n_state=E;
%000000                 n_PC=PC;
                      end
                    end    
                  end
 001506            `TINYRV2_INST_ADD   : begin 
 001506               n_rf[rd]=rf[rs1]+rf[rs2];
                    end
 000002             `TINYRV2_INST_SUB   : begin 
 000002               n_rf[rd]=rf[rs1]-rf[rs2];
                    end
 000002             `TINYRV2_INST_AND   : begin 
 000002               n_rf[rd]=rf[rs1]&rf[rs2];
                    end
 000002             `TINYRV2_INST_OR    : begin 
 000002               n_rf[rd]=rf[rs1]|rf[rs2];
                    end
 000006             `TINYRV2_INST_XOR   : begin 
 000006               n_rf[rd]=rf[rs1]^rf[rs2];
                    end
 000002             `TINYRV2_INST_SLT   : begin 
 000002               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(rf[rs2])}};
                    end
 000002             `TINYRV2_INST_SLTU  :  begin 
 000002               n_rf[rd]={{31'b0},{rf[rs1] < rf[rs2]}};
                    end
 000002             `TINYRV2_INST_MUL   : begin 
 000002               n_rf[rd]=rf[rs1] * rf[rs2];
                    end
 002075             `TINYRV2_INST_ADDI  : begin 
 002075               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
                    end
 000002             `TINYRV2_INST_ANDI  : begin 
 000002               n_rf[rd]=$signed(rf[rs1]) & $signed(imm_i(inst));
                    end
 000002             `TINYRV2_INST_ORI   : begin 
 000002               n_rf[rd]=$signed(rf[rs1]) | $signed(imm_i(inst));
                    end
 000004             `TINYRV2_INST_XORI  :  begin 
 000004               n_rf[rd]=$signed(rf[rs1]) ^ $signed(imm_i(inst));
                    end
 000002             `TINYRV2_INST_SLTI  : begin 
 000002               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(imm_i(inst))}};
                    end 
 000002             `TINYRV2_INST_SLTIU : begin 
 000002               n_rf[rd]={{31'b0},{(rf[rs1]) < {{20{inst[31]}},{imm_i(inst)}}}};
                    end
 000002             `TINYRV2_INST_SRA   : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> rf[ rs2 ][4:0];
                    end
 000002             `TINYRV2_INST_SRL   : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) >> rf[ rs2 ][4:0];
                    end
 000002             `TINYRV2_INST_SLL   : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) << rf[ rs2 ][4:0];
                    end
 000002             `TINYRV2_INST_SRAI  : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> imm_shamt(inst);
                    end
 000002             `TINYRV2_INST_SRLI  : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) >> imm_shamt(inst);
                    end
 000002             `TINYRV2_INST_SLLI  : begin
 000002               n_rf[ rd ] = $signed(rf[ rs1 ]) << imm_shamt(inst);
                    end
 000009             `TINYRV2_INST_LUI   : begin
 000009               n_rf[ rd ] = imm_u_sh12(inst)<<12;
                    end
 000002             `TINYRV2_INST_AUIPC : begin
 000002               n_rf[ rd ] = PC+(imm_u_sh12(inst)<<12);
                    end
 000403           `TINYRV2_INST_LW    : begin
 000403               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 000403               dmem_reqstream_enq_msg_data =0;
 000403               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 000403               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 000403               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000204           `TINYRV2_INST_SW    : begin
 000204                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 000204                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 000204                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 000204                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 000204               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000003           `TINYRV2_INST_JAL   : begin
 000003               n_rf[ rd ] = PC+4;
 000003               n_PC = $signed(PC) +$signed(imm_j(inst));
                    end
 000003             `TINYRV2_INST_JALR  : begin
 000003               n_rf[ rd ] = PC+4;
 000003               n_PC = ($signed(rf[rs1]) + $signed(imm_i(inst)))& 32'hfffffffe;
                    end
 000302             `TINYRV2_INST_BEQ   : begin
 000001               if (rf[rs1]==rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000927             `TINYRV2_INST_BNE   : begin
 000004               if (rf[rs1]!=rf[rs2]) begin
 000923                 n_PC= $signed(PC) +$signed(imm_b(inst));
                      end 
                    end
 000002             `TINYRV2_INST_BLT   : begin
%000000               if ($signed(rf[rs1]) < $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000002             `TINYRV2_INST_BGE   : begin
 000001               if ($signed(rf[rs1]) >= $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000002             `TINYRV2_INST_BLTU  : begin
 000001               if (rf[rs1] < rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000002             `TINYRV2_INST_BGEU  :  begin
 000001               if (rf[rs1] >= rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000055           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 001216           n_state=Idle;
 001216           casez ( inst )
 000816           `TINYRV2_INST_LW    : begin
 000816             dmem_respstream_rdy =1;
 000403             if(dmem_respstream_rdy && dmem_respstream_val) begin
 000403               n_state=Idle;
 000403               n_rf[ rd ] = dmem_respstream_msg.data;
 000413             end else  begin 
 000413               n_state=EWait;
                    end
                  end
 000400           `TINYRV2_INST_SW    : begin
 000400             dmem_respstream_rdy =1;
 000196             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 000196             else  begin
 000196               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 017043       if(PC!=n_PC) begin 
                
 017043         print_trace=0;
              end 
          end
        
          end
 030543   always_ff @(posedge clk) begin
 030543       inst <=n_inst;
 030543       PC<=n_PC;
 030543       PC_prev<=PC;
        
        
 005671       if(PC!=n_PC) begin 
 005671         PC_prev<=n_PC;
              end 
 030543       rf<=n_rf;
 030543       rf[0]<=0;
 030543       state <=n_state;
 000559       if (reset) begin
 000559           PC<= 32'h200 ;
              end    
          end
          
          /* verilator lint_on WIDTH */
        
        
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
              if(print_trace) begin
                vc_trace.append_str(trace_str,".");
                vc_trace.append_chars( trace_str, " ", 31 );
              end
              else begin
                $sformat( str, "%x-",  PC_prev);
                vc_trace.append_str(trace_str,str);
                vc_trace.append_str( trace_str, { 3896'b0, tinyrv2.disasm( n_inst ) } );
              end
            
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
            .val   (imem_reqstream_val),
            .rdy   (imem_reqstream_rdy),
            .msg   (imem_reqstream_msg)
          );
        
          vc_MemReqMsg4BTrace dmem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_reqstream_val),
            .rdy   (dmem_reqstream_rdy),
            .msg   (dmem_reqstream_msg)
          );
        
          vc_MemRespMsg4BTrace imem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (imem_respstream_val),
            .rdy   (imem_respstream_rdy),
            .msg   (imem_respstream_msg)
          );
        
          vc_MemRespMsg4BTrace dmem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_respstream_val),
            .rdy   (dmem_respstream_rdy),
            .msg   (dmem_respstream_msg)
          );
        
          `endif
        
        endmodule
        
        `endif
        
        
