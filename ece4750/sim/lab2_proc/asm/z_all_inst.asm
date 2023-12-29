csrr  x1, mngr2proc < 0x200
csrr  x2, mngr2proc < 0x2000
add   x3, x1, x2
csrw  proc2mngr, x3 > 0x2200

sub   x3, x1, x2
mul   x3, x1, x2
and   x3, x1, x2
or    x3, x1, x2
xor   x3, x1, x2
slt   x3, x1, x2
sltu  x3, x1, x2
sra   x3, x1, x2
srl   x3, x1, x2
sll   x3, x1, x2

addi  x3, x1, 0x0003
ori   x3, x1, 0x00f
andi  x3, x1, 0xff0
xori  x3, x1, 0x050
slti  x3, x1, 9
sltiu x3, x1, 8
srai  x3, x1, 0x02
srli  x3, x1, 0x02
slli  x3, x1, 0x02
lui   x3, 0x0101
auipc x3, 0x00020

lw    x3, 0(x2)
sw    x3, 0(x2)

jal   x3, label_a
nop
nop
nop
nop
label_a:
jalr  x3, x1, 0x88
nop
nop
nop
nop
beq   x1, x2, label_b
nop
nop
nop
nop
label_b:
bge   x1, x2, label_c
nop
nop
nop
nop
label_c:
bgeu  x1, x2, label_d
nop
nop
nop
nop
label_d:
blt   x1, x2, label_e
nop
nop
nop
nop
label_e:
bltu  x2, x1, label_f
nop
nop
nop
nop
label_f:
bne   x1, x2, label_g
nop
nop
nop
nop
label_g:
nop
nop
nop
nop


.data
.word 0x05060708



