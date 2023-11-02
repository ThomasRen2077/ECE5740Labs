# Initialize x1 with a large value
csrr x1, mngr2proc < 0xAAAA5555  # Load 2863311535 into x1
nop
nop
nop
nop
nop
nop
nop
nop

# Initialize x2 with another large value
csrr x2, mngr2proc < 0x5555AAAA  # Load 1431655765 into x2
nop
nop
nop
nop
nop
nop
nop
nop

# Perform the XOR operation
xor x3, x1, x2  # 2863311535 XOR 1431655765 should give 4294967295
nop
nop
nop
nop
nop
nop
nop
nop

# Store the result to manager
csrw proc2mngr, x3 > 4294967295
nop
nop
nop
nop
nop
nop
nop
nop
