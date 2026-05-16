.global _start

.data				//declaramos variables con valores inmediatos
float1: .float 2.5

.text
_start:
	ldr x0, =float1		//guardamos la direcciòn de float1 en x0
	ldr s0, [x0]		//cargamos el contenido de la direcciòn x0 a s0
	fcvtns w0, s0		//convertimos el s0 en entero en w0

	mov x8, #93		//Salimos del programa
	svc #0
