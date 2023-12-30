# Initialize x1 with a negative value
csrr x1, mngr2proc < 0xFFFFFFFF  # Load -1 into x1

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
ori x3, x1, 0x00f  # -1 OR 0x00f should give 0xFFFFFFFF

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
