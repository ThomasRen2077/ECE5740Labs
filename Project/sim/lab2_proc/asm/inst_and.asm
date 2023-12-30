csrr x1, mngr2proc < 0xff0f0f0f
csrr x2, mngr2proc < 0x00ffffff
nop
nop
nop
nop
nop
nop
nop
nop
and x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x000f0f0f
nop
nop
nop
nop
nop
nop
nop
nop
