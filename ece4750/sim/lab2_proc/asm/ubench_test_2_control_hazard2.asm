_start:
# Initial setup
lui   x12, 0x20
addi  x13, x12, 16

# addi  x30, x0, 0   # Initialize x30 to 0, to hold the test result

# Benchmark loop with various branches
addi  x20, x0, 0   # Main Counter setup
addi  x21, x0, 300 # Loop 300 times
    

branch_loop:
    
# Test 1: BEQ (Branch if Equal)
blt   x12, x13, skip_add1
add   x12, x12, x13 # Increment x22 if branch is not taken
skip_add1:

# Test 2: BNE (Branch if Not Equal)
bge   x13, x12, skip_add2
add   x12, x12, x13 # Increment x23 if branch is not taken


skip_add2:
    
# Increment and Loop Condition
addi  x20, x20, 1   # Increase main counter
bne   x20, x21, branch_loop  # Loop back if counter has not reached 300

    
   

# Output the final value of x30 to proc2mngr
csrw  proc2mngr, x20 > 300
    
# End of program nops
nop
nop
nop
nop
nop
nop
