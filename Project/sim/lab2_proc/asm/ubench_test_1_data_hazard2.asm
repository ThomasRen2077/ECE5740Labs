_start:
# Initialize values
lui x1, 0x10  # 4096 into x1
lui x2, 0x20  # 8192 into x2

# Benchmark loop with intentional data hazards
addi x10, x0, 0   # Counter setup
addi x11, x0, 100 # Loop 100 times to avoid timeout
loop:
# RAW hazard
add x3, x1, x2
add x4, x3, x2
add x5, x4, x3

# WAR hazard
add x6, x5, x4
add x5, x4, x3

# WAW hazard
add x7, x6, x5
add x7, x5, x4

# Update counter and loop
addi x10, x10, 1  # Increase counter
bne  x10, x11, loop  # Loop back if counter has not reached 100

# End of the program
csrw proc2mngr, x10 > 100  # Expect the loop to run 100 times
nop
nop
nop
nop
nop
nop
