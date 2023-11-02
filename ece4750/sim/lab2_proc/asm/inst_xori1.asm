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

# Perform xori operation with an immediate value
xori x3, x1, 0x050  # -2 XOR 0x050 should give 0xFFFFFFAE
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 0xFFFFFFAE
nop
nop
nop
nop
nop
nop
nop
nop
