`default_nettype none
`timescale 1ps/1ps


`include "Mux16.v"
`include "vc/trace.v"




module top (  input logic clk, input logic linetrace );

  logic  [31:0] in0;
  logic  [31:0] in1;
  logic  [31:0] in2;
  logic  [31:0] in3;
  logic  [31:0] in4;
  logic  [31:0] in5;
  logic  [31:0] in6;
  logic  [31:0] in7;
  logic  [31:0] in8;
  logic  [31:0] in9;
  logic  [31:0] in10;
  logic  [31:0] in11;
  logic  [31:0] in12;
  logic  [31:0] in13;
  logic  [31:0] in14;
  logic  [31:0] in15;

  logic  [3:0]  sel;

  logic  [31:0] out;
  
  // Instantiate the unit under test (DUT)

  lab3_cache_Mux16#(32) output_mux
      (
        .in0   (in0),
        .in1   (in1),
        .in2   (in2),
        .in3   (in3),
        .in4   (in4),
        .in5   (in5),
        .in6   (in6),
        .in7   (in7),
        .in8   (in8),
        .in9   (in9),
        .in10  (in10),
        .in11  (in11),
        .in12  (in12),
        .in13  (in13),
        .in14  (in14),
        .in15  (in15),
        .sel   (sel),
        .out   (out)
      );

  initial begin
    // Initialize the test inputs
    in0 = 32'h00000000;
    in1 = 32'h00000000;
    sel  = 4'd0;
    in0  = 32'h00000000;
    in1  = 32'h00000000;
    in2  = 32'h00000000;
    in3  = 32'h00000000;
    in4  = 32'h00000000;
    in5  = 32'h00000000;
    in6  = 32'h00000000;
    in7  = 32'h00000000;
    in8  = 32'h00000000;
    in9  = 32'h00000000;
    in10 = 32'h00000000;
    in11 = 32'h00000000;
    in12 = 32'h00000000;
    in13 = 32'h00000000;
    in14 = 32'h00000000;
    in15 = 32'h00000000;
    #10; // Wait for 10 time units

    in0 = 32'h00000000;
    in1 = 32'h00000000;
    in0  = 32'h00000000;
    in1  = 32'h00000000;
    in2  = 32'h00000000;
    in3  = 32'h00000000;
    in4  = 32'h00000000;
    in5  = 32'h00000000;
    in6  = 32'h00000000;
    in7  = 32'h00000000;
    in8  = 32'h00000000;
    in9  = 32'h00000000;
    in10 = 32'h00000000;
    in11 = 32'h00000000;
    in12 = 32'h00000000;
    in13 = 32'h00000000;
    in14 = 32'h00000000;
    in15 = 32'h0000F000;
    sel  = 4'd15; 
    #10; 

    // Check the result
    assert(out != 32'h0000F000) begin
      $display("Error in Test1. Expected %h, got %h",32'h0000F000 , out);fail(); $finish();
    end else begin
      $display("Test 1 Passed.");pass();
    end

    in0  = 32'hFFFFFFFF;
    in1  = 32'hFFFFFFFF;
    in0  = 32'hFFFFFFFF;
    in1  = 32'hFFFFFFFF;
    in2  = 32'hFFFFFFFF;
    in3  = 32'hFFFFFFFF;
    in4  = 32'hFFFFFFFF;
    in5  = 32'hFFFFFFFF;
    in6  = 32'hFFFFFFFF;
    in7  = 32'hFFFFFFFF;
    in8  = 32'hFFFFFFFF;
    in9  = 32'hFFFFFFFF;
    in10 = 32'hFFFFFFFF;
    in11 = 32'hFFFFFFFF;
    in12 = 32'hFFFFFFFF;
    in13 = 32'hFFFFFFFF;
    in14 = 32'hFFFFFFFF;
    in15 = 32'hFFFFFFFF;
    sel  = 4'd0; 

    #10

    // Check the result
    assert(out != 32'hFFFFFFFF) begin
      $display("Error in Test2. Expected %h, got %h", 32'hFFFFFFFF , out);fail(); $finish();
    end else begin
      $display("Test 2 Passed.");pass();
    end

    // Test Case 3
    in0  = 32'h11111111;
    in1  = 32'h22222222;
    in2  = 32'h33333333;
    in3  = 32'h44444444;
    in4  = 32'h55555555;
    in5  = 32'h66666666;
    in6  = 32'h77777777;
    in7  = 32'h88888888;
    in8  = 32'h99999999;
    in9  = 32'hAAAAAAAA;
    in10 = 32'hBBBBBBBB;
    in11 = 32'hCCCCCCCC;
    in12 = 32'hDDDDDDDD;
    in13 = 32'hEEEEEEEE;
    in14 = 32'hFFFFFFFF;
    in15 = 32'hF0F0F0F0;
    sel  = 4'd1;
    #10;
    assert(out != 32'h22222222) begin
        $display("Error in Test3. Expected %h, got %h", 32'h22222222, out); fail(); $finish();
    end else begin
        $display("Test 3 Passed."); pass();
    end

    // Test Case 4
    in0  = 32'h0F0F0F0F;
    in1  = 32'h1F1F1F1F;
    in2  = 32'h2F2F2F2F;
    in3  = 32'h3F3F3F3F;
    in4  = 32'h4F4F4F4F;
    in5  = 32'h5F5F5F5F;
    in6  = 32'h6F6F6F6F;
    in7  = 32'h7F7F7F7F;
    in8  = 32'h8F8F8F8F;
    in9  = 32'h9F9F9F9F;
    in10 = 32'hAFAFAFAF;
    in11 = 32'hBFBFBFBF;
    in12 = 32'hCFCFCFCF;
    in13 = 32'hDFDFDFDF;
    in14 = 32'hEFEFEFEF;
    in15 = 32'hFFFFFFFF;
    sel  = 4'd2;
    #10;
    assert(out != 32'h2F2F2F2F) begin
        $display("Error in Test4. Expected %h, got %h", 32'h2F2F2F2F, out); fail(); $finish();
    end else begin
        $display("Test 4 Passed."); pass();
    end

    // Test Case 5
    in0  = 32'h00FF00FF;
    in1  = 32'hFF00FF00;
    in2  = 32'h0F0F0F0F;
    in3  = 32'hF0F0F0F0;
    in4  = 32'h33333333;
    in5  = 32'h44444444;
    in6  = 32'h55555555;
    in7  = 32'h66666666;
    in8  = 32'h77777777;
    in9  = 32'h88888888;
    in10 = 32'h99999999;
    in11 = 32'hAAAAAAAA;
    in12 = 32'hBBBBBBBB;
    in13 = 32'hCCCCCCCC;
    in14 = 32'hDDDDDDDD;
    in15 = 32'hEEEEEEEE;
    sel  = 4'd3;
    #10;
    assert(out != 32'hF0F0F0F0)  begin
        $display("Error in Test5. Expected %h, got %h", 32'hF0F0F0F0, out); fail(); $finish();
    end else begin
        $display("Test 5 Passed."); pass();
    end

    // Test Case 6
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd4;
    #10;
    assert(out != 32'hF0F0F0F0) begin
        $display("Error in Test6. Expected %h, got %h", 32'hF0F0F0F0, out); fail(); $finish();
    end else begin
        $display("Test 6 Passed."); pass();
    end

    
    #20
    // Test Case 7
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd5;
    #10;
    assert(out != 32'h0F0F0F0F) begin
        $display("Error in Test7. Expected %h, got %h", 32'h0F0F0F0F, out); fail(); $finish();
    end else begin
        $display("Test 7 Passed."); pass();
    end


    #20
    // Test Case 8
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd6;
    #10;
    assert(out != 32'h3F3F3F3F) begin
        $display("Error in Test8. Expected %h, got %h", 32'h3F3F3F3F, out); fail(); $finish();
    end else begin
        $display("Test 8 Passed."); pass();
    end

    #20
    // Test Case 9
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd7;
    #10;
    assert(out != 32'h4C4C4C4C) begin
        $display("Error in Test9. Expected %h, got %h", 32'h4C4C4C4C, out); fail(); $finish();
    end else begin
        $display("Test 9 Passed."); pass();
    end

    #20
    // Test Case 10
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd8;
    #10;
    assert(out != 32'h5A5A5A5A) begin
        $display("Error in Test10. Expected %h, got %h", 32'h5A5A5A5A, out); fail(); $finish();
    end else begin
        $display("Test 10 Passed."); pass();
    end

    #20
    // Test Case 11
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd9;
    #10;
    assert(out != 32'h6E6E6E6E) begin
        $display("Error in Test11. Expected %h, got %h", 32'h6E6E6E6E, out); fail(); $finish();
    end else begin
        $display("Test 11 Passed."); pass();
    end

    #20
    // Test Case 12
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd10;
    #10;
    assert(out != 32'h7D7D7D7D) begin
        $display("Error in Test12. Expected %h, got %h", 32'h7D7D7D7D, out); fail(); $finish();
    end else begin
        $display("Test 12 Passed."); pass();
    end

    #20
    // Test Case 13
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd11;
    #10;
    assert(out != 32'h8B8B8B8B) begin
        $display("Error in Test13. Expected %h, got %h", 32'h8B8B8B8B, out); fail(); $finish();
    end else begin
        $display("Test 13 Passed."); pass();
    end

    #20
    // Test Case 14
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd12;
    #10;
    assert(out != 32'h9A9A9A9A) begin
        $display("Error in Test14. Expected %h, got %h", 32'h9A9A9A9A, out); fail(); $finish();
    end else begin
        $display("Test 14 Passed."); pass();
    end

    #20
    // Test Case 15
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd13;
    #10;
    assert(out != 32'hBEBEBEBE) begin
        $display("Error in Test15. Expected %h, got %h", 32'hBEBEBEBE, out); fail(); $finish();
    end else begin
        $display("Test 15 Passed."); pass();
    end

    #20
    // Test Case 16
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd14;
    #10;
    assert(out != 32'hCDCDCDCD) begin
        $display("Error in Test16. Expected %h, got %h", 32'hCDCDCDCD, out); fail(); $finish();
    end else begin
        $display("Test 16 Passed."); pass();
    end

    #20
    // Test Case 17
    in0  = 32'hF00FF00F;
    in1  = 32'h0FF00FF0;
    in2  = 32'h00FF00FF;
    in3  = 32'hFF00FF00;
    in4  = 32'hF0F0F0F0;
    in5  = 32'h0F0F0F0F;
    in6  = 32'h3F3F3F3F;
    in7  = 32'h4C4C4C4C;
    in8  = 32'h5A5A5A5A;
    in9  = 32'h6E6E6E6E;
    in10 = 32'h7D7D7D7D;
    in11 = 32'h8B8B8B8B;
    in12 = 32'h9A9A9A9A;
    in13 = 32'hBEBEBEBE;
    in14 = 32'hCDCDCDCD;
    in15 = 32'hDFDFDFDF;
    sel  = 4'd15;
    #10;
    assert(out != 32'hDFDFDFDF) begin
        $display("Error in Test17. Expected %h, got %h", 32'hDFDFDFDF, out); fail(); $finish();
    end else begin
        $display("Test 17 Passed."); pass();
    end



    #10



    // Finish the simulation
    $finish();

  end

endmodule
