`default_nettype none
`timescale 1ps/1ps

`include "BranchGlobal.v"


module top(  input logic clk, input logic linetrace );

    logic         reset;
    logic         update_en;
    logic         update_val;
    logic[31:0]   PC;
    logic         prediction;
    logic[5:0]    counter;
    logic[5:0]    correct_counter;


    lab4_branch_BranchGlobal DUT
    (
       .*
    );

    initial begin
        $display("Start of Testbench");
        // Initalize all the signal inital values.
        #20
        reset = 1'b1;
        update_en = 1'b0;
        update_val = 1'b0;
        PC = 32'b0;

        #20
        reset = 1'b0;
        update_en = 1'b1;
        update_val = 1'b1;
        PC = 32'b0;
        assert (prediction == update_val) begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end else begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end

        #20
        update_en = 1'b1;
        update_val = 1'b1;
        PC = 32'b0;
        assert (prediction == update_val) begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end else begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end

        #20
        update_en = 1'b1;
        update_val = 1'b1;
        PC = 32'b0;
        assert (prediction == update_val) begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end else begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end




        #20
        $finish();
    end



endmodule
