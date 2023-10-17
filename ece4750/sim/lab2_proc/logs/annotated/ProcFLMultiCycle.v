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
 031092   input  logic         clk,
 000040   input  logic         reset,
        
          // From mngr streaming port
        
 000012   input  logic [31:0]  mngr2proc_msg,
 000192   input  logic         mngr2proc_val,
 000192   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000004   output logic [31:0]  proc2mngr_msg,
 000076   output logic         proc2mngr_val,
 001186   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 005423   output logic         imem_reqstream_val,
 008387   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 005388   input  logic         imem_respstream_val,
 005394   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001210   output logic         dmem_reqstream_val,
 007498   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001210   input  logic         dmem_respstream_val,
 001210   output logic         dmem_respstream_rdy,
        
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
        
 000574   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001210   logic        dmem_reqstream_enq_val;
 000574   logic        dmem_reqstream_enq_rdy;
        
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
        
 000056   logic        proc2mngr_queue_num_free_entries;
 000004   logic [31:0] proc2mngr_enq_msg;
 000076   logic        proc2mngr_enq_val;
 000056   logic        proc2mngr_enq_rdy;
        
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
 000054   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
 000002   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000258   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000036   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000258   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
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
 005378   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 005835     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 005835   begin
            // I-type immediate
 005835     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
 000009   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
 000009   begin
            // I-type immediate, specialized for shift amounts
 000009     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 000609   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 000609   begin
            // S-type immediate
 000609     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 000387   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 000387   begin
            // B-type immediate
 000387     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
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
 000080     if (reset) begin
 000160         n_state = Idle;
 000160         n_rf ='{default:32'h00000000};
            end
 000080     else begin
 002724       if (state == Idle)begin
 002724         n_state =IReq;
              end
 003999       else if (state == IReq)begin
 003999           imem_reqstream_val =1;
 003999           imem_reqstream_msg_addr = PC;
 001280         if(imem_reqstream_rdy && imem_reqstream_val)begin
 002719           n_state=IWait;
                end 
 001280         else n_state=IReq;
              end
 004176       else if (state == IWait)begin
 004176         imem_respstream_rdy =1;
 001482         if(imem_respstream_rdy && imem_respstream_val) begin
 002694           n_state = E;
 002694           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 001482         end else begin
 001482           n_state=IWait;
                end
              end
 002936       else if (state == E)begin
 002936           n_state=Idle;
 002936           n_PC=PC+4;
 002936           casez ( inst )
 000338           `TINYRV2_INST_CSRR  : begin
 000338             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 000338               mngr2proc_rdy =1;
 000288               if(mngr2proc_val)begin
 000288                 n_rf[rd]=mngr2proc_msg;
 000726               end else begin
 000726                  n_state=E;
 000726                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000038           `TINYRV2_INST_CSRW  : begin
%000000             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000038               proc2mngr_enq_val =1;
 000038               proc2mngr_enq_msg=rf[rs1];
%000000               if(proc2mngr_enq_rdy)begin
%000000               end else begin
%000000                 n_state=E;
%000000                 n_PC=PC;
                      end
                    end    
                  end
 000204            `TINYRV2_INST_ADD   : begin 
 000204               n_rf[rd]=rf[rs1]+rf[rs2];
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
 001534             `TINYRV2_INST_ADDI  : begin 
 001534               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
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
 000402           `TINYRV2_INST_LW    : begin
 000402               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 000402               dmem_reqstream_enq_msg_data =0;
 000402               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 000402               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 000402               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000203           `TINYRV2_INST_SW    : begin
 000203                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 000203                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 000203                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 000203                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 000203               n_state=EWait;
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
 000126             `TINYRV2_INST_BNE   : begin
 000002               if (rf[rs1]!=rf[rs2]) begin
 000124                 n_PC= $signed(PC) +$signed(imm_b(inst));
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
 000052           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 001211           n_state=Idle;
 001211           casez ( inst )
 000813           `TINYRV2_INST_LW    : begin
 000813             dmem_respstream_rdy =1;
 000402             if(dmem_respstream_rdy && dmem_respstream_val) begin
 000402               n_state=Idle;
 000402               n_rf[ rd ] = dmem_respstream_msg.data;
 000411             end else  begin 
 000411               n_state=EWait;
                    end
                  end
 000398           `TINYRV2_INST_SW    : begin
 000398             dmem_respstream_rdy =1;
 000195             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 000195             else  begin
 000195               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 008082       if(PC!=n_PC) begin 
                
 008082         print_trace=0;
              end 
          end
        
          end
 015526   always_ff @(posedge clk) begin
 015526       inst <=n_inst;
 015526       PC<=n_PC;
 015526       PC_prev<=PC;
        
        
 002684       if(PC!=n_PC) begin 
 002684         PC_prev<=n_PC;
              end 
 015526       rf<=n_rf;
 015526       rf[0]<=0;
 015526       state <=n_state;
 000520       if (reset) begin
 000520           PC<= 32'h200 ;
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
        
        
