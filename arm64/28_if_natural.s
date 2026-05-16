.global _start

.data						//Inicializamos variables
msg: .asciz "The number is natural\n"		//texto

.text
_start:
	mov x0, #15		//Colocamos 15 dentro de x0 (valor a evaluar)

if:				//etiqueta
	cmp x0, #0		//comparamos (15-0=15)
	blt endif		//15<0 (resultado: 0)

	mov x0, #1		//BLoque para imprimir el mensaje de msg
	ldr x1, =msg
	mov x2, #22
	mov x8, #64
	svc #0

endif:				//etiqueta si blt endif resulta verdadera, directamente viene a esta seccion
	mov x0, #0
	mov x8, #93
	svc #0

