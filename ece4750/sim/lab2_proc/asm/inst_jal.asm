# Use x3 to track the control flow
addi  x3, x0, 0     # 0x0200
nop                 # 0x0204
nop                 # 0x0208
nop                 # 0x020c
nop                 # 0x0210
nop                 # 0x0214
nop                 # 0x0218
nop                 # 0x021c
nop                 # 0x0220
jal   x1, label_a   # 0x0224, x1 = 0x228
nop                 # 0x0228
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
# Check x1
csrw  proc2mngr, x1 > 0x0228
nop
nop
nop
nop
nop
nop
nop
nop
# Check x3, only the second bit should be set if jump was taken
csrw  proc2mngr, x3 > 0b10
nop
nop
nop
nop
nop
nop
nop
nop