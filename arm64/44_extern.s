.global _start

//Llamadas
.extern factorial
.extern itoa

.data				//variables no inicializadas
buffer: .space 11

.text
_start:
	mov x0, #10		//number
	bl factorial		//x0 = factorial(number)

	ldr x1, =buffer		//load buffer
	bl itoa			//buffer = itia(x0)

	mov x0, #1		//imprimimos el buffer
	ldr x1, =buffer
	mov x2, #11
	mov x8, #64
	svc #0

	mov x8, #93		//terminamos el programa
	svc #0
