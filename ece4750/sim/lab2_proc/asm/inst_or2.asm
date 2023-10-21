# Initialize x1 and x2 with extremely large values
csrr x1, mngr2proc < 0xFFFFFFFE  # Extremely large value
csrr x2, mngr2proc < 0x7FFFFFFF  # Large, but smaller value

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
or x3, x1, x2  # OR should produce 0xFFFFFFFF

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
