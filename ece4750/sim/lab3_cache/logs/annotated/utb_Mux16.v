//      // verilator_coverage annotation
        `default_nettype none
        `timescale 1ps/1ps
        
        
        `include "Mux16.v"
        `include "vc/trace.v"
        
        
        
        
%000000 module top (  input logic clk, input logic linetrace );
        
 000001   logic  [31:0] in0;
 000001   logic  [31:0] in1;
 000001   logic  [31:0] in2;
 000002   logic  [31:0] in3;
 000002   logic  [31:0] in4;
 000001   logic  [31:0] in5;
 000001   logic  [31:0] in6;
 000002   logic  [31:0] in7;
 000002   logic  [31:0] in8;
 000001   logic  [31:0] in9;
 000001   logic  [31:0] in10;
 000001   logic  [31:0] in11;
 000001   logic  [31:0] in12;
 000001   logic  [31:0] in13;
 000001   logic  [31:0] in14;
 000001   logic  [31:0] in15;
        
 000003   logic  [3:0]  sel;
        
 000005   logic  [31:0] out;
          
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
        
 000001   initial begin
            // Initialize the test inputs
 000001     in0 = 32'h00000000;
 000001     in1 = 32'h00000000;
 000001     sel  = 4'd0;
 000001     in0  = 32'h00000000;
 000001     in1  = 32'h00000000;
 000001     in2  = 32'h00000000;
 000001     in3  = 32'h00000000;
 000001     in4  = 32'h00000000;
 000001     in5  = 32'h00000000;
 000001     in6  = 32'h00000000;
 000001     in7  = 32'h00000000;
 000001     in8  = 32'h00000000;
 000001     in9  = 32'h00000000;
 000001     in10 = 32'h00000000;
 000001     in11 = 32'h00000000;
 000001     in12 = 32'h00000000;
 000001     in13 = 32'h00000000;
 000001     in14 = 32'h00000000;
 000001     in15 = 32'h00000000;
 000001     #10; // Wait for 10 time units
        
 000001     in0 = 32'h00000000;
 000001     in1 = 32'h00000000;
 000001     in0  = 32'h00000000;
 000001     in1  = 32'h00000000;
 000001     in2  = 32'h00000000;
 000001     in3  = 32'h00000000;
 000001     in4  = 32'h00000000;
 000001     in5  = 32'h00000000;
 000001     in6  = 32'h00000000;
 000001     in7  = 32'h00000000;
 000001     in8  = 32'h00000000;
 000001     in9  = 32'h00000000;
 000001     in10 = 32'h00000000;
 000001     in11 = 32'h00000000;
 000001     in12 = 32'h00000000;
 000001     in13 = 32'h00000000;
 000001     in14 = 32'h00000000;
 000001     in15 = 32'h0000F000;
 000001     sel  = 4'd15; 
 000001     #10; 
        
            // Check the result
 000001     assert(out != 32'h0000F000) begin
 000001       $display("Error in Test1. Expected %h, got %h",32'h0000F000 , out);fail(); $finish();
 000001     end else begin
 000001       $display("Test 1 Passed.");pass();
            end
        
 000001     in0  = 32'hFFFFFFFF;
 000001     in1  = 32'hFFFFFFFF;
 000001     in0  = 32'hFFFFFFFF;
 000001     in1  = 32'hFFFFFFFF;
 000001     in2  = 32'hFFFFFFFF;
 000001     in3  = 32'hFFFFFFFF;
 000001     in4  = 32'hFFFFFFFF;
 000001     in5  = 32'hFFFFFFFF;
 000001     in6  = 32'hFFFFFFFF;
 000001     in7  = 32'hFFFFFFFF;
 000001     in8  = 32'hFFFFFFFF;
 000001     in9  = 32'hFFFFFFFF;
 000001     in10 = 32'hFFFFFFFF;
 000001     in11 = 32'hFFFFFFFF;
 000001     in12 = 32'hFFFFFFFF;
 000001     in13 = 32'hFFFFFFFF;
 000001     in14 = 32'hFFFFFFFF;
 000001     in15 = 32'hFFFFFFFF;
 000001     sel  = 4'd0; 
        
 000001     #10
        
            // Check the result
 000001     assert(out != 32'hFFFFFFFF) begin
 000001       $display("Error in Test2. Expected %h, got %h", 32'hFFFFFFFF , out);fail(); $finish();
 000001     end else begin
 000001       $display("Test 2 Passed.");pass();
            end
        
            // Test Case 3
 000001     in0  = 32'h11111111;
 000001     in1  = 32'h22222222;
 000001     in2  = 32'h33333333;
 000001     in3  = 32'h44444444;
 000001     in4  = 32'h55555555;
 000001     in5  = 32'h66666666;
 000001     in6  = 32'h77777777;
 000001     in7  = 32'h88888888;
 000001     in8  = 32'h99999999;
 000001     in9  = 32'hAAAAAAAA;
 000001     in10 = 32'hBBBBBBBB;
 000001     in11 = 32'hCCCCCCCC;
 000001     in12 = 32'hDDDDDDDD;
 000001     in13 = 32'hEEEEEEEE;
 000001     in14 = 32'hFFFFFFFF;
 000001     in15 = 32'hF0F0F0F0;
 000001     sel  = 4'd1;
 000001     #10;
 000001     assert(out != 32'h22222222) begin
 000001         $display("Error in Test3. Expected %h, got %h", 32'h22222222, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 3 Passed."); pass();
            end
        
            // Test Case 4
 000001     in0  = 32'h0F0F0F0F;
 000001     in1  = 32'h1F1F1F1F;
 000001     in2  = 32'h2F2F2F2F;
 000001     in3  = 32'h3F3F3F3F;
 000001     in4  = 32'h4F4F4F4F;
 000001     in5  = 32'h5F5F5F5F;
 000001     in6  = 32'h6F6F6F6F;
 000001     in7  = 32'h7F7F7F7F;
 000001     in8  = 32'h8F8F8F8F;
 000001     in9  = 32'h9F9F9F9F;
 000001     in10 = 32'hAFAFAFAF;
 000001     in11 = 32'hBFBFBFBF;
 000001     in12 = 32'hCFCFCFCF;
 000001     in13 = 32'hDFDFDFDF;
 000001     in14 = 32'hEFEFEFEF;
 000001     in15 = 32'hFFFFFFFF;
 000001     sel  = 4'd2;
 000001     #10;
 000001     assert(out != 32'h2F2F2F2F) begin
 000001         $display("Error in Test4. Expected %h, got %h", 32'h2F2F2F2F, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 4 Passed."); pass();
            end
        
            // Test Case 5
 000001     in0  = 32'h00FF00FF;
 000001     in1  = 32'hFF00FF00;
 000001     in2  = 32'h0F0F0F0F;
 000001     in3  = 32'hF0F0F0F0;
 000001     in4  = 32'h33333333;
 000001     in5  = 32'h44444444;
 000001     in6  = 32'h55555555;
 000001     in7  = 32'h66666666;
 000001     in8  = 32'h77777777;
 000001     in9  = 32'h88888888;
 000001     in10 = 32'h99999999;
 000001     in11 = 32'hAAAAAAAA;
 000001     in12 = 32'hBBBBBBBB;
 000001     in13 = 32'hCCCCCCCC;
 000001     in14 = 32'hDDDDDDDD;
 000001     in15 = 32'hEEEEEEEE;
 000001     sel  = 4'd3;
 000001     #10;
 000001     assert(out != 32'hF0F0F0F0)  begin
 000001         $display("Error in Test5. Expected %h, got %h", 32'hF0F0F0F0, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 5 Passed."); pass();
            end
        
            // Test Case 6
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd4;
 000001     #10;
 000001     assert(out != 32'hF0F0F0F0) begin
 000001         $display("Error in Test6. Expected %h, got %h", 32'hF0F0F0F0, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 6 Passed."); pass();
            end
        
            
 000001     #20
            // Test Case 7
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd5;
 000001     #10;
 000001     assert(out != 32'h0F0F0F0F) begin
 000001         $display("Error in Test7. Expected %h, got %h", 32'h0F0F0F0F, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 7 Passed."); pass();
            end
        
        
 000001     #20
            // Test Case 8
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd6;
 000001     #10;
 000001     assert(out != 32'h3F3F3F3F) begin
 000001         $display("Error in Test8. Expected %h, got %h", 32'h3F3F3F3F, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 8 Passed."); pass();
            end
        
 000001     #20
            // Test Case 9
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd7;
 000001     #10;
 000001     assert(out != 32'h4C4C4C4C) begin
 000001         $display("Error in Test9. Expected %h, got %h", 32'h4C4C4C4C, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 9 Passed."); pass();
            end
        
 000001     #20
            // Test Case 10
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd8;
 000001     #10;
 000001     assert(out != 32'h5A5A5A5A) begin
 000001         $display("Error in Test10. Expected %h, got %h", 32'h5A5A5A5A, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 10 Passed."); pass();
            end
        
 000001     #20
            // Test Case 11
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd9;
 000001     #10;
 000001     assert(out != 32'h6E6E6E6E) begin
 000001         $display("Error in Test11. Expected %h, got %h", 32'h6E6E6E6E, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 11 Passed."); pass();
            end
        
 000001     #20
            // Test Case 12
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd10;
 000001     #10;
 000001     assert(out != 32'h7D7D7D7D) begin
 000001         $display("Error in Test12. Expected %h, got %h", 32'h7D7D7D7D, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 12 Passed."); pass();
            end
        
 000001     #20
            // Test Case 13
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd11;
 000001     #10;
 000001     assert(out != 32'h8B8B8B8B) begin
 000001         $display("Error in Test13. Expected %h, got %h", 32'h8B8B8B8B, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 13 Passed."); pass();
            end
        
 000001     #20
            // Test Case 14
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd12;
 000001     #10;
 000001     assert(out != 32'h9A9A9A9A) begin
 000001         $display("Error in Test14. Expected %h, got %h", 32'h9A9A9A9A, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 14 Passed."); pass();
            end
        
 000001     #20
            // Test Case 15
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd13;
 000001     #10;
 000001     assert(out != 32'hBEBEBEBE) begin
 000001         $display("Error in Test15. Expected %h, got %h", 32'hBEBEBEBE, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 15 Passed."); pass();
            end
        
 000001     #20
            // Test Case 16
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd14;
 000001     #10;
 000001     assert(out != 32'hCDCDCDCD) begin
 000001         $display("Error in Test16. Expected %h, got %h", 32'hCDCDCDCD, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 16 Passed."); pass();
            end
        
 000001     #20
            // Test Case 17
 000001     in0  = 32'hF00FF00F;
 000001     in1  = 32'h0FF00FF0;
 000001     in2  = 32'h00FF00FF;
 000001     in3  = 32'hFF00FF00;
 000001     in4  = 32'hF0F0F0F0;
 000001     in5  = 32'h0F0F0F0F;
 000001     in6  = 32'h3F3F3F3F;
 000001     in7  = 32'h4C4C4C4C;
 000001     in8  = 32'h5A5A5A5A;
 000001     in9  = 32'h6E6E6E6E;
 000001     in10 = 32'h7D7D7D7D;
 000001     in11 = 32'h8B8B8B8B;
 000001     in12 = 32'h9A9A9A9A;
 000001     in13 = 32'hBEBEBEBE;
 000001     in14 = 32'hCDCDCDCD;
 000001     in15 = 32'hDFDFDFDF;
 000001     sel  = 4'd15;
 000001     #10;
 000001     assert(out != 32'hDFDFDFDF) begin
 000001         $display("Error in Test17. Expected %h, got %h", 32'hDFDFDFDF, out); fail(); $finish();
 000001     end else begin
 000001         $display("Test 17 Passed."); pass();
            end
        
        
        
 000001     #10
        
        
        
            // Finish the simulation
 000001     $finish();
        
          end
        
        endmodule
        
