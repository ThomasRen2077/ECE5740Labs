csrr x1, mngr2proc < 0x11111111
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 0x22222222
nop
nop
nop
nop
nop
nop
nop
nop
or x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x33333333
nop
nop
nop
nop
nop
nop
nop
nop
