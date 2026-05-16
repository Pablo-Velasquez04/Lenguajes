.global _start

.bss				//Datos no inicializados
str: .skip 27			//reseramos 27 bytes para la variable str

.text
_start:
	ldr x0, =str		//movemos la direccion de str al registro x0
	mov x1, #26		//colocamos 26 al registro x1 (contador)
	mov x2, #'A'		//colocamos su ASCII a al registro x2

loop:				//etiqueta al loop
	strb w2, [x0]		//almacenamos el 1 byte menos significativo de w2 al registro x0
	add x2, x2, #1		//sumamos x2+1 para la siguiente letra
	sub x1, x1, #1		//restamos x1-1 para ir decrementando el contador
	add x0, x0, #1		//sumamos x0+1 para la siguiente posicion
	cbnz x1, loop		//si x1 != 0, entonces repetimos y vamos a la etiqueta loop, de lo contrario seguimos abajo

	mov x2, #10		//damos un salto de linea con ASCII '\n'
	strb w2, [x0]		//guardamos guardamos el contenido en la direccion de x0

	mov x0, #1		//Imprimimos el buffer
	ldr x1, =str
	mov x2, #27
	mov x8, #64
	svc #0

	mov x0, #0		//Salimos del programa
	mov x8, #93
	svc #0
