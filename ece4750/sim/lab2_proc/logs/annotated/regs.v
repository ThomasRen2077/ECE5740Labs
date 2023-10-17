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
 058140   input  logic               clk, // Clock input
 000568   output logic [p_nbits-1:0] q,   // Data output
 000568   input  logic [p_nbits-1:0] d    // Data input
        );
        
 028990   always_ff @( posedge clk )
 028990     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 087210   input  logic               clk,   // Clock input
 000240   input  logic               reset, // Sync reset input
 005755   output logic [p_nbits-1:0] q,     // Data output
 005771   input  logic [p_nbits-1:0] d      // Data input
        );
        
 043485   always_ff @( posedge clk )
 043485     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 031092   input  logic               clk,   // Clock input
 000040   input  logic               reset, // Sync reset input
 000805   output logic [p_nbits-1:0] q,     // Data output
 001632   input  logic [p_nbits-1:0] d,     // Data input
 000056   input  logic               en     // Enable input
        );
        
 015526   always_ff @( posedge clk )
 000028     if ( en )
 000028       q <= d;
        
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
 029070   input  logic               clk,   // Clock input
 000080   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000804   input  logic               en     // Enable input
        );
        
 014495   always_ff @( posedge clk )
 003522     if ( reset || en )
 003522       q <= reset ? p_reset_value : d;
        
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
        
        
