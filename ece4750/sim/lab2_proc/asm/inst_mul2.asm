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

# Initialize x2 with another extremely large value
csrr x2, mngr2proc < 2  # Load 2 into x2
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the multiplication
mul x3, x1, x2  # 2147483647 * 2 should give 4294967294
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 4294967294
nop
nop
nop
nop
nop
nop
nop
nop
