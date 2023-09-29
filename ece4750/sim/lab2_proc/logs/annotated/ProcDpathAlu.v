//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath ALU
        //========================================================================
        
        `ifndef LAB2_PROC_PROC_DPATH_ALU_V
        `define LAB2_PROC_PROC_DPATH_ALU_V
        
        `include "vc/arithmetic.v"
        
        module lab2_proc_ProcDpathAlu
        (
 000002   input  logic [31:0] in0,
 000002   input  logic [31:0] in1,
 000020   input  logic [ 3:0] fn,
 000002   output logic [31:0] out,
 009715   output logic        ops_eq,
 003468   output logic        ops_lt,
 003468   output logic        ops_ltu
        );
        
%000000   always_comb begin
        
%000000     case ( fn )
 019530       4'd0    : out = in0 + in1;                                // ADD
 000632       4'd11   : out = in0;                                      // CP OP0
 000129       4'd12   : out = in1;                                      // CP OP1
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
              // Add more alu function
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
%000000       default : out = 32'b0;
            endcase
        
          end
        
          // Calculate equality, zero, negative flags
        
          vc_EqComparator #(32) cond_eq_comp
          (
            .in0  (in0),
            .in1  (in1),
            .out  (ops_eq)
          );
        
          assign ops_lt = $signed(in0) < $signed(in1);
          assign ops_ltu = in0 < in1;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_DPATH_ALU_V */
        
