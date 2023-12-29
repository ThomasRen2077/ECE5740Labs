# Initialize x1 and x2
csrr x1, mngr2proc < -4  # Load a negative value into x1
csrr x2, mngr2proc < -2  # Load another negative value into x2
# Initialize x3 to track the control flow
addi x3, x0, 0
# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop
# label_a branch should be taken since x1 is smaller than x2
bne x1, x2, label_a
# If the branch is not taken, the following instruction will execute
addi x3, x3, 0b01
# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop
# Label for branch
label_a:
# If the branch is taken, the following instruction will execute
addi x3, x3, 0b10
# Expected result is 0b10
csrw proc2mngr, x3 > 0b10
# No-operation instructions
nop
nop
nop
nop
nop
nop
nop
nop
nop