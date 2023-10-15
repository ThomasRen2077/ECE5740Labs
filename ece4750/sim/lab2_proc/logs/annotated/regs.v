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
 041958   input  logic               clk, // Clock input
 000484   output logic [p_nbits-1:0] q,   // Data output
 000484   input  logic [p_nbits-1:0] d    // Data input
        );
        
 020938   always_ff @( posedge clk )
 020938     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 2522568   input  logic               clk,   // Clock input
 000246   input  logic               reset, // Sync reset input
 004299   output logic [p_nbits-1:0] q,     // Data output
 004306   input  logic [p_nbits-1:0] d      // Data input
        );
        
 1261161   always_ff @( posedge clk )
 1261161     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 041958   input  logic               clk,   // Clock input
 000082   input  logic               reset, // Sync reset input
 000832   output logic [p_nbits-1:0] q,     // Data output
 001300   input  logic [p_nbits-1:0] d,     // Data input
 000058   input  logic               en     // Enable input
        );
        
 020938   always_ff @( posedge clk )
 000029     if ( en )
 000029       q <= d;
        
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
 020979   input  logic               clk,   // Clock input
 000041   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000560   input  logic               en     // Enable input
        );
        
 010469   always_ff @( posedge clk )
 003478     if ( reset || en )
 003478       q <= reset ? p_reset_value : d;
        
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
        
        
