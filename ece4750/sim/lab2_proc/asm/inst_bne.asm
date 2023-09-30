# Use x3 to track the control flow pattern
csrr  x3, mngr2proc < 0
csrr  r4, mngr2proc < 1

csrr  x1, mngr2proc < 1
csrr  x2, mngr2proc < 2

nop
nop
nop
nop
nop
nop
nop
nop

# This branch should be taken
bne   x1, x2, label_a
addu  x3, x3, r4

nop
nop
nop
nop
nop
nop
nop
nop

label_a:
addu  x3, x3, r4

# One and only one of the above two addu instructinos should have
# been executed which means the result should be exactly one.
csrw  proc2mngr, x3 > 1
