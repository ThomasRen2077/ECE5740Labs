# Initialize x3 to track control flow
addi  x3, x0, 0
nop
nop
nop
nop
nop
nop
nop
nop
# Load negative values into x1 and x2
csrr  x1, mngr2proc < -7
nop
nop
nop
nop
nop
nop
nop
nop
csrr  x2, mngr2proc < -7
nop
nop
nop
nop
nop
nop
nop
nop
# label_neg: Branch should be taken if x1 == x2
beq   x1, x2, label_neg
nop
nop
nop
nop
nop
nop
nop
nop
# If branch not taken, set the first bit of x3
addi  x3, x3, 0b01
nop
nop
nop
nop
nop
nop
nop
nop
label_neg:
# If branch taken, set the second bit of x3
addi  x3, x3, 0b10
nop
nop
nop
nop
nop
nop
nop
nop
# Second bit should be set if branch was taken
csrw proc2mngr, x3 > 0b10
nop
nop
nop
nop
nop
nop
nop
nop