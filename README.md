# Lab 2: Pipelined Processor

## Introduction

Design two pipelined processor microarchitectures for the TinyRV2 instruction set architecture. 

Baseline design is a five-stage processor pipeline that uses stalling.

Alternative design is a five-stage processor pipeline that uses bypassing.

Verify the designs using an effective testing strategy.

Perform an evaluation comparing the two implementations.


## TinyRV2 instrcuctions
    CSR: csrr(done), csrw(done)

    Reg-Reg: add(done), sub(done), mul(difficult), and(done), or, xor, slt, sltu, sra, srl, sll

    Reg-Imm: addi(done), ori, andi(done), xori, slti, sltiu, srai, srli, slli, lui, auipc

    Memory: lw(done), sw

    Jump: jal, jalr

    Branch: bne(done), beq, blt, bltu, bge, bgeu

## General Concepts

The processor is integrated with a test source, test sink, and test memory.

We will load a program (and potentially some data) into the test memory before resetting the processor. 

Once the processor starts execution,we can send test data into the processor using the test source and the csrr instruction, and we can have the processor verify data using the test sink and the csrw instruction.



Make extensive use of the latency insensitive val/rdy microprotocol.

>• __mngr2proc__ : from test source to processor

>• __proc2mngr__ : from processor to test sink

>• __imemreq__ : instruction memory request

>• __imemresp__ : instruction memory response

>• __dmemreq__ : data memory request

>• __dmemresp__ : data memory response

*Verilog structs are defined in vc/mem-msgs.v* 

Memory requests and memory responses use fields to encode the type (read or write), the address, the length of data in bytes, and the data.


The data field is fixed at 32-bits or four bytes. If the length field is one then only the least significant byte of the data field is valid. If the length field is two then only the least significant two bytes of the data field are valid. If the length field is zero then all four bytes are valid. 

Both memory requests and responses have an eight-bit opaque field. For now you should always set the opaque field to zeros. 

Memory response messages have a test field, for now you can ignore the test field.

Between when the request is sent and when the response is received,   you can assume that the memory will always take at least one cycle, which means the response could return in one cycle or 100 cycles. You must correctly deal with situations where the memory is not ready to accept a request (val/rdy signals).

The address for a data request (due to a load/store instruction) is sent into the memory system at the end of the X stage, not the beginning of the M stage. This allows the read data to be returned at the end of the M stage.

Similarly, the instruction address is sent into the memory system before the F stage. This allows the instruction to be returned at the end of the F stage.

Bypass queues are included on output val/rdy interfaces. If a bypass queue is empty, then the message “bypasses” the queue and is immediately sent out the corresponding val/rdy interface. If the val/rdy interface is not ready, then we can buffer the message in the bypass queue. Note that the queue on the imemreq interface actually requires two elements of buffering.

For control hazard,  a __drop unit__ is inserted where the instruction memory response comes back into the processor. When we squash an instruction, we also tell the __drop unit__ to remember to drop the next instruction that is returned from the memory system.

The provided baseline processor already correctly interacts with the memory system.

## Baseline Design

### Setup

Decompose the baseline design into two separate modules: __Datapath and Control unit__.

Control unit will not use an FSM but will instead use __pipelined control logic__.

Provided Lab code has placed the datapath module, control unit module, and the parent module that connects the datapath and control unit together in three different files.

Provided Lab code have already implemented three primary instructions (__add, lw, bne__).

Provided Lab code have also implemented the __csrr__ (move from the test manager) and __csrw__ (move to the test manager) instructions which are used for testing.

Use modules in __*vclib*__.

Provided the initial implementations of the __immediate generator unit__ and the __ALU__. 

As you add or modify datapath components, add another row to the __control signal table__ in the control unit and potentially more columns in the control signal table to handle new control signals.

Use an __incremental development design methodology__. Add one instruction at a time to baseline processor, test that instruction, ensure it is working, and then move onto the next instruction.

### Implementation
Use the variable-latency integer multiplier in the first lab to implement the mul instruction. You can import your multiplier like this:

```verilog
`include "lab1_imul/IntMulAlt.v"
```

Send the request to the multiplier in the D stage and wait for the response in the X stage.

Carefully manage the val/rdy signals for requests to the multiplier and for responses from the multiplier.

>• __imul.req.val__: This signal is sent from the D stage of the processor to the multiplier. You should factor the D stage’s stall signal into the logic for setting the multiplier’s request val signal, since if the D stage is stalling we do not want to send a request into the multiplier.

>• __imul.req.rdy__: This signal is sent from the multiplier back to the D stage of the processor. You should factor the multiplier’s request rdy signal into the ostall logic for the D stage, since if the multiplier is not ready to accept a new request you must originate a stall. You should always originate a stall in D if the multiplier is not ready regardless of what instruction is in the D stage.

>• __imul.resp.val__: This signal is sent from the multiplier back to the X stage of the processor. If a mul instruction is in the X stage, then you should factor the multiplier’s response val into the ostall logic for the X stage. If the multiplier has not returned the response, we must wait for the multiplier to finish.

>• __imul.resp.rdy__: This signal is sent from the X stage of the processor to the multiplier. You should factor the X stage’s stall signal into the logic for setting the multiplier’s response rdy signal, since if the X stage is stalling we do not want to accept a response from the multiplier.



__TO-DO: Implementing the instructions in the following order: register-register arithmetic instructions, register-immediate instructions, memory instructions, jump instructions, branch instructions.__

To add a new instruction to the baseline design, first update DataPath Figure with any changes you need to support the new instruction, update the code for the datapath, update the control signal table in the control unit, update the top-level module, and thoroughly test your instruction before moving onto the next instruction.

__TO-DO__: __Achieve around 13 or so different operations in your ALU.__

All of these operators are agnostic to whether the inputs are signed or unsigned.

However, some instructions will require ALU operations that are specifically designed to treat the inputs as signed values: slt (register-register signed-less-than), slti (register-immediate signed-lessthan), sra (shift right arithmetic), blt (branch signed-less-than), and bge (branch signed-greaterthan-or-equal).

The *$signed* system task indicates that a value should be treated as a signed value. The *>>>* Verilog operator is specifically designed for signed-right-shift operations.

## Alternative Design
Once you get your baseline design working and passing all of your tests, you should copy your baseline processor design into ProcAltDpath.v, ProcAltCtrl.v, and ProcAlt.v, and then start working on the alternative design.

Pass the tests with __a fully bypassed datapath__.

Implementing bypassing does not remove the need to stall in some cases.

__TO-DO: To add bypassing to the processor, you will need to add bypass muxes to the datapath.__



## Testing Strategy
Provided one very basic test for one instruction in TinyRV2. Writing tests for this lab will be very challenging due to both the number of instructions and the number of cases we need to test for each instruction.

Try to initially write tests on the ProcFLMuticycle model. Once these tests are working on the ISA emulator, you can move on to testing the baseline and alternative designs.

Directed testing will be done using short assembly sequences represented as multi-line text files.

__TO-DO:Implement assembly sequences for each instruction to test basic operation, proper handling of hazards, various input values, and random delays on the test source, sink, and memory.__


### Assembly Testing

__TO-DO: Learn the syntax of writing and runing assembly testing.__

__TO-DO: Write the assembly tests for each instruction.__


Be careful that the data is in little endian.

Take an incremental, test-driven design approach.

### Testing with Sink and Sources
__TO-DO: Learn the special syntax for specifying the values that should be retrieved from a test source, or the values expected in a test sink.__

Provided an example assembly sequence to test the addi instruction.

Provided an example assembly sequence tests the jal instruction.

__TO-DO: Need to add random delay testing for each instruction you implement.__

__TO-DO: Use line tracing to visualize instructions moving through the pipeline.__

__TO-DO: In addition to the assembly tests, you must also add unit tests for any datapath components you add or modify. So when you add new operations to the ALU, you must add corresponding unit tests to a unit testbench.__






__Question: How to add random-delay testing to each instruction? (ED #321)__

__Question: How to write unit test code for added/modified unit?(To be confirmed)__



## Evaluation

Your design should be fully tested before evaluation.

__TO-DO: Use the provided simulator to evaluate two designs.__

__TO-DO: Writing micro benchmarks to evaluate the performance of the processor.__




__Question1: What is benchmark and microbenchmark? (.hex machine code?)__

__Question2: What should be write in both of them?__



