.global _start

.bss
arg1: .space 32				//Reservamos 32 bytes de memoria

.text
_start:
	ldr x0, [sp, #16]		//Guardamos la direcciòn de memoria del texto
	ldr x1, =arg1			//Cargamos la direcciòn de arg1 en x1
	mov x2, #0			//Contador inicializado en cero para el loop

loop:
	ldrb w3, [x0, x2]		//Guardamos en w3 el contenido de x0+x2 (la direcciòn actual + los bytes que tenga x2)
	cmp w3, #0			//verificamos que w3 no sea \o fin del texto, de lo contrario saltamos a la etiqueta end
	beq end				//Verificamos que si son iguales (w3 == 0), si lo son saltamos a end
	strb w3, [x1, x2]		//Cargamos el caracter de w3 en la direcciòn x1+x2
	add x2, x2, #1			//avanzamos en la memoria sumandole a x2+1
	b loop				//Saltamos al loop repitiendo lo anterior

end:
	mov w0, #10			//almacenamos \n ASCII en w0
	strb w0, [x1, x2]		//en la direcciòn del final del texto colocamos el \n
	add x2, x2, #1			//sumamos 1 a x2 para luego movernos en la direcciòn de memoria
	mov w0, #0			//almacenamos \0 ACII en w0
	strb w0, [x1, x2]		//colocamos en la direcciòn final del texto luego de \n colocamos \0

	mov x0, #1			//salida de la terminal
	mov x2, #32			//longitud a imprimir
	mov x8, #64			//syscall para write
	svc #0

	mov x8, #93			//Fin del programa
	svc #0
