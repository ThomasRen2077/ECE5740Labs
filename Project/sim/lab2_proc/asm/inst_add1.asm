csrr x1, mngr2proc < -5   
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 3    
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2            # x1 + x2 -> x3 (-5 + 3 = -2)
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -2    # result should be -2
nop
nop
nop
nop
nop
nop
nop
nop
