.global _start

.data
float1: .word 0x40200000

.text
_start:
	ldr x0, =float1
	ldr s0, [x0]
	fmov w0, s0

	mov x8, #93
	svc #0
