# Initialize x1 with a negative value
csrr x1, mngr2proc < 0xFFFFFFFF  # Load -1 (in Two's complement) into x1
nop
nop
nop
nop
nop
nop
nop
nop
# Apply bitwise AND with immediate value 0xff0
andi x3, x1, 0xff0               # Bitwise AND x1 with 0xff0 and store the result in x3
nop
nop
nop
nop
nop
nop
nop
nop
# Expected result should be 0xff0
csrw proc2mngr, x3 > 0xfffffff0       # Send the result in x3 to proc2mngr
nop
nop
nop
nop
nop
nop
nop
nop
