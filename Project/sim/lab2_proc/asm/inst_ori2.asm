# Initialize x1 with an extremely large value
csrr x1, mngr2proc < 0xFFFFFFFE  # Extremely large value

# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the OR immediate operation
ori x3, x1, 0x00f  # 0xFFFFFFFE OR 0x00f should produce 0xFFFFFFFF

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
