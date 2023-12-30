# Lab 2: Pipelined Processor

## Introduction

Designed two pipelined processor microarchitectures for the TinyRV2 instruction set architecture.

Baseline design is a five-stage processor pipeline that uses stalling.

Alternative design is a five-stage processor pipeline that uses bypassing.

## Supported TinyRV2 instrcuctions

    CSR: csrr(done), csrw(done)

    Reg-Reg: add(done), sub(done), mul(done), and(done), or(done), xor(done), slt(done), sltu(done), sra(done), srl(done), sll(done)

    Reg-Imm: addi(done), ori, andi(done), xori(done), slti(done), sltiu(done), srai(done), srli(done), slli(done), lui(done), auipc(done)

    Memory: lw(done), sw(done)

    Jump: jal(done), jalr(done)

    Branch: bne(done), beq(done), blt(done), bltu(done), bge(done), bgeu(done)

## Baseline Design

### Setup

Decomposed the baseline design into two separate modules: **Datapath and Control unit**.

Control unit did not use an FSM but instead used **pipelined control logic**.

Used modules in **_vclib_**.

### Implementation

Used the variable-latency integer multiplier in the first lab to implement the mul instruction.
