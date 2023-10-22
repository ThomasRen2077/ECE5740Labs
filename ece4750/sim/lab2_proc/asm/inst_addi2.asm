csrr x1, mngr2proc < 2147483647  
nop
nop
nop
nop
nop
nop
nop
nop
csrr x2, mngr2proc < 1           
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2                   
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > -2147483648  
nop
nop
nop
nop
nop
nop
nop
nop