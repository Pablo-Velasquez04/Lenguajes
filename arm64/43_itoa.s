.global itoa				//escribrimos itoa en global para reutilizarla

itoa:					//Inicializacion
	mov x9, x0			//el argumento x0 lo movemos a x9
	mov x10, x1			//el argumento buffer lo movemos a x10
	mov x11, #10			//definimos la base 10 en x11
	cbz x9, zero			//verificamos si x9 == 0 para que las divisiones no den problema

	mov x12, x9			//retornamos el buffer al caller
	mov x13, #1			//contador

count:					//en esta etiqueta contamos la cantidad de digitos
	cbz x12, end_count		//Si x12 == 0 saltamos a end_count
	udiv x12, x12, x11		//realizamos las divisiones num = num/10
	add x13, x13, #1		//aumentamos el contador++
	b count				//saltamos nuevamente a count

end_count:
	add x10, x10, x13		//Almacenamos en los digitos finales
	strb wzr, [x10]			//'\0'
	add x10, x10, #-1		//restamos el valor del buffer
	mov w14, #10			//'\n'
	strb w14, [x10]
	add x10, x10, #-1		//Listo para guardar el numero

loop:					//colocamos el ultimo digito en el buffer
	udiv x12, x9, x11		//x12 = num/10
	mul x13, x12, x11		//x13 = x12 * 10
	sub x13, x9, x13		//reaminder
	add x13, x13, #'0'		//ascii remainder
	strb w13, [x10]			//store ascii
	add x10, x10, #-1		//offset--
	mov x9, x12			//num = num/10
	cbnz x9, loop			//while num != 0
	ret

zero:
	mov x9, #'0'			//Asignamos el caracter ASCII de cero a x9
	strb w9, [x10, #0]		//guardamos el ASCII con strb, a la posicion cero del buffer
	mov x9, #10			//asiganamos el ascii de nueva linea a x9
	strb w9, [x10, #1]		//guardamos nuevamente pero en la posicion uno del buffer
	strb wzr, [x10, #2]		//asiganmos el fin de cadena con wzr a la posicion dos del buffer
	ret
