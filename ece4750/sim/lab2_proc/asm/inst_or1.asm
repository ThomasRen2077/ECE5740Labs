# Initialize x1 and x2 with negative values
csrr x1, mngr2proc < 0xFFFFFFFF  # Load -1 into x1
csrr x2, mngr2proc < 0xFFFFFFFE  # Load -2 into x2

# Initialize x3 to store the result
addi x3, x0, 0

# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the OR operation
or x3, x1, x2  # -1 OR -2 should give -1

# Store the result to manager
csrw proc2mngr, x3 > 0xFFFFFFFF

# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop
