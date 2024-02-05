# ECE 4750 Computer Architecture Lab Implementations

This repository contains the implementation of four lab assignments from the ECE 4750 Computer Architecture course at Cornell University. These labs cover a broad range of fundamental concepts in computer architecture, including iterative integer multiplication, pipelined processors, caching mechanisms, and branch prediction strategies. Each lab is designed to provide hands-on experience with the Verilog hardware description language, exploring different architectural designs, optimization techniques, and testing strategies.

## Lab Overview

### Lab 1: Iterative Integer Multiplier

- **Objective:** Implement and evaluate two versions of an integer iterative multiplier: a baseline fixed-latency design and an alternative variable-latency design.
- **Key Concepts:** Verilog modeling, abstraction levels, design principles, and agile methodologies.

### Lab 2: Pipelined Processor

- **Objective:** Design two pipelined processor microarchitectures for the TinyRV2 ISA, focusing on stalling and bypassing data hazards.
- **Key Concepts:** Instruction set architecture, pipelined processor microarchitecture, data and control hazards.

### Lab 3: Cache

- **Objective:** Enhance the pipelined processor with a data cache (D-cache) and an instruction cache (I-cache), implementing direct-mapped and set-associative caches.
- **Key Concepts:** Memory system design, cache associativity, cache controllers.

### Lab 4: Branch Predictors

- **Objective:** Implement three branch prediction mechanisms (Bimodal, Global, GShare) to optimize processor throughput.
- **Key Concepts:** Dynamic branch prediction, predictor design and evaluation.

## Repository Structure

Each lab is contained in its own directory, structured as follows:

- `lab1_imul/` - Iterative Integer Multiplier
- `lab2_proc/` - Pipelined Processor
- `lab3_cache/` - Cache Implementation
- `lab4_branch/` - Branch Predictors

Within each lab directory, you will find:

- Verilog source files (`*.v`)
- Testbenches (`tb_*.v` for system-level tests, `utb_*.v` for unit tests)
- A Makefile for running simulations and tests
- A configuration file (`default.config`) for testbench reuse
- Additional documentation specific to each lab

## Getting Started

To run any lab simulation:

1. Clone this repository to your local machine.
2. Navigate to the desired lab directory.
3. Use the provided Makefile to run simulations and tests. For example:

```bash
cd lab1_imul/
make run-all
```
