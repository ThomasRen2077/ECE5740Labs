csrr x1, mngr2proc < 0x7FFFFF00  # A large but not maximum 32-bit value
nop
nop
nop
nop
nop
nop
nop
nop
addi x2, x1, 0x00000050  # Adding a relatively small value to the large value
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x2 > 0x7FFFFF50
nop
nop
nop
nop
nop
nop
nop
nop

