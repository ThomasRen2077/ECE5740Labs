# Initialize x1 with an extremely large value
csrr x1, mngr2proc < 0x0fffff00  # Load an extremely large but not maximum 32-bit value into x1
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
# Expected result should be 0xff0 as the last 12 bits are zero in 0xFFFFFF00
csrw proc2mngr, x3 > 0x0fffff00       # Send the result in x3 to proc2mngr
nop
nop
nop
nop
nop
nop
nop
nop
