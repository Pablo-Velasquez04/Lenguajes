.global _start

.data
a: .word 0

.text
_start:
	ldr x1, =a		// x1 = addr of a
	mov x2, 65535		// x2 = 10
	strb w2, [x1]		// a = 10
	ldrb w0, [x1]

	mov x8, 93
	svc 0

