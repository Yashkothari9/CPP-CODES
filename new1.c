main:
	mov r4,#10
	mov r3,#1
	mov r0,#1
	ldr r1,=msg1
	swi 0x69
	ldr r1,=base
	
loop:
	mov r0,#0
	ldr r0,[r0]
	swi 0x6c
	str r0,[r1],#4
	add r3,r3,#1
	cmp r3,r4
	bne loop
		




	.data
	base: .skip
	msg1:
	.asciz "enter ten numbers\n"
	msg2:
	.asciz "here is your numbers\n"