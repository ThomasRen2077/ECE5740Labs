csrr x1, mngr2proc < 0x00003000
csrr x2, mngr2proc < 0xcafebabe
nop
nop
nop
nop
nop
nop
nop
nop
sw   x2, 0(x1)
nop
nop
nop
nop
nop
nop
nop
nop
lw   x3, 0(x1)
csrw proc2mngr, x3 > 0xcafebabe

.data
.word 0x05060708
