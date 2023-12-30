# Initialize x1 with a positive value
csrr x1, mngr2proc < 5  # Load 5 into x1
nop
nop
nop
nop
nop
nop
nop
nop

# Initialize x2 with a negative value
csrr x2, mngr2proc < -3  # Load -3 into x2
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the subtraction
sub x3, x1, x2  # 5 - (-3) should give 8
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 8
nop
nop
nop
nop
nop
nop
nop
nop
