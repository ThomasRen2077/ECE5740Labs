//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Registers
        //========================================================================
        
        // Note that we place the register output earlier in the port list since
        // this is one place we might actually want to use positional port
        // binding like this:
        //
        //  logic [p_nbits-1:0] result_B;
        //  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );
        
        `ifndef VC_REGS_V
        `define VC_REGS_V
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop
        //------------------------------------------------------------------------
        
        module vc_Reg
        #(
          parameter p_nbits = 1
        )(
          input  logic               clk, // Clock input
          output logic [p_nbits-1:0] q,   // Data output
          input  logic [p_nbits-1:0] d    // Data input
        );
        
          always_ff @( posedge clk )
            q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 541704   input  logic               clk,   // Clock input
 000042   input  logic               reset, // Sync reset input
 009001   output logic [p_nbits-1:0] q,     // Data output
 009006   input  logic [p_nbits-1:0] d      // Data input
        );
        
 270831   always_ff @( posedge clk )
 270831     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 198509   input  logic               clk,   // Clock input
 000021   input  logic               reset, // Sync reset input
 000225   output logic [p_nbits-1:0] q,     // Data output
 000368   input  logic [p_nbits-1:0] d,     // Data input
 000016   input  logic               en     // Enable input
        );
        
 099244   always_ff @( posedge clk )
 000008     if ( en )
 000008       q <= d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable and reset
        //------------------------------------------------------------------------
        
        module vc_EnResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 040589   input  logic               clk,   // Clock input
 000007   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000088   input  logic               en     // Enable input
        );
        
 020291   always_ff @( posedge clk )
 000590     if ( reset || en )
 000590       q <= reset ? p_reset_value : d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* VC_REGS_V */
        
        
