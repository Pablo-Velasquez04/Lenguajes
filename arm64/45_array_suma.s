.global _start
.extern itoa		//Invocamos a itoa

.data
array: .word 15, 48, 99, 56, 22, 34, 57, 19, 35, 61	//Declaramos un array de 10 elementos

.bss
buffer: .skip 11		//Declaramos buffer con 11 bytes

.text
_start:
	ldr x3, =array		//Guardamos la direcciòn de array en x3
	mov x4, #10		//x4 sera nuestro contador que decrementara para las iteraciones del loop
	mov x5, #0		//x5 sera nuestro acumulador de la suma, lo inicializamos con valor cero

loop:
	cbz x4, end		//verificamos si x4 es cero para salirnos del loop
	ldr w6, [x3], #4	//guardamos el valor de x3 (array) en w6, luego nos movemos de posicion en el array
	add x5, x5, x6		//sumamos x5+x6 y lo guardamos en x5
	subs x4, x4, #1		//restamos uno a x4 para el decremento del loop
	b loop			//saltamos a la etiqueta loop

end:
	mov x0, x5		//cargamos el resultado de x5 en x0
	ldr x1, =buffer		//cargamos la direccion del buffer a x1
	bl itoa			//Llamamos a la funciòn externa itoa

	mov x0, #1		//salida de impresion
	ldr x1, =buffer		//cargamos la difereciòn del buffer a x1 (nuevamente ya que x1 pudo cambiar despues de itoa)
	mov x2, #11		//imprimimos 11 bytes del buffer
	mov x8, #64		//Instruccion de imprimir syscall
	svc #0			//Llamamos al sistema

	mov x8, #93		//Terminamos el programa
	svc #0
