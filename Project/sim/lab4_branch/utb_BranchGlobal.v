`default_nettype none
`timescale 1ps/1ps

`include "BranchGlobal.v"
`include "vc/trace.v"

module top(  input logic clk, input logic linetrace );

    logic         reset;
    logic         update_en;
    logic         update_val;
    logic[31:0]   PC;
    logic         prediction;
    logic[5:0]    counter;
    logic[5:0]    correct_counter;
    logic[31:0]   my_pc;
    logic         my_update_en;
    logic         my_update_val;
    logic[31:0]   shift_factor;


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
        assert (prediction != update_val) begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end else begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end

        #20
        update_en = 1'b1;
        update_val = 1'b1;
        PC = 32'b0;
        assert (prediction != update_val) begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end else begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end

        #20
        update_en = 1'b1;
        update_val = 1'b1;
        PC = 32'b0;
        assert (prediction != update_val) begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end else begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end

        

        // Test Case 1

        $display("Test Case: Loop with no branches");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = x*4;
            my_update_en = 1'b0;
            my_update_val = 1'b1;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 2

        $display("Test Case: Loop with a single branch, always taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = 32'b100;
            my_update_en = 1'b1;
            my_update_val = 1'b1;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 3

        $display("Test Case: Loop with a single branch, always not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = 32'b1000;
            my_update_en = 1'b1;
            my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 4

        $display("Test Case: Loop with a single branch, alternating between taken and not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = 32'b10000;
            my_update_en = 1'b1;
            if (x % 2 == 0) my_update_val = 1'b1;
            else            my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 5

        $display("Test Case: Loop with a single branch, with pattern ABBA");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 12; x++ ) begin
            my_pc = 32'b1000;
            my_update_en = 1'b1;
            if (x % 4 == 0)      my_update_val = 1'b1;
            else if (x % 4 == 1) my_update_val = 1'b0;
            else if (x % 4 == 2) my_update_val = 1'b0;
            else                 my_update_val = 1'b1;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 6

        $display("Test Case: Nested loop with no branches");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 4; x++ ) begin
            for (integer y = 0; y < 4; y++) begin
                my_pc = 4*x + y;
                my_update_en = 1'b0;
                my_update_val = 1'bx;
                test_task(my_pc, my_update_en, my_update_val);
            end 
        end

        // Test Case 7

        $display("Test Case: Nested loop with branches");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 4; x++ ) begin
            for (integer y = 0; y < 4; y++) begin
                my_pc = 4*x + y;
                my_update_en = 1'b1;
                if ((4*x + y) % 2 == 0) my_update_val = 1'b1;
                else            my_update_val = 1'b0;
                test_task(my_pc, my_update_en, my_update_val);
            end 
        end

        // Test Case 8

        $display("Test Case: A series of branches all taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = x*4;
            my_update_en = 1'b1;
            my_update_val = 1'b1;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 9

        $display("Test Case: A series of branches all not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = x*4;
            my_update_en = 1'b1;
            my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 10

        $display("Test Case: A series of branches alternating between taken and not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = x*4;
            my_update_en = 1'b1;
            if (x % 2 == 0) my_update_val = 1'b1;
            else            my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 11

        $display("Test Case: A series of branches with pattern ABAB");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 12; x++ ) begin
            my_pc = x*4;
            my_update_en = 1'b1;
            if (x % 4 == 0)      my_update_val = 1'b1;
            else if (x % 4 == 1) my_update_val = 1'b0;
            else if (x % 4 == 2) my_update_val = 1'b1;
            else                 my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 12

        $display("Test Case: Branches with conflict in PHT");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        shift_factor = 32'b10000;
        my_pc = 32'b1100;
        for( integer x = 0; x < 10; x++ ) begin
            my_pc = my_pc + (shift_factor << x);
            my_update_en = 1'b1;
            my_update_val = 1'b0;
            test_task(my_pc, my_update_en, my_update_val);
        end

        // Test Case 13

        $display("Test Case: Loop with N-branches, all taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        
        for( integer x = 0; x < 10; x++ ) begin
            my_pc = '0;
            for( integer y = 0; y < 4; y++ ) begin
                my_pc = my_pc + 4;
                my_update_en = 1'b1;
                my_update_val = 1'b1;
                test_task(my_pc, my_update_en, my_update_val);
            end
        end

        // Test Case 14

        $display("Test Case: Loop with N-branches, all not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        
        for( integer x = 0; x < 10; x++ ) begin
            my_pc = '0;
            for( integer y = 0; y < 4; y++ ) begin
                my_pc = my_pc + 4;
                my_update_en = 1'b1;
                my_update_val = 1'b0;
                test_task(my_pc, my_update_en, my_update_val);
            end
        end

        // Test Case 15

        $display("Test Case: Loop with N-branches, alternating between taken and not taken");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        
        for( integer x = 0; x < 10; x++ ) begin
            my_pc = '0;
            for( integer y = 0; y < 4; y++ ) begin
                my_pc = my_pc + 4;
                my_update_en = 1'b1;
                if (y % 2 == 0) my_update_val = 1'b1;
                else            my_update_val = 1'b0;
                test_task(my_pc, my_update_en, my_update_val);
            end
        end

        // Test Case 16

        $display("Test Case: Loop with N-branches with pattern AAAB");

        reset = 1'b1;

        #20;

        reset = 1'b0;

        for( integer x = 0; x < 10; x++ ) begin
            my_pc = '0;
            for( integer y = 0; y < 8; y++ ) begin
                my_pc = my_pc + 4;
                my_update_en = 1'b1;
                if (y % 4 == 0)      my_update_val = 1'b1;
                else if (y % 4 == 1) my_update_val = 1'b1;
                else if (y % 4 == 2) my_update_val = 1'b1;
                else                 my_update_val = 1'b0;
                test_task(my_pc, my_update_en, my_update_val);
            end
        end




        #20
        $finish();


    

    end

    task test_task( input [31:0] PC_f,  input update_en_f, input update_val_f);
    begin

        // Change inputs at the negedge
        @(negedge clk);

        // Set inputs
        update_en = update_en_f;
        update_val = update_val_f;
        PC = PC_f;

        
        
        // Check the result
        assert (prediction != update_val) begin
            $display("Incorrect Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);fail();
        end else begin
            $display("Correct Prediction. PC: %h, resolution: %b, prediction: %b", PC, update_val, prediction);pass();
        end

        @(negedge clk);
    end
    endtask



endmodule
