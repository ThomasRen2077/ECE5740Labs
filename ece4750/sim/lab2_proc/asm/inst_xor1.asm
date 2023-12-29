# Initialize x1 with a negative value
csrr x1, mngr2proc < 0xFFFFFFFE  # Load -2 into x1 in 2's complement
nop
nop
nop
nop
nop
nop
nop
nop

# Initialize x2 with another negative value
csrr x2, mngr2proc < 0xFFFFFFFD  # Load -3 into x2 in 2's complement
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the XOR operation
xor x3, x1, x2  # -2 XOR -3 should give 0b11
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 0b11
nop
nop
nop
nop
nop
nop
nop
nop
