csrr x1, mngr2proc < 0x20002000
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 0x00000002
nop
nop
nop
nop
nop
nop
nop
nop
sll x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x80008000
nop
nop
nop
nop
nop
nop
nop
nop
