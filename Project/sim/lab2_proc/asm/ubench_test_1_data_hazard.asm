_start:
# Load initial data
lui   x1, 0x10
lui   x2, 0x20
add   x2, x1, x2   # Data hazard, depends on the result of the previous lui

# Benchmark loop with intentional data hazards
addi  x10, x0, 0   # Counter setup
addi  x11, x0, 200 # Loop 200 times
loop:
add   x3, x1, x2   # Data hazard, depends on the result of the previous addi
add   x4, x3, x1   # Data hazard, depends on the result of the previous add
add   x5, x4, x3   # Data hazard, depends on the result of the previous add
add   x6, x5, x4   # Data hazard, depends on the result of the previous add
add   x7, x6, x5   # Data hazard, depends on the result of the previous add
addi  x10, x10, 1  # Increase counter
bne   x10, x11, loop # Loop back if counter has not reached 200

# end of the program
csrw  proc2mngr, x10 > 200
nop
nop
nop
nop
nop
nop

