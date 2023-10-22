_start:
    # Initial setup
    lui x12, 0x20
    addi x13, x12, 16
    addi x30, x0, 0  # Initialize x30 to 0 (assuming x30 holds the test result)

    # Benchmark loop with various branches
    addi x20, x0, 0   # Counter setup
    addi x21, x0, 100 # Loop 300 times

branch_loop:
    addi x13, x12, 16
    # Test 1: BEQ (Branch if Equal)
    beq x12, x13, skip_add1
    add x30, x30, x20  # Operation if branch not taken
skip_add1:

    # Test 2: BNE (Branch if Not Equal)
    add x13, x0, x12
    bne x12, x13, skip_add2
    add x30, x30, x21  # Operation if branch not taken
skip_add2:

    # Test 3: BLT (Branch if Less Than)
    addi x12, x13, 16
    blt x12, x13, skip_sub1
    sub x30, x30, x20  # Operation if branch not taken
skip_sub1:

    # Test 4: BGE (Branch if Greater or Equal)
    addi x13, x12, 16
    bge x12, x13, skip_sub2
    sub x30, x30, x21  # Operation if branch not taken
skip_sub2:

    # Increment and Loop Condition
    addi x20, x20, 1  # Increase counter
    bne x20, x21, branch_loop  # Loop back if counter has not reached 300

# End of program

csrw proc2mngr, x30 > 0
    



   
