//      // verilator_coverage annotation
        `ifndef LAB2_PROC_PROC_DPATH_IMM_GEN_V
        `define LAB2_PROC_PROC_DPATH_IMM_GEN_V
        
        module lab2_proc_ProcDpathImmGen
        (
 000020   input  logic [ 2:0] imm_type,
 000008   input  logic [31:0] inst,
 000780   output logic [31:0] imm
        );
        
%000000   always_comb begin
%000000     case ( imm_type )
 028148       3'd0: // I-type
 028148         imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };
        
 000823       3'd1: // S-type
 000823         imm = { {21{inst[31]}} , inst[30:25], inst[11:8], inst[7] };
        
 004293       3'd2: // B-type
 004293         imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
              
 000016       3'd3: // U-type
 000016         imm = { inst[31:12], 12'b0 };
        
 000004       3'd4: // J-type
 000004         imm = { {12{inst[31]}}, inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
        
 000006       3'd5: // I-type - variant 
 000006         imm = { {27{1'b0}}, inst[24:20] };
        
        
%000000       default:
%000000         imm = 32'bx;
        
            endcase
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DPATH_IMM_GEN_V */
        
