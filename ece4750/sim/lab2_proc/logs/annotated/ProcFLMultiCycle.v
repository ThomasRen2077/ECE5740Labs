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
 017941   input  logic         clk,
 000007   input  logic         reset,
        
          // From mngr streaming port
        
 000002   input  logic [31:0]  mngr2proc_msg,
 000038   input  logic         mngr2proc_val,
 000038   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000002   output logic [31:0]  proc2mngr_msg,
 000010   output logic         proc2mngr_val,
 000814   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 003059   output logic         imem_reqstream_val,
 004838   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 003051   input  logic         imem_respstream_val,
 003053   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001206   output logic         dmem_reqstream_val,
 004616   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001206   input  logic         dmem_respstream_val,
 001206   output logic         dmem_respstream_rdy,
        
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
        
 000007   logic [31:0] imem_reqstream_msg_addr;
        
          assign imem_reqstream_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_msg.opaque = 8'b0;
          assign imem_reqstream_msg.addr   = imem_reqstream_msg_addr;
          assign imem_reqstream_msg.len    = 2'd0;
          assign imem_reqstream_msg.data   = 32'bx;
        
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
 000572   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001206   logic        dmem_reqstream_enq_val;
 000572   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000176   logic [31:0] dmem_reqstream_enq_msg_data;
        
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
        
 000010   logic        proc2mngr_queue_num_free_entries;
 000002   logic [31:0] proc2mngr_enq_msg;
 000010   logic        proc2mngr_enq_val;
 000010   logic        proc2mngr_enq_rdy;
        
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
 000050   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
%000000   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000250   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000008   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000250   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
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
 000007   logic [31:0] PC_prev;
%000000   logic [31:0] n_PC;
 000274   logic [31:0] inst;
 000274   logic [31:0] n_inst;
 003050   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 002868     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 002868   begin
            // I-type immediate
 002868     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
%000000   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
%000000   begin
            // I-type immediate, specialized for shift amounts
%000000     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 000606   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 000606   begin
            // S-type immediate
 000606     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 000369   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 000369   begin
            // B-type immediate
 000369     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
          end
          endfunction
        
 000006   function [19:0] imm_u_sh12( input [`TINYRV2_INST_NBITS-1:0] inst );
 000006   begin
            // U-type immediate, shifted right by 12
 000006     imm_u_sh12 = { inst[31], inst[30:20], inst[19:12] };
          end
          endfunction
        
%000000   function [20:0] imm_j( input [`TINYRV2_INST_NBITS-1:0] inst );
%000000   begin
            // J-type immediate
%000000     imm_j = { inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
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
 000014     if (reset) begin
 000028         n_state = Idle;
 000028         n_rf ='{default:32'h00000000};
            end
 000014     else begin
 001532       if (state == Idle)begin
 001532         n_state =IReq;
              end
 002272       else if (state == IReq)begin
 002272           imem_reqstream_val =1;
 002272           imem_reqstream_msg_addr = PC;
 000744         if(imem_reqstream_rdy && imem_reqstream_val)begin
 001528           n_state=IWait;
                end 
 000744         else n_state=IReq;
              end
 002295       else if (state == IWait)begin
 002295         imem_respstream_rdy =1;
 000769         if(imem_respstream_rdy && imem_respstream_val) begin
 001526           n_state = E;
 001526           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 000769         end else begin
 000769           n_state=IWait;
                end
              end
 001578       else if (state == E)begin
 001578           n_state=Idle;
 001578           n_PC=PC+4;
 001578           casez ( inst )
 000072           `TINYRV2_INST_CSRR  : begin
 000072             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 000072               mngr2proc_rdy =1;
 000057               if(mngr2proc_val)begin
 000057                 n_rf[rd]=mngr2proc_msg;
 000159               end else begin
 000159                  n_state=E;
 000159                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000005           `TINYRV2_INST_CSRW  : begin
%000000             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000005               proc2mngr_enq_val =1;
 000005               proc2mngr_enq_msg=rf[rs1];
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
%000000             `TINYRV2_INST_SUB   : begin 
%000000               n_rf[rd]=rf[rs1]-rf[rs2];
                    end
%000000             `TINYRV2_INST_AND   : begin 
%000000               n_rf[rd]=rf[rs1]&rf[rs2];
                    end
%000000             `TINYRV2_INST_OR    : begin 
%000000               n_rf[rd]=rf[rs1]|rf[rs2];
                    end
 000004             `TINYRV2_INST_XOR   : begin 
 000004               n_rf[rd]=rf[rs1]^rf[rs2];
                    end
%000000             `TINYRV2_INST_SLT   : begin 
%000000               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(rf[rs2])}};
                    end
%000000             `TINYRV2_INST_SLTU  :  begin 
%000000               n_rf[rd]={{31'b0},{rf[rs1] < rf[rs2]}};
                    end
%000000             `TINYRV2_INST_MUL   : begin 
%000000               n_rf[rd]=rf[rs1] * rf[rs2];
                    end
 000553             `TINYRV2_INST_ADDI  : begin 
 000553               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_ANDI  : begin 
%000000               n_rf[rd]=$signed(rf[rs1]) & $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_ORI   : begin 
%000000               n_rf[rd]=$signed(rf[rs1]) | $signed(imm_i(inst));
                    end
 000002             `TINYRV2_INST_XORI  :  begin 
 000002               n_rf[rd]=$signed(rf[rs1]) ^ $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_SLTI  : begin 
%000000               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(imm_i(inst))}};
                    end 
%000000             `TINYRV2_INST_SLTIU : begin 
%000000               n_rf[rd]={{31'b0},{(rf[rs1]) < {{20{inst[31]}},{imm_i(inst)}}}};
                    end
%000000             `TINYRV2_INST_SRA   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SRL   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >> rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SLL   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) << rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SRAI  : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> imm_shamt(inst);
                    end
%000000             `TINYRV2_INST_SRLI  : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >> imm_shamt(inst);
                    end
%000000             `TINYRV2_INST_SLLI  : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) << imm_shamt(inst);
                    end
 000002             `TINYRV2_INST_LUI   : begin
 000002               n_rf[ rd ] = imm_u_sh12(inst)<<12;
                    end
%000000             `TINYRV2_INST_AUIPC : begin
%000000               n_rf[ rd ] = PC+(imm_u_sh12(inst)<<12);
                    end
 000401           `TINYRV2_INST_LW    : begin
 000401               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 000401               dmem_reqstream_enq_msg_data =0;
 000401               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 000401               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 000401               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000202           `TINYRV2_INST_SW    : begin
 000202                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 000202                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 000202                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 000202                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 000202               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
%000000           `TINYRV2_INST_JAL   : begin
%000000               n_rf[ rd ] = PC+4;
%000000               n_PC = $signed(PC) +$signed(imm_j(inst));
                    end
%000000             `TINYRV2_INST_JALR  : begin
%000000               n_rf[ rd ] = PC+4;
%000000               n_PC = ($signed(rf[rs1]) + $signed(imm_i(inst)))& 32'hfffffffe;
                    end
%000000             `TINYRV2_INST_BEQ   : begin
%000000               if (rf[rs1]==rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000125             `TINYRV2_INST_BNE   : begin
 000002               if (rf[rs1]!=rf[rs2]) begin
 000123                 n_PC= $signed(PC) +$signed(imm_b(inst));
                      end 
                    end
%000000             `TINYRV2_INST_BLT   : begin
%000000               if ($signed(rf[rs1]) < $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BGE   : begin
%000000               if ($signed(rf[rs1]) >= $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BLTU  : begin
%000000               if (rf[rs1] < rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BGEU  :  begin
%000000               if (rf[rs1] >= rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000008           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 001206           n_state=Idle;
 001206           casez ( inst )
 000811           `TINYRV2_INST_LW    : begin
 000811             dmem_respstream_rdy =1;
 000401             if(dmem_respstream_rdy && dmem_respstream_val) begin
 000401               n_state=Idle;
 000401               n_rf[ rd ] = dmem_respstream_msg.data;
 000410             end else  begin 
 000410               n_state=EWait;
                    end
                  end
 000395           `TINYRV2_INST_SW    : begin
 000395             dmem_respstream_rdy =1;
 000193             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 000193             else  begin
 000193               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 004575       if(PC!=n_PC) begin 
                
 004575         print_trace=0;
              end 
          end
        
          end
 008967   always_ff @(posedge clk) begin
 008967       inst <=n_inst;
 008967       PC<=n_PC;
 008967       PC_prev<=PC;
        
        
 001525       if(PC!=n_PC) begin 
 001525         PC_prev<=n_PC;
              end 
 008967       rf<=n_rf;
 008967       rf[0]<=0;
 008967       state <=n_state;
 000091       if (reset) begin
 000091           PC<= 32'h200 ;
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
        
        
