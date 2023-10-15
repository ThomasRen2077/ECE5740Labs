//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath Immediate Generation
        //========================================================================
        // Generate intermediate (imm) based on type
        
        `ifndef LAB2_PROC_PROC_DPATH_IMM_GEN_V
        `define LAB2_PROC_PROC_DPATH_IMM_GEN_V
        
        module lab2_proc_ProcDpathImmGen
        (
 000010   input  logic [ 2:0] imm_type,
 000002   input  logic [31:0] inst,
 000664   output logic [31:0] imm
        );
        
%000000   always_comb begin
%000000     case ( imm_type )
 009462       3'd0: // I-type
 009462         imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };
        
 000629       3'd2: // B-type
 000629         imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
              
 000006       3'd3: // U-type
 000006         imm = { inst[31:12], 12'b0 };
        
 000002       3'd4: // J-type (Need double check) 
 000002         imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };
        
 000003       3'd5: // I-type - variant 
 000003         imm = { {27{1'b0}}, inst[24:20] };
        
        
 000367       default:
 000367         imm = 32'bx;
        
            endcase
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DPATH_IMM_GEN_V */
        
