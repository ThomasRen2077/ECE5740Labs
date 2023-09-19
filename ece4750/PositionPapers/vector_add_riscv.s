
vector_add_riscv:     file format elf32-littleriscv


Disassembly of section .text:

00010000 <_ftext>:
   10000:	00002197          	auipc	gp,0x2
   10004:	92018193          	addi	gp,gp,-1760 # 11920 <_gp>
   10008:	00001297          	auipc	t0,0x1
   1000c:	12828293          	addi	t0,t0,296 # 11130 <_fbss>
   10010:	00001317          	auipc	t1,0x1
   10014:	15830313          	addi	t1,t1,344 # 11168 <_end>
   10018:	0002a023          	sw	zero,0(t0)
   1001c:	00428293          	addi	t0,t0,4
   10020:	fe62ece3          	bltu	t0,t1,10018 <_ftext+0x18>
   10024:	00000517          	auipc	a0,0x0
   10028:	1a450513          	addi	a0,a0,420 # 101c8 <__libc_fini_array>
   1002c:	158000ef          	jal	10184 <atexit>
   10030:	1f8000ef          	jal	10228 <__libc_init_array>
   10034:	00012503          	lw	a0,0(sp)
   10038:	00410593          	addi	a1,sp,4
   1003c:	00000613          	li	a2,0
   10040:	0dd000ef          	jal	1091c <main>
   10044:	1540006f          	j	10198 <exit>

00010048 <_fini>:
   10048:	00008067          	ret

0001004c <deregister_tm_clones>:
   1004c:	80018713          	addi	a4,gp,-2048 # 11120 <_edata>
   10050:	80318793          	addi	a5,gp,-2045 # 11123 <_edata+0x3>
   10054:	40e787b3          	sub	a5,a5,a4
   10058:	00600713          	li	a4,6
   1005c:	00f77c63          	bleu	a5,a4,10074 <deregister_tm_clones+0x28>
   10060:	00000337          	lui	t1,0x0
   10064:	00030313          	mv	t1,t1
   10068:	00030663          	beqz	t1,10074 <deregister_tm_clones+0x28>
   1006c:	80018513          	addi	a0,gp,-2048 # 11120 <_edata>
   10070:	00030067          	jr	t1
   10074:	00008067          	ret

00010078 <register_tm_clones>:
   10078:	80018593          	addi	a1,gp,-2048 # 11120 <_edata>
   1007c:	80018793          	addi	a5,gp,-2048 # 11120 <_edata>
   10080:	40b787b3          	sub	a5,a5,a1
   10084:	4027d793          	srai	a5,a5,0x2
   10088:	01f7d593          	srli	a1,a5,0x1f
   1008c:	00f585b3          	add	a1,a1,a5
   10090:	4015d593          	srai	a1,a1,0x1
   10094:	00058c63          	beqz	a1,100ac <register_tm_clones+0x34>
   10098:	00000337          	lui	t1,0x0
   1009c:	00030313          	mv	t1,t1
   100a0:	00030663          	beqz	t1,100ac <register_tm_clones+0x34>
   100a4:	80018513          	addi	a0,gp,-2048 # 11120 <_edata>
   100a8:	00030067          	jr	t1
   100ac:	00008067          	ret

000100b0 <__do_global_dtors_aux>:
   100b0:	ff010113          	addi	sp,sp,-16
   100b4:	00812423          	sw	s0,8(sp)
   100b8:	8181c783          	lbu	a5,-2024(gp) # 11138 <completed.3084>
   100bc:	00112623          	sw	ra,12(sp)
   100c0:	02079663          	bnez	a5,100ec <__do_global_dtors_aux+0x3c>
   100c4:	f89ff0ef          	jal	1004c <deregister_tm_clones>
   100c8:	000007b7          	lui	a5,0x0
   100cc:	00078793          	mv	a5,a5
   100d0:	00078a63          	beqz	a5,100e4 <__do_global_dtors_aux+0x34>
   100d4:	00011537          	lui	a0,0x11
   100d8:	93050513          	addi	a0,a0,-1744 # 10930 <__fini_array_end>
   100dc:	ffff0317          	auipc	t1,0xffff0
   100e0:	f24300e7          	jalr	t1,-220 # 0 <_ftext-0x10000>
   100e4:	00100793          	li	a5,1
   100e8:	80f18c23          	sb	a5,-2024(gp) # 11138 <completed.3084>
   100ec:	00c12083          	lw	ra,12(sp)
   100f0:	00812403          	lw	s0,8(sp)
   100f4:	01010113          	addi	sp,sp,16
   100f8:	00008067          	ret

000100fc <frame_dummy>:
   100fc:	ff010113          	addi	sp,sp,-16
   10100:	000007b7          	lui	a5,0x0
   10104:	00112623          	sw	ra,12(sp)
   10108:	00078793          	mv	a5,a5
   1010c:	00078c63          	beqz	a5,10124 <frame_dummy+0x28>
   10110:	00011537          	lui	a0,0x11
   10114:	81c18593          	addi	a1,gp,-2020 # 1113c <object.3089>
   10118:	93050513          	addi	a0,a0,-1744 # 10930 <__fini_array_end>
   1011c:	ffff0317          	auipc	t1,0xffff0
   10120:	ee4300e7          	jalr	t1,-284 # 0 <_ftext-0x10000>
   10124:	000117b7          	lui	a5,0x11
   10128:	cd478513          	addi	a0,a5,-812 # 10cd4 <__JCR_END__>
   1012c:	00052783          	lw	a5,0(a0)
   10130:	00079863          	bnez	a5,10140 <frame_dummy+0x44>
   10134:	00c12083          	lw	ra,12(sp)
   10138:	01010113          	addi	sp,sp,16
   1013c:	f3dff06f          	j	10078 <register_tm_clones>
   10140:	000007b7          	lui	a5,0x0
   10144:	00078793          	mv	a5,a5
   10148:	fe0786e3          	beqz	a5,10134 <frame_dummy+0x38>
   1014c:	000780e7          	jalr	a5
   10150:	fe5ff06f          	j	10134 <frame_dummy+0x38>

00010154 <vector_add>:
   10154:	02d05663          	blez	a3,10180 <vector_add+0x2c>
   10158:	00269693          	slli	a3,a3,0x2
   1015c:	00d506b3          	add	a3,a0,a3
   10160:	00052783          	lw	a5,0(a0)
   10164:	0005a703          	lw	a4,0(a1)
   10168:	00450513          	addi	a0,a0,4
   1016c:	00458593          	addi	a1,a1,4
   10170:	00e787b3          	add	a5,a5,a4
   10174:	00f62023          	sw	a5,0(a2)
   10178:	00460613          	addi	a2,a2,4
   1017c:	fed512e3          	bne	a0,a3,10160 <vector_add+0xc>
   10180:	00008067          	ret

00010184 <atexit>:
   10184:	00050593          	mv	a1,a0
   10188:	00000693          	li	a3,0
   1018c:	00000613          	li	a2,0
   10190:	00000513          	li	a0,0
   10194:	1340006f          	j	102c8 <__register_exitproc>

00010198 <exit>:
   10198:	ff010113          	addi	sp,sp,-16
   1019c:	00000593          	li	a1,0
   101a0:	00812423          	sw	s0,8(sp)
   101a4:	00112623          	sw	ra,12(sp)
   101a8:	00050413          	mv	s0,a0
   101ac:	224000ef          	jal	103d0 <__call_exitprocs>
   101b0:	8041a503          	lw	a0,-2044(gp) # 11124 <_global_impure_ptr>
   101b4:	03c52783          	lw	a5,60(a0)
   101b8:	00078463          	beqz	a5,101c0 <exit+0x28>
   101bc:	000780e7          	jalr	a5
   101c0:	00040513          	mv	a0,s0
   101c4:	734000ef          	jal	108f8 <_exit>

000101c8 <__libc_fini_array>:
   101c8:	ff010113          	addi	sp,sp,-16
   101cc:	00812423          	sw	s0,8(sp)
   101d0:	00912223          	sw	s1,4(sp)
   101d4:	00011437          	lui	s0,0x11
   101d8:	000114b7          	lui	s1,0x11
   101dc:	92c48493          	addi	s1,s1,-1748 # 1092c <__init_array_end>
   101e0:	93040413          	addi	s0,s0,-1744 # 10930 <__fini_array_end>
   101e4:	40940433          	sub	s0,s0,s1
   101e8:	40245413          	srai	s0,s0,0x2
   101ec:	00241793          	slli	a5,s0,0x2
   101f0:	ffc78793          	addi	a5,a5,-4 # fffffffc <_gp+0xfffee6dc>
   101f4:	00112623          	sw	ra,12(sp)
   101f8:	009784b3          	add	s1,a5,s1
   101fc:	00040c63          	beqz	s0,10214 <__libc_fini_array+0x4c>
   10200:	0004a783          	lw	a5,0(s1)
   10204:	fff40413          	addi	s0,s0,-1
   10208:	ffc48493          	addi	s1,s1,-4
   1020c:	000780e7          	jalr	a5
   10210:	fe0418e3          	bnez	s0,10200 <__libc_fini_array+0x38>
   10214:	00c12083          	lw	ra,12(sp)
   10218:	00812403          	lw	s0,8(sp)
   1021c:	00412483          	lw	s1,4(sp)
   10220:	01010113          	addi	sp,sp,16
   10224:	e25ff06f          	j	10048 <_fini>

00010228 <__libc_init_array>:
   10228:	ff010113          	addi	sp,sp,-16
   1022c:	00812423          	sw	s0,8(sp)
   10230:	000117b7          	lui	a5,0x11
   10234:	00011437          	lui	s0,0x11
   10238:	01212023          	sw	s2,0(sp)
   1023c:	92878793          	addi	a5,a5,-1752 # 10928 <_etext>
   10240:	92840913          	addi	s2,s0,-1752 # 10928 <_etext>
   10244:	41278933          	sub	s2,a5,s2
   10248:	00912223          	sw	s1,4(sp)
   1024c:	00112623          	sw	ra,12(sp)
   10250:	40295913          	srai	s2,s2,0x2
   10254:	92840413          	addi	s0,s0,-1752
   10258:	00000493          	li	s1,0
   1025c:	00090c63          	beqz	s2,10274 <__libc_init_array+0x4c>
   10260:	00042783          	lw	a5,0(s0)
   10264:	00148493          	addi	s1,s1,1
   10268:	00440413          	addi	s0,s0,4
   1026c:	000780e7          	jalr	a5
   10270:	fe9918e3          	bne	s2,s1,10260 <__libc_init_array+0x38>
   10274:	dd5ff0ef          	jal	10048 <_fini>
   10278:	00011437          	lui	s0,0x11
   1027c:	000117b7          	lui	a5,0x11
   10280:	92840913          	addi	s2,s0,-1752 # 10928 <_etext>
   10284:	92c78793          	addi	a5,a5,-1748 # 1092c <__init_array_end>
   10288:	41278933          	sub	s2,a5,s2
   1028c:	40295913          	srai	s2,s2,0x2
   10290:	92840413          	addi	s0,s0,-1752
   10294:	00000493          	li	s1,0
   10298:	00090c63          	beqz	s2,102b0 <__libc_init_array+0x88>
   1029c:	00042783          	lw	a5,0(s0)
   102a0:	00148493          	addi	s1,s1,1
   102a4:	00440413          	addi	s0,s0,4
   102a8:	000780e7          	jalr	a5
   102ac:	fe9918e3          	bne	s2,s1,1029c <__libc_init_array+0x74>
   102b0:	00c12083          	lw	ra,12(sp)
   102b4:	00812403          	lw	s0,8(sp)
   102b8:	00412483          	lw	s1,4(sp)
   102bc:	00012903          	lw	s2,0(sp)
   102c0:	01010113          	addi	sp,sp,16
   102c4:	00008067          	ret

000102c8 <__register_exitproc>:
   102c8:	fe010113          	addi	sp,sp,-32
   102cc:	00812c23          	sw	s0,24(sp)
   102d0:	8041a403          	lw	s0,-2044(gp) # 11124 <_global_impure_ptr>
   102d4:	00912a23          	sw	s1,20(sp)
   102d8:	00050493          	mv	s1,a0
   102dc:	14842503          	lw	a0,328(s0)
   102e0:	01212823          	sw	s2,16(sp)
   102e4:	01312623          	sw	s3,12(sp)
   102e8:	01412423          	sw	s4,8(sp)
   102ec:	00112e23          	sw	ra,28(sp)
   102f0:	00058913          	mv	s2,a1
   102f4:	00060a13          	mv	s4,a2
   102f8:	00068993          	mv	s3,a3
   102fc:	0c050063          	beqz	a0,103bc <__register_exitproc+0xf4>
   10300:	00452783          	lw	a5,4(a0)
   10304:	01f00713          	li	a4,31
   10308:	00178593          	addi	a1,a5,1
   1030c:	04f75063          	ble	a5,a4,1034c <__register_exitproc+0x84>
   10310:	000007b7          	lui	a5,0x0
   10314:	00078793          	mv	a5,a5
   10318:	0a078863          	beqz	a5,103c8 <__register_exitproc+0x100>
   1031c:	19000513          	li	a0,400
   10320:	ffff0317          	auipc	t1,0xffff0
   10324:	ce0300e7          	jalr	t1,-800 # 0 <_ftext-0x10000>
   10328:	0a050063          	beqz	a0,103c8 <__register_exitproc+0x100>
   1032c:	14842783          	lw	a5,328(s0)
   10330:	00052223          	sw	zero,4(a0)
   10334:	00100593          	li	a1,1
   10338:	00f52023          	sw	a5,0(a0)
   1033c:	14a42423          	sw	a0,328(s0)
   10340:	18052423          	sw	zero,392(a0)
   10344:	18052623          	sw	zero,396(a0)
   10348:	00000793          	li	a5,0
   1034c:	00279713          	slli	a4,a5,0x2
   10350:	02049a63          	bnez	s1,10384 <__register_exitproc+0xbc>
   10354:	00b52223          	sw	a1,4(a0)
   10358:	00e50533          	add	a0,a0,a4
   1035c:	01252423          	sw	s2,8(a0)
   10360:	00000513          	li	a0,0
   10364:	01c12083          	lw	ra,28(sp)
   10368:	01812403          	lw	s0,24(sp)
   1036c:	01412483          	lw	s1,20(sp)
   10370:	01012903          	lw	s2,16(sp)
   10374:	00c12983          	lw	s3,12(sp)
   10378:	00812a03          	lw	s4,8(sp)
   1037c:	02010113          	addi	sp,sp,32
   10380:	00008067          	ret
   10384:	00e506b3          	add	a3,a0,a4
   10388:	0946a423          	sw	s4,136(a3)
   1038c:	18852803          	lw	a6,392(a0)
   10390:	00100613          	li	a2,1
   10394:	00f617b3          	sll	a5,a2,a5
   10398:	00f86633          	or	a2,a6,a5
   1039c:	18c52423          	sw	a2,392(a0)
   103a0:	1136a423          	sw	s3,264(a3)
   103a4:	00200693          	li	a3,2
   103a8:	fad496e3          	bne	s1,a3,10354 <__register_exitproc+0x8c>
   103ac:	18c52683          	lw	a3,396(a0)
   103b0:	00f6e7b3          	or	a5,a3,a5
   103b4:	18f52623          	sw	a5,396(a0)
   103b8:	f9dff06f          	j	10354 <__register_exitproc+0x8c>
   103bc:	14c40513          	addi	a0,s0,332
   103c0:	14a42423          	sw	a0,328(s0)
   103c4:	f3dff06f          	j	10300 <__register_exitproc+0x38>
   103c8:	fff00513          	li	a0,-1
   103cc:	f99ff06f          	j	10364 <__register_exitproc+0x9c>

000103d0 <__call_exitprocs>:
   103d0:	fc010113          	addi	sp,sp,-64
   103d4:	01712e23          	sw	s7,28(sp)
   103d8:	8041ab83          	lw	s7,-2044(gp) # 11124 <_global_impure_ptr>
   103dc:	03612023          	sw	s6,32(sp)
   103e0:	00000b37          	lui	s6,0x0
   103e4:	03212823          	sw	s2,48(sp)
   103e8:	03412423          	sw	s4,40(sp)
   103ec:	03512223          	sw	s5,36(sp)
   103f0:	01812c23          	sw	s8,24(sp)
   103f4:	01912a23          	sw	s9,20(sp)
   103f8:	02112e23          	sw	ra,60(sp)
   103fc:	02812c23          	sw	s0,56(sp)
   10400:	02912a23          	sw	s1,52(sp)
   10404:	03312623          	sw	s3,44(sp)
   10408:	01a12823          	sw	s10,16(sp)
   1040c:	01b12623          	sw	s11,12(sp)
   10410:	00050a93          	mv	s5,a0
   10414:	00058913          	mv	s2,a1
   10418:	148b8c13          	addi	s8,s7,328
   1041c:	00100a13          	li	s4,1
   10420:	fff00c93          	li	s9,-1
   10424:	000b0b13          	mv	s6,s6
   10428:	148ba983          	lw	s3,328(s7)
   1042c:	06098063          	beqz	s3,1048c <__call_exitprocs+0xbc>
   10430:	000c0d93          	mv	s11,s8
   10434:	0049a403          	lw	s0,4(s3)
   10438:	00241493          	slli	s1,s0,0x2
   1043c:	fff40413          	addi	s0,s0,-1
   10440:	009984b3          	add	s1,s3,s1
   10444:	00044e63          	bltz	s0,10460 <__call_exitprocs+0x90>
   10448:	08090063          	beqz	s2,104c8 <__call_exitprocs+0xf8>
   1044c:	1044a783          	lw	a5,260(s1)
   10450:	06f90c63          	beq	s2,a5,104c8 <__call_exitprocs+0xf8>
   10454:	fff40413          	addi	s0,s0,-1
   10458:	ffc48493          	addi	s1,s1,-4
   1045c:	ff9416e3          	bne	s0,s9,10448 <__call_exitprocs+0x78>
   10460:	020b0663          	beqz	s6,1048c <__call_exitprocs+0xbc>
   10464:	0049a783          	lw	a5,4(s3)
   10468:	0c079a63          	bnez	a5,1053c <__call_exitprocs+0x16c>
   1046c:	0009a783          	lw	a5,0(s3)
   10470:	0e078063          	beqz	a5,10550 <__call_exitprocs+0x180>
   10474:	00098513          	mv	a0,s3
   10478:	00fda023          	sw	a5,0(s11)
   1047c:	ffff0317          	auipc	t1,0xffff0
   10480:	b84300e7          	jalr	t1,-1148 # 0 <_ftext-0x10000>
   10484:	000da983          	lw	s3,0(s11)
   10488:	fa0996e3          	bnez	s3,10434 <__call_exitprocs+0x64>
   1048c:	03c12083          	lw	ra,60(sp)
   10490:	03812403          	lw	s0,56(sp)
   10494:	03412483          	lw	s1,52(sp)
   10498:	03012903          	lw	s2,48(sp)
   1049c:	02c12983          	lw	s3,44(sp)
   104a0:	02812a03          	lw	s4,40(sp)
   104a4:	02412a83          	lw	s5,36(sp)
   104a8:	02012b03          	lw	s6,32(sp)
   104ac:	01c12b83          	lw	s7,28(sp)
   104b0:	01812c03          	lw	s8,24(sp)
   104b4:	01412c83          	lw	s9,20(sp)
   104b8:	01012d03          	lw	s10,16(sp)
   104bc:	00c12d83          	lw	s11,12(sp)
   104c0:	04010113          	addi	sp,sp,64
   104c4:	00008067          	ret
   104c8:	0049a783          	lw	a5,4(s3)
   104cc:	0044a703          	lw	a4,4(s1)
   104d0:	fff78793          	addi	a5,a5,-1
   104d4:	04878a63          	beq	a5,s0,10528 <__call_exitprocs+0x158>
   104d8:	0004a223          	sw	zero,4(s1)
   104dc:	f6070ce3          	beqz	a4,10454 <__call_exitprocs+0x84>
   104e0:	1889a783          	lw	a5,392(s3)
   104e4:	008a16b3          	sll	a3,s4,s0
   104e8:	0049ad03          	lw	s10,4(s3)
   104ec:	00f6f7b3          	and	a5,a3,a5
   104f0:	02078863          	beqz	a5,10520 <__call_exitprocs+0x150>
   104f4:	18c9a783          	lw	a5,396(s3)
   104f8:	00f6f6b3          	and	a3,a3,a5
   104fc:	02069a63          	bnez	a3,10530 <__call_exitprocs+0x160>
   10500:	0844a583          	lw	a1,132(s1)
   10504:	000a8513          	mv	a0,s5
   10508:	000700e7          	jalr	a4
   1050c:	0049a783          	lw	a5,4(s3)
   10510:	f1a79ce3          	bne	a5,s10,10428 <__call_exitprocs+0x58>
   10514:	000da783          	lw	a5,0(s11)
   10518:	f3378ee3          	beq	a5,s3,10454 <__call_exitprocs+0x84>
   1051c:	f0dff06f          	j	10428 <__call_exitprocs+0x58>
   10520:	000700e7          	jalr	a4
   10524:	fe9ff06f          	j	1050c <__call_exitprocs+0x13c>
   10528:	0089a223          	sw	s0,4(s3)
   1052c:	fb1ff06f          	j	104dc <__call_exitprocs+0x10c>
   10530:	0844a503          	lw	a0,132(s1)
   10534:	000700e7          	jalr	a4
   10538:	fd5ff06f          	j	1050c <__call_exitprocs+0x13c>
   1053c:	0009a783          	lw	a5,0(s3)
   10540:	00098d93          	mv	s11,s3
   10544:	00078993          	mv	s3,a5
   10548:	ee0996e3          	bnez	s3,10434 <__call_exitprocs+0x64>
   1054c:	f41ff06f          	j	1048c <__call_exitprocs+0xbc>
   10550:	00000793          	li	a5,0
   10554:	fedff06f          	j	10540 <__call_exitprocs+0x170>

00010558 <__syscall_error>:
   10558:	ff010113          	addi	sp,sp,-16
   1055c:	00112623          	sw	ra,12(sp)
   10560:	00812423          	sw	s0,8(sp)
   10564:	00050413          	mv	s0,a0
   10568:	3ac000ef          	jal	10914 <__errno>
   1056c:	00c12083          	lw	ra,12(sp)
   10570:	408007b3          	neg	a5,s0
   10574:	00f52023          	sw	a5,0(a0)
   10578:	00812403          	lw	s0,8(sp)
   1057c:	fff00513          	li	a0,-1
   10580:	01010113          	addi	sp,sp,16
   10584:	00008067          	ret

00010588 <open>:
   10588:	00000693          	li	a3,0
   1058c:	40000893          	li	a7,1024
   10590:	00000073          	ecall
   10594:	fc0542e3          	bltz	a0,10558 <__syscall_error>
   10598:	00008067          	ret

0001059c <openat>:
   1059c:	03800893          	li	a7,56
   105a0:	00000073          	ecall
   105a4:	fa054ae3          	bltz	a0,10558 <__syscall_error>
   105a8:	00008067          	ret

000105ac <lseek>:
   105ac:	00060593          	mv	a1,a2
   105b0:	00000693          	li	a3,0
   105b4:	00070613          	mv	a2,a4
   105b8:	03e00893          	li	a7,62
   105bc:	00000073          	ecall
   105c0:	f8054ce3          	bltz	a0,10558 <__syscall_error>
   105c4:	41f55593          	srai	a1,a0,0x1f
   105c8:	00008067          	ret

000105cc <read>:
   105cc:	00000693          	li	a3,0
   105d0:	03f00893          	li	a7,63
   105d4:	00000073          	ecall
   105d8:	f80540e3          	bltz	a0,10558 <__syscall_error>
   105dc:	00008067          	ret

000105e0 <write>:
   105e0:	00000693          	li	a3,0
   105e4:	04000893          	li	a7,64
   105e8:	00000073          	ecall
   105ec:	f60546e3          	bltz	a0,10558 <__syscall_error>
   105f0:	00008067          	ret

000105f4 <fstat>:
   105f4:	00000613          	li	a2,0
   105f8:	00000693          	li	a3,0
   105fc:	05000893          	li	a7,80
   10600:	00000073          	ecall
   10604:	f4054ae3          	bltz	a0,10558 <__syscall_error>
   10608:	00008067          	ret

0001060c <stat>:
   1060c:	00000613          	li	a2,0
   10610:	00000693          	li	a3,0
   10614:	40e00893          	li	a7,1038
   10618:	00000073          	ecall
   1061c:	f2054ee3          	bltz	a0,10558 <__syscall_error>
   10620:	00008067          	ret

00010624 <lstat>:
   10624:	00000613          	li	a2,0
   10628:	00000693          	li	a3,0
   1062c:	40f00893          	li	a7,1039
   10630:	00000073          	ecall
   10634:	f20542e3          	bltz	a0,10558 <__syscall_error>
   10638:	00008067          	ret

0001063c <fstatat>:
   1063c:	04f00893          	li	a7,79
   10640:	00000073          	ecall
   10644:	f0054ae3          	bltz	a0,10558 <__syscall_error>
   10648:	00008067          	ret

0001064c <access>:
   1064c:	00000613          	li	a2,0
   10650:	00000693          	li	a3,0
   10654:	40900893          	li	a7,1033
   10658:	00000073          	ecall
   1065c:	ee054ee3          	bltz	a0,10558 <__syscall_error>
   10660:	00008067          	ret

00010664 <faccessat>:
   10664:	03000893          	li	a7,48
   10668:	00000073          	ecall
   1066c:	ee0546e3          	bltz	a0,10558 <__syscall_error>
   10670:	00008067          	ret

00010674 <close>:
   10674:	00000593          	li	a1,0
   10678:	00000613          	li	a2,0
   1067c:	00000693          	li	a3,0
   10680:	03900893          	li	a7,57
   10684:	00000073          	ecall
   10688:	ec0548e3          	bltz	a0,10558 <__syscall_error>
   1068c:	00008067          	ret

00010690 <link>:
   10690:	00000613          	li	a2,0
   10694:	00000693          	li	a3,0
   10698:	40100893          	li	a7,1025
   1069c:	00000073          	ecall
   106a0:	ea054ce3          	bltz	a0,10558 <__syscall_error>
   106a4:	00008067          	ret

000106a8 <unlink>:
   106a8:	00000593          	li	a1,0
   106ac:	00000613          	li	a2,0
   106b0:	00000693          	li	a3,0
   106b4:	40200893          	li	a7,1026
   106b8:	00000073          	ecall
   106bc:	e8054ee3          	bltz	a0,10558 <__syscall_error>
   106c0:	00008067          	ret

000106c4 <execve>:
   106c4:	ff010113          	addi	sp,sp,-16
   106c8:	00112623          	sw	ra,12(sp)
   106cc:	248000ef          	jal	10914 <__errno>
   106d0:	00c12083          	lw	ra,12(sp)
   106d4:	00c00793          	li	a5,12
   106d8:	00f52023          	sw	a5,0(a0)
   106dc:	01010113          	addi	sp,sp,16
   106e0:	fff00513          	li	a0,-1
   106e4:	00008067          	ret

000106e8 <fork>:
   106e8:	ff010113          	addi	sp,sp,-16
   106ec:	00112623          	sw	ra,12(sp)
   106f0:	224000ef          	jal	10914 <__errno>
   106f4:	00c12083          	lw	ra,12(sp)
   106f8:	00b00793          	li	a5,11
   106fc:	00f52023          	sw	a5,0(a0)
   10700:	01010113          	addi	sp,sp,16
   10704:	fff00513          	li	a0,-1
   10708:	00008067          	ret

0001070c <getpid>:
   1070c:	00100513          	li	a0,1
   10710:	00008067          	ret

00010714 <kill>:
   10714:	ff010113          	addi	sp,sp,-16
   10718:	00112623          	sw	ra,12(sp)
   1071c:	1f8000ef          	jal	10914 <__errno>
   10720:	00c12083          	lw	ra,12(sp)
   10724:	01600793          	li	a5,22
   10728:	00f52023          	sw	a5,0(a0)
   1072c:	01010113          	addi	sp,sp,16
   10730:	fff00513          	li	a0,-1
   10734:	00008067          	ret

00010738 <wait>:
   10738:	ff010113          	addi	sp,sp,-16
   1073c:	00112623          	sw	ra,12(sp)
   10740:	1d4000ef          	jal	10914 <__errno>
   10744:	00c12083          	lw	ra,12(sp)
   10748:	00a00793          	li	a5,10
   1074c:	00f52023          	sw	a5,0(a0)
   10750:	01010113          	addi	sp,sp,16
   10754:	fff00513          	li	a0,-1
   10758:	00008067          	ret

0001075c <isatty>:
   1075c:	f9010113          	addi	sp,sp,-112
   10760:	00010593          	mv	a1,sp
   10764:	00000613          	li	a2,0
   10768:	00000693          	li	a3,0
   1076c:	05000893          	li	a7,80
   10770:	00000073          	ecall
   10774:	de0542e3          	bltz	a0,10558 <__syscall_error>
   10778:	fff00793          	li	a5,-1
   1077c:	00f50863          	beq	a0,a5,1078c <isatty+0x30>
   10780:	01012503          	lw	a0,16(sp)
   10784:	00d55513          	srli	a0,a0,0xd
   10788:	00157513          	andi	a0,a0,1
   1078c:	07010113          	addi	sp,sp,112
   10790:	00008067          	ret

00010794 <times>:
   10794:	83818313          	addi	t1,gp,-1992 # 11158 <t0.2340>
   10798:	00032783          	lw	a5,0(t1)
   1079c:	00432683          	lw	a3,4(t1)
   107a0:	ff010113          	addi	sp,sp,-16
   107a4:	00050813          	mv	a6,a0
   107a8:	00d7e7b3          	or	a5,a5,a3
   107ac:	02079063          	bnez	a5,107cc <times+0x38>
   107b0:	83818513          	addi	a0,gp,-1992 # 11158 <t0.2340>
   107b4:	00000593          	li	a1,0
   107b8:	00000613          	li	a2,0
   107bc:	00000693          	li	a3,0
   107c0:	0a900893          	li	a7,169
   107c4:	00000073          	ecall
   107c8:	d80548e3          	bltz	a0,10558 <__syscall_error>
   107cc:	00010513          	mv	a0,sp
   107d0:	00000593          	li	a1,0
   107d4:	00000613          	li	a2,0
   107d8:	00000693          	li	a3,0
   107dc:	0a900893          	li	a7,169
   107e0:	00000073          	ecall
   107e4:	d6054ae3          	bltz	a0,10558 <__syscall_error>
   107e8:	00032703          	lw	a4,0(t1)
   107ec:	00012783          	lw	a5,0(sp)
   107f0:	fff00513          	li	a0,-1
   107f4:	00082623          	sw	zero,12(a6)
   107f8:	40e786b3          	sub	a3,a5,a4
   107fc:	000f47b7          	lui	a5,0xf4
   10800:	24078793          	addi	a5,a5,576 # f4240 <_gp+0xe2920>
   10804:	02f68733          	mul	a4,a3,a5
   10808:	00832683          	lw	a3,8(t1)
   1080c:	00812783          	lw	a5,8(sp)
   10810:	00082423          	sw	zero,8(a6)
   10814:	00082223          	sw	zero,4(a6)
   10818:	40d787b3          	sub	a5,a5,a3
   1081c:	01010113          	addi	sp,sp,16
   10820:	00f707b3          	add	a5,a4,a5
   10824:	00f82023          	sw	a5,0(a6)
   10828:	00008067          	ret

0001082c <gettimeofday>:
   1082c:	00000593          	li	a1,0
   10830:	00000613          	li	a2,0
   10834:	00000693          	li	a3,0
   10838:	0a900893          	li	a7,169
   1083c:	00000073          	ecall
   10840:	d0054ce3          	bltz	a0,10558 <__syscall_error>
   10844:	00008067          	ret

00010848 <ftime>:
   10848:	00000713          	li	a4,0
   1084c:	00000793          	li	a5,0
   10850:	00051423          	sh	zero,8(a0)
   10854:	00e52023          	sw	a4,0(a0)
   10858:	00f52223          	sw	a5,4(a0)
   1085c:	00000513          	li	a0,0
   10860:	00008067          	ret

00010864 <utime>:
   10864:	fff00513          	li	a0,-1
   10868:	00008067          	ret

0001086c <chown>:
   1086c:	fff00513          	li	a0,-1
   10870:	00008067          	ret

00010874 <chmod>:
   10874:	fff00513          	li	a0,-1
   10878:	00008067          	ret

0001087c <chdir>:
   1087c:	fff00513          	li	a0,-1
   10880:	00008067          	ret

00010884 <getcwd>:
   10884:	00000513          	li	a0,0
   10888:	00008067          	ret

0001088c <sysconf>:
   1088c:	00200793          	li	a5,2
   10890:	00f51863          	bne	a0,a5,108a0 <sysconf+0x14>
   10894:	000f4537          	lui	a0,0xf4
   10898:	24050513          	addi	a0,a0,576 # f4240 <_gp+0xe2920>
   1089c:	00008067          	ret
   108a0:	fff00513          	li	a0,-1
   108a4:	00008067          	ret

000108a8 <sbrk>:
   108a8:	8101a703          	lw	a4,-2032(gp) # 11130 <_fbss>
   108ac:	00050793          	mv	a5,a0
   108b0:	00071663          	bnez	a4,108bc <sbrk+0x14>
   108b4:	84818713          	addi	a4,gp,-1976 # 11168 <_end>
   108b8:	80e1a823          	sw	a4,-2032(gp) # 11130 <_fbss>
   108bc:	00e78533          	add	a0,a5,a4
   108c0:	00000593          	li	a1,0
   108c4:	00000613          	li	a2,0
   108c8:	00000693          	li	a3,0
   108cc:	0d600893          	li	a7,214
   108d0:	00000073          	ecall
   108d4:	c80542e3          	bltz	a0,10558 <__syscall_error>
   108d8:	8101a683          	lw	a3,-2032(gp) # 11130 <_fbss>
   108dc:	fff00713          	li	a4,-1
   108e0:	00d787b3          	add	a5,a5,a3
   108e4:	00f51663          	bne	a0,a5,108f0 <sbrk+0x48>
   108e8:	80a1a823          	sw	a0,-2032(gp) # 11130 <_fbss>
   108ec:	00068713          	mv	a4,a3
   108f0:	00070513          	mv	a0,a4
   108f4:	00008067          	ret

000108f8 <_exit>:
   108f8:	00000593          	li	a1,0
   108fc:	00000613          	li	a2,0
   10900:	00000693          	li	a3,0
   10904:	05d00893          	li	a7,93
   10908:	00000073          	ecall
   1090c:	c40546e3          	bltz	a0,10558 <__syscall_error>
   10910:	0000006f          	j	10910 <_exit+0x18>

00010914 <__errno>:
   10914:	8081a503          	lw	a0,-2040(gp) # 11128 <_impure_ptr>
   10918:	00008067          	ret

0001091c <main>:
   1091c:	00000513          	li	a0,0
   10920:	00008067          	ret
