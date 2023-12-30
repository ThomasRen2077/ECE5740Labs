# Use x3 to track the control flow
addi  x3, x0, 0
nop
nop
nop
nop
nop
nop
nop
nop
csrr  x1, mngr2proc < 2
nop
nop
nop
nop
nop
nop
nop
nop
csrr  x2, mngr2proc < 1
nop
nop
nop
nop
nop
nop
nop
nop
# label_a branch should be taken
bltu   x2, x1, label_a
nop
nop
nop
nop
nop
nop
nop
nop
addi  x3, x3, 0b01
nop
nop
nop
nop
nop
nop
nop
nop
label_a:
addi  x3, x3, 0b10
nop
nop
nop
nop
nop
nop
nop
nop
# Only the second bit should be set if branch was taken
csrw proc2mngr, x3 > 0b10
nop
nop
nop
nop
nop
nop
nop
nop