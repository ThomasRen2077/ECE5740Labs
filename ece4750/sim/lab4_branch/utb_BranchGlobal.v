`default_nettype none
`timescale 1ps/1ps
`include "BranchGlobal.v"


module top(  input logic clk, input logic linetrace );

    logic         reset;
    logic         update_en;
    logic         update_val;
    logic[31:0]   PC;
    logic         prediction;

    lab4_branch_BranchGlobal DUT
    (
       .*
    );

    initial begin
        $display("Start of Testbench");
        // Initalize all the signal inital values.
        #20
        $finish();
    end



endmodule
