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
 133328   input  logic               clk, // Clock input
 000568   output logic [p_nbits-1:0] q,   // Data output
 000568   input  logic [p_nbits-1:0] d    // Data input
        );
        
 066580   always_ff @( posedge clk )
 066580     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 199992   input  logic               clk,   // Clock input
 000252   input  logic               reset, // Sync reset input
 014798   output logic [p_nbits-1:0] q,     // Data output
 014823   input  logic [p_nbits-1:0] d      // Data input
        );
        
 099870   always_ff @( posedge clk )
 099870     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 060766   input  logic               clk,   // Clock input
 000042   input  logic               reset, // Sync reset input
 000818   output logic [p_nbits-1:0] q,     // Data output
 002172   input  logic [p_nbits-1:0] d,     // Data input
 000080   input  logic               en     // Enable input
        );
        
 030362   always_ff @( posedge clk )
 000040     if ( en )
 000040       q <= d;
        
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
 066664   input  logic               clk,   // Clock input
 000084   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000828   input  logic               en     // Enable input
        );
        
 033290   always_ff @( posedge clk )
 003690     if ( reset || en )
 003690       q <= reset ? p_reset_value : d;
        
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
        
        
