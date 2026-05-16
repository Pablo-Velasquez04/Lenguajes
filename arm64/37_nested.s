.global _start

.bss
pattern: .skip 36		//Variable no inializada con 36 bytes

.text
_start:
	ldr x0, =pattern	//Cargamos la direcciòn pattern en x0
	mov x1, #'5'		//cargamos el caracter '5' en x1
	mov x2, #'1'		//cargamos el caracter '1' en x2

loop1:				//loop1 que control las filas
	cmp x2, x1		//compraciòn para llegar a '5'
	bgt endloop1		//Si x2 > '5', termina
	mov x3, #'1'		//Reinicia x3 a '1' para cada nueva fila

loop2:				//loop2 que controla las columnas
	cmp x3, x2		//Comparamos para ver si estamos en la numero filas actual
	bgt endloop2		//Si x3 > x2, pasa a siguiente fila
	strb w3, [x0]		//Alamacena el numero de w3 en x0
	add x0, x0, #1		//Avanzamos en memoria
	mov x4, #' '		//Espacio entre numeros
	strb w4, [x0]		//Almacena el numero de w4 a x0
	add x0, x0, #1		//Avanzamos en memoria
	add x3, x3, #1		//Incrementa el numero
	b loop2			//Repite para el siguiente numero en la misma fila

endloop2:			//Fin de cada fila
	add x2, x2, #1		//Incrementa el numero de fila
	mov x4, #10		//codigo ASCII para salto de linea
	strb w4, [x0]		//Almacena el salto de linea en x0
	add x0, x0, #1		//Avanzamos en memoria
	b loop1			//Regresa para nueva fila

endloop1:			//Fin del patron
	strb wzr, [x0]		//Almacena 0 (caracter nulo) para terminar la cadena

	mov x0, #1		//Imprimimos
	ldr x1, =pattern
	mov x2, #36
	mov x8, #64
	svc #0

	mov x0, #0		//Finalizamos programa
	mov x8, #93
	svc #0
