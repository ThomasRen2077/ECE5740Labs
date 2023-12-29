_start:
# Initial setup
lui   x12, 0x20
addi  x13, x12, 16

# Benchmark loop with several branches
addi  x20, x0, 0    # Counter setup
addi  x21, x0, 300  # Loop 300 times
branch_loop:
beq   x12, x13, skip_add  # Branch based on comparison
add   x12, x12, x13 # Operation if branch not taken

skip_add:
bne   x12, x13, skip_sub  # Another branch based on comparison
sub   x13, x13, x12 # Operation if branch not taken

skip_sub:
addi  x20, x20, 1   # Increase counter
bne   x20, x21, branch_loop # Loop back if counter has not reached 300

# end of the program
csrw  proc2mngr, x20 > 300
nop
nop
nop
nop
nop
nop
