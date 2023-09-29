# Lab 2: Pipelined Processor

## Introduction

Design two pipelined processor microarchitectures for the TinyRV2 instruction set architecture. 

Baseline design is a five-stage processor pipeline that uses stalling.

Alternative design is a five-stage processor pipeline that uses bypassing.

Verify the designs using an effective testing strategy.

Perform an evaluation comparing the two implementations.

<!-- ## Table of Contents

- [Section 1](#section-1)
- [Section 2](#section-2)
- [Section 3](#section-3)
  - [Subsection 3.1](#subsection-31)
  - [Subsection 3.2](#subsection-32) -->

## TinyRV2 instrcuctions
    CSR: csrr(done), csrw(done)

    Reg-Reg: add(done), sub, mul, and, or, xor, slt, sltu, sra, srl, sll

    Reg-Imm: addi(next to do), ori, andi, xori, slti, sltiu, srai, srli, slli, lui, auipc

    Memory: lw(done), sw

    Jump: jal, jalr

    Branch: bne(done), beq, blt, bltu, bge, bgeu

## General

The processor is integrated with a test source, test sink, and test memory for testing and evaluation.


__Multi-cycle, baseline, and alternative designs are identical.__

__We will load a program (and potentially some data) into the test memory before resetting the processor.__ 

__Once the processor starts execution,we can send test data into the processor using the test source and the csrr instruction, and we can have the processor verify data using the test sink and the csrw instruction.__



__Make extensive use of the latency insensitive val/rdy microprotocol__

>• __mngr2proc__ : from test source to processor
>• __proc2mngr__ : from processor to test sink
>• __imemreq__ : instruction memory request
>• __imemresp__ : instruction memory response
>• __dmemreq__ : data memory request
>• __dmemresp__ : data memory response

Verilog *structs* are defined in *vc/mem-msgs.v* 

__Memory requests use fields to encode the type (read or write), the address, the length of data in bytes, and the data.__


__Memory responses use fields to encode the type (read or write), the length of data in bytes, and the data. The data field is fixed at 32-bits or four bytes.__

If the length field is one then only the least significant byte of the data field is valid. 

If the length field is two then only the least significant two bytes of the data field are valid. 

If the length field is zero then all four bytes are valid. 

Both memory requests and responses have an eight-bit opaque field. For now you should always set the opaque field to zeros. 

For now you can ignore the test field of memory response messages.

Between when the request is sent and when the response is received,   you can assume that the memory will always take at least one cycle. The response could return in one cycle or 100 cycles. You must also correctly deal with situations where __the memory is not ready to accept a request (val/rdy signals)__.

## Baseline Design

### Concepts

Decompose the baseline design into two separate modules: __Datapath and Control unit__.

Control unit will not use an FSM but will instead use __pipelined control logic__.

Provided Lab code has placed the datapath module, control unit module, and the parent module that connects the datapath and control unit together in __three different files__.

Provided Lab code have already implemented three primary instructions __(add, lw, bne)__.

Provided Lab code have also implemented the __csrr__ (move from the test manager) and __csrw__ (move to the test manager) instructions which are used for testing.

Your datapath module should __instantiate a child module__ for each of the blocks in the datapath diagram.

Add or modify datapath components to support more TinyRV2 instructions.

Use modules in *vclib*.

Provided the __initial implementations__ of the immediate generator unit and the ALU. 

__As you add or modify datapath components, add another row to the control signal table in the control unit and potentially more columns in the control signal table to handle new control signals.__

__The address for a data request (due to a load/store instruction) is sent into the memory system at the end of the X stage, not the beginning of the M stage. This allows the read data to be returned at the end of the M stage.__

__Similarly, the instruction address is sent into the memory system before the F stage. This allows the instruction to be returned at the end of the F stage.__

<!-- __Include bypass queues on output val/rdy interfaces.__

If a bypass queue is empty, then the message “bypasses” the queue and is immediately sent out the corresponding val/rdy interface. If the val/rdy interface is not ready, then we can buffer the message in the bypass queue.

__Note that the queue on the imemreq interface actually requires two elements of buffering__.

__For control hazard, insert a special drop unit where the instruction memory response comes back into the processor.__

When we squash an instruction, we also tell the drop unit to remember to drop the next instruction that is returned from the memory system. -->

__The provided baseline processor already correctly interacts with the memory system.__


### To-Do
Use the variable-latency integer multiplier in the first lab to implement the mul instruction. You can import your multiplier like this:

```verilog
`include "lab1_imul/IntMulAlt.v"
```

Send the request to the multiplier in the D stage and wait for the response in the X stage.

__Carefully manage the val/rdy signals for requests to the multiplier and for responses from the multiplier__

>• __imul.req.val__: This signal is sent from the D stage of the processor to the multiplier. You should factor the D stage’s stall signal into the logic for setting the multiplier’s request val signal, since if the D stage is stalling we do not want to send a request into the multiplier.
• __imul.req.rdy__: This signal is sent from the multiplier back to the D stage of the processor. You should factor the multiplier’s request rdy signal into the ostall logic for the D stage, since if the multiplier is not ready to accept a new request you must originate a stall. You should always originate a stall in D if the multiplier is not ready regardless of what instruction is in the D stage.
• __imul.resp.val__: This signal is sent from the multiplier back to the X stage of the processor. If a mul instruction is in the X stage, then you should factor the multiplier’s response val into the ostall logic for the X stage. If the multiplier has not returned the response, we must wait for the multiplier to finish.
• __imul.resp.rdy__: This signal is sent from the X stage of the processor to the multiplier. You should factor the X stage’s stall signal into the logic for setting the multiplier’s response rdy signal, since if the X stage is stalling we do not want to accept a response from the multiplier.

__Use an incremental development design methodology.__ Add one instruction at a time to baseline processor, test that instruction, ensure it is working, and then move onto the next instruction.

__TO-DO__: __Implementing the instructions in the following order:__ register-register arithmetic instructions, register-immediate instructions, memory instructions, jump instructions, branch instructions.

__Do not waiting until the end to add the mul instruction.__

To add a new instruction to the baseline design, first update DataPath Figure with any changes you need to support the new instruction, update the code for the datapath, update the control signal table in the control unit, update the top-level module, and thoroughly test your instruction before moving onto the next instruction.

__TO-DO__: __Achieve around 13 or so different operations in your ALU.__

__All of these operators are agnostic to whether the inputs are signed or unsigned.__

__However, some instructions will require ALU operations that are specifically designed to treat the inputs as signed values:__ slt (register-register signed-less-than), slti (register-immediate signed-lessthan), sra (shift right arithmetic), blt (branch signed-less-than), and bge (branch signed-greaterthan-or-equal).

The *$signed* system task indicates that a value should be treated as a signed value. The *>>>* Verilog operator is specifically designed for signed-right-shift operations.

## Alternative Design
Once you get your baseline design working and passing all of your tests, you should copy your baseline processor design into ProcAltDpath.v, ProcAltCtrl.v, and ProcAlt.v, and then start working on the alternative design.

__TO-DO__: To add bypassing to the processor, you will need to __add bypass muxes__ to the datapath.

__The goal is not just to pass the tests, but to pass the tests with a fully bypassed datapath.__

__Implementing bypassing does not remove the need to stall in some cases.__

## Testing Strategy
Provided one very basic test for one instruction in TinyRV2. Writing tests for this lab will be very challenging due to both the number of instructions and the number of cases we need to test for each instruction.

Try to initially write tests on the ProcFLMuticycle model. Once these tests are working on the ISA emulator, you can move on to testing the baseline and alternative designs.

Directed testing will be done using short assembly sequences represented as multi-line text files.

__TO-DO__:Implement assembly sequences for each instruction to test basic operation, proper handling of hazards, various input values, and random delays on the test source, sink, and memory.


### Assembly Testing

__TO-DO__: Learn the syntax of writing and runing assembly testing.

__TO-DO__: Write the assembly tests for each instruction.


__Be careful that the data is in little endian.__

### Testing with Sink and Sources
__TO-DO__: Learn the special syntax for specifying the values that should be retrieved from a test source, or the values expected in a test sink.

Provided an example assembly sequence to test the addi instruction.

Provided an example assembly sequence tests the jal instruction.

__TO-DO__: Need to add random delay testing for each instruction you implement.

__TO-DO__: Use line tracing to visualize instructions moving through the pipeline.

__Take an incremental, test-driven design approach.__

__TO-DO__: In addition to the assembly tests, you __must__ also add unit tests for any datapath components you add or modify. So when you add new operations to the ALU, you __must__ add corresponding unit tests to a unit testbench utb_*v.


## Evaluation

__TO-DO__: Use the provided simulator to evaluate two designs.

Use a systematic __testing__ strategy to ensure your design is fully functional __before attempting to use the simulator__.

__TO-DO__: Writing micro benchmarks to evaluate the performance of the processor.



