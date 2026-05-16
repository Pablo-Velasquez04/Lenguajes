.global _start

.data					//Inicializamos variables
msg1: .asciz "First message! \n"
msg2: .asciz "Second message!\n"
msg3: .asciz "Third message! \n"

.text
_start:
	ldr x1, =msg1			//Almacenamos en x1 la direcciòn de msg1
	bl print			//Damos un salto a la etiqueta print, pero antes tambien guarda la direcciòn de la siguiente instrucciòn

	ldr x1, =msg2			//segundo mensaj a imprimir
	bl print

	ldr x1, =msg3			//tercer mensaje a imprimir
	bl print

	mov x8, #93			//Terminamos programa
	svc #0

print:					//Etiqueta donde salta al hacaer bl print
	mov x0, #1			//salida a pantalla
	mov x2, #17			//longitud a imprimir
	mov x8, #64			//syscall para escribir (write)
	svc #0				//Llama al sistema
	ret				//Retorno a la direcciòn almacenada en lr de "bl print" que contiene la direcciòn de la siguiente instruccion
