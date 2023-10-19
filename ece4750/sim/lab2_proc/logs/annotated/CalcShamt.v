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
 000926   input  logic [7:0] in_,
 004832   output logic [3:0] out
        );
        
%000000   always_comb begin
 020654     if      ( in_ == 0 ) out = 8;
 001955     else if ( in_[0]   ) out = 1;
 000206     else if ( in_[1]   ) out = 1;
 002744     else if ( in_[2]   ) out = 2;
 001172     else if ( in_[3]   ) out = 3;
 002895     else if ( in_[4]   ) out = 4;
 002545     else if ( in_[5]   ) out = 5;
 001081     else if ( in_[6]   ) out = 6;
 000038     else if ( in_[7]   ) out = 7;
            else begin out=0; $stop; end
          end
        
        endmodule
        
        `endif /* LAB1_IMUL_CALC_SHAMT_V */
        
