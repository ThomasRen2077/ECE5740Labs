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
 043547   input  logic         clk,
 000041   input  logic         reset,
        
          // From mngr streaming port
        
 000012   input  logic [31:0]  mngr2proc_msg,
 000202   input  logic         mngr2proc_val,
 000202   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000004   output logic [31:0]  proc2mngr_msg,
 000078   output logic         proc2mngr_val,
 001802   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 007649   output logic         imem_reqstream_val,
 011752   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 007613   input  logic         imem_respstream_val,
 007619   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001810   output logic         dmem_reqstream_val,
 010700   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001810   input  logic         dmem_respstream_val,
 001810   output logic         dmem_respstream_rdy,
        
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
        
 000005   logic [31:0] imem_reqstream_msg_addr;
        
          assign imem_reqstream_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_msg.opaque = 8'b0;
          assign imem_reqstream_msg.addr   = imem_reqstream_msg_addr;
          assign imem_reqstream_msg.len    = 2'd0;
          assign imem_reqstream_msg.data   = 32'bx;
        
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
 000866   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001810   logic        dmem_reqstream_enq_val;
 000866   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000002   logic [31:0] dmem_reqstream_enq_msg_data;
        
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
        
 000058   logic        proc2mngr_queue_num_free_entries;
 000004   logic [31:0] proc2mngr_enq_msg;
 000078   logic        proc2mngr_enq_val;
 000058   logic        proc2mngr_enq_rdy;
        
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
 000254   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
 000002   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000458   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000036   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000458   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
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
 000005   logic [31:0] PC_prev;
%000000   logic [31:0] n_PC;
 000002   logic [31:0] inst;
 000002   logic [31:0] n_inst;
 007602   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 008247     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 008247   begin
            // I-type immediate
 008247     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
 000009   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
 000009   begin
            // I-type immediate, specialized for shift amounts
 000009     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 000909   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 000909   begin
            // S-type immediate
 000909     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 000684   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 000684   begin
            // B-type immediate
 000684     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
          end
          endfunction
        
 000018   function [19:0] imm_u_sh12( input [`TINYRV2_INST_NBITS-1:0] inst );
 000018   begin
            // U-type immediate, shifted right by 12
 000018     imm_u_sh12 = { inst[31], inst[30:20], inst[19:12] };
          end
          endfunction
        
 000006   function [20:0] imm_j( input [`TINYRV2_INST_NBITS-1:0] inst );
 000006   begin
            // J-type immediate
 000006     imm_j = { inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
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
 000082     if (reset) begin
 000164         n_state = Idle;
 000164         n_rf ='{default:32'h00000000};
            end
 000082     else begin
 003837       if (state == Idle)begin
 003837         n_state =IReq;
              end
 005673       else if (state == IReq)begin
 005673           imem_reqstream_val =1;
 005673           imem_reqstream_msg_addr = PC;
 001841         if(imem_reqstream_rdy && imem_reqstream_val)begin
 003832           n_state=IWait;
                end 
 001841         else n_state=IReq;
              end
 005868       else if (state == IWait)begin
 005868         imem_respstream_rdy =1;
 002061         if(imem_respstream_rdy && imem_respstream_val) begin
 003807           n_state = E;
 003807           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 002061         end else begin
 002061           n_state=IWait;
                end
              end
 004061       else if (state == E)begin
 004061           n_state=Idle;
 004061           n_PC=PC+4;
 004061           casez ( inst )
 000356           `TINYRV2_INST_CSRR  : begin
 000356             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 000356               mngr2proc_rdy =1;
 000303               if(mngr2proc_val)begin
 000303                 n_rf[rd]=mngr2proc_msg;
 000765               end else begin
 000765                  n_state=E;
 000765                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000039           `TINYRV2_INST_CSRW  : begin
%000000             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000039               proc2mngr_enq_val =1;
 000039               proc2mngr_enq_msg=rf[rs1];
%000000               if(proc2mngr_enq_rdy)begin
%000000               end else begin
%000000                 n_state=E;
%000000                 n_PC=PC;
                      end
                    end    
                  end
 000305            `TINYRV2_INST_ADD   : begin 
 000305               n_rf[rd]=rf[rs1]+rf[rs2];
                    end
 000001             `TINYRV2_INST_SUB   : begin 
 000001               n_rf[rd]=rf[rs1]-rf[rs2];
                    end
 000001             `TINYRV2_INST_AND   : begin 
 000001               n_rf[rd]=rf[rs1]&rf[rs2];
                    end
 000001             `TINYRV2_INST_OR    : begin 
 000001               n_rf[rd]=rf[rs1]|rf[rs2];
                    end
 000005             `TINYRV2_INST_XOR   : begin 
 000005               n_rf[rd]=rf[rs1]^rf[rs2];
                    end
 000001             `TINYRV2_INST_SLT   : begin 
 000001               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(rf[rs2])}};
                    end
 000001             `TINYRV2_INST_SLTU  :  begin 
 000001               n_rf[rd]={{31'b0},{rf[rs1] < rf[rs2]}};
                    end
 000001             `TINYRV2_INST_MUL   : begin 
 000001               n_rf[rd]=rf[rs1] * rf[rs2];
                    end
 002138             `TINYRV2_INST_ADDI  : begin 
 002138               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
                    end
 000001             `TINYRV2_INST_ANDI  : begin 
 000001               n_rf[rd]=$signed(rf[rs1]) & $signed(imm_i(inst));
                    end
 000001             `TINYRV2_INST_ORI   : begin 
 000001               n_rf[rd]=$signed(rf[rs1]) | $signed(imm_i(inst));
                    end
 000003             `TINYRV2_INST_XORI  :  begin 
 000003               n_rf[rd]=$signed(rf[rs1]) ^ $signed(imm_i(inst));
                    end
 000001             `TINYRV2_INST_SLTI  : begin 
 000001               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(imm_i(inst))}};
                    end 
 000001             `TINYRV2_INST_SLTIU : begin 
 000001               n_rf[rd]={{31'b0},{(rf[rs1]) < {{20{inst[31]}},{imm_i(inst)}}}};
                    end
 000001             `TINYRV2_INST_SRA   : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> rf[ rs2 ][4:0];
                    end
 000001             `TINYRV2_INST_SRL   : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) >> rf[ rs2 ][4:0];
                    end
 000001             `TINYRV2_INST_SLL   : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) << rf[ rs2 ][4:0];
                    end
 000001             `TINYRV2_INST_SRAI  : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> imm_shamt(inst);
                    end
 000001             `TINYRV2_INST_SRLI  : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) >> imm_shamt(inst);
                    end
 000001             `TINYRV2_INST_SLLI  : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) << imm_shamt(inst);
                    end
 000005             `TINYRV2_INST_LUI   : begin
 000005               n_rf[ rd ] = imm_u_sh12(inst)<<12;
                    end
 000001             `TINYRV2_INST_AUIPC : begin
 000001               n_rf[ rd ] = PC+(imm_u_sh12(inst)<<12);
                    end
 000602           `TINYRV2_INST_LW    : begin
 000602               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 000602               dmem_reqstream_enq_msg_data =0;
 000602               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 000602               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 000602               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000303           `TINYRV2_INST_SW    : begin
 000303                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 000303                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 000303                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 000303                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 000303               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000002           `TINYRV2_INST_JAL   : begin
 000002               n_rf[ rd ] = PC+4;
 000002               n_PC = $signed(PC) +$signed(imm_j(inst));
                    end
 000002             `TINYRV2_INST_JALR  : begin
 000002               n_rf[ rd ] = PC+4;
 000002               n_PC = ($signed(rf[rs1]) + $signed(imm_i(inst)))& 32'hfffffffe;
                    end
 000001             `TINYRV2_INST_BEQ   : begin
%000000               if (rf[rs1]==rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000226             `TINYRV2_INST_BNE   : begin
 000003               if (rf[rs1]!=rf[rs2]) begin
 000223                 n_PC= $signed(PC) +$signed(imm_b(inst));
                      end 
                    end
 000001             `TINYRV2_INST_BLT   : begin
%000000               if ($signed(rf[rs1]) < $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000001             `TINYRV2_INST_BGE   : begin
%000000               if ($signed(rf[rs1]) >= $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000001             `TINYRV2_INST_BLTU  : begin
%000000               if (rf[rs1] < rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000001             `TINYRV2_INST_BGEU  :  begin
%000000               if (rf[rs1] >= rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000053           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 001822           n_state=Idle;
 001822           casez ( inst )
 001212           `TINYRV2_INST_LW    : begin
 001212             dmem_respstream_rdy =1;
 000602             if(dmem_respstream_rdy && dmem_respstream_val) begin
 000602               n_state=Idle;
 000602               n_rf[ rd ] = dmem_respstream_msg.data;
 000610             end else  begin 
 000610               n_state=EWait;
                    end
                  end
 000610           `TINYRV2_INST_SW    : begin
 000610             dmem_respstream_rdy =1;
 000303             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 000307             else  begin
 000307               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 011418       if(PC!=n_PC) begin 
                
 011418         print_trace=0;
              end 
          end
        
          end
 021753   always_ff @(posedge clk) begin
 021753       inst <=n_inst;
 021753       PC<=n_PC;
 021753       PC_prev<=PC;
        
        
 003796       if(PC!=n_PC) begin 
 003796         PC_prev<=n_PC;
              end 
 021753       rf<=n_rf;
 021753       rf[0]<=0;
 021753       state <=n_state;
 000533       if (reset) begin
 000533           PC<= 32'h200 ;
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
        
        
