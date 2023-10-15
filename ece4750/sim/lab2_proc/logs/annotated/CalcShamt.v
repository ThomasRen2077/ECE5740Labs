//      // verilator_coverage annotation
        //========================================================================
        // CalcShamt
        //========================================================================
        // Looking at least significant eight bits, calculate how many bits we
        // want to shift.
        
        `ifndef LAB1_IMUL_CALC_SHAMT_V
        `define LAB1_IMUL_CALC_SHAMT_V
        
        module lab1_imul_CalcShamt
        (
 000470   input  logic [7:0] in_,
 000126   output logic [3:0] out
        );
        
%000000   always_comb begin
 008833     if      ( in_ == 0 ) out = 8;
 000235     else if ( in_[0]   ) out = 1;
 000033     else if ( in_[1]   ) out = 1;
 001141     else if ( in_[2]   ) out = 2;
 000139     else if ( in_[3]   ) out = 3;
 000088     else if ( in_[4]   ) out = 4;
%000000     else if ( in_[5]   ) out = 5;
%000000     else if ( in_[6]   ) out = 6;
%000000     else if ( in_[7]   ) out = 7;
            else begin out=0; $stop; end
          end
        
        endmodule
        
        `endif /* LAB1_IMUL_CALC_SHAMT_V */
        
