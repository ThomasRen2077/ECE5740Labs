# Initialize x1 with an extremely large value
csrr x1, mngr2proc < 0x7FFFFFFF  # Load 2147483647 into x1
nop
nop
nop
nop
nop
nop
nop
nop

# Perform xori operation with an immediate value
xori x3, x1, 0x050  # 2147483647 XOR 80 should give 2147483567
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 2147483567
nop
nop
nop
nop
nop
nop
nop
nop
