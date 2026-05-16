.global _start

.data
	msg: .asciz "Ingrese su nombre: "
	len = .-msg

.bss
	buffer:  .skip 50

.text
_start:
	mov x0, 1
	ldr x1, =msg
	mov x2, 19
	mov x8, 64
	svc 0

	mov x0, 0
	ldr x1, =buffer
	mov x2, 50
	mov x8, 63
	svc 0

	mov x0, 1
	ldr x1, =buffer
	mov x2, 50
	mov x8, 64
	svc 0

