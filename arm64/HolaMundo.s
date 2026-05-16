.global _start

.data
msg:
	.ascii "Hola Mundo\n"

.text

_start:
	mov x0, 1
	ldr x1, =msg
	mov x2, 13
	mov x8, 64
	svc 0

	mov x0, 0
	mov x8, 93
	svc 0
