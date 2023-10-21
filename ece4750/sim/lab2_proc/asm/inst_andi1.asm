# Initialize x1 with a negative value
csrr x1, mngr2proc < 0xFFFFFFFF  # A negative value represented in Two's complement
nop
nop
nop
nop
nop
nop
nop
nop
# Apply bitwise AND with immediate value 0xff0
andi x3, x1, 0xff0
nop
nop
nop
nop
nop
nop
nop
nop
# Expected result should be 0xff0
csrw proc2mngr, x3 > 0xff0
nop
nop
nop
nop
nop
nop
nop
nop
