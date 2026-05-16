.global _start

.bss					//Datos no inicializados
buffer: .skip 2				//Reservamos 2 bytes

.text
_start:
do:					//Al menos una sola vez ejecutamos las instrucciones
	mov x0, #0			//stdin para lectura
	ldr x1, =buffer			//colocamos la direccion del buffer al registro x1
	mov x2, #2			//longitud de 2 bytes
	mov x8, #63			//syscall para escritura write
	svc #0

	ldr x3, =buffer			//movemos la direccion del buffer a x3
	ldrb w4, [x3]			//almacenamos el contenido de x3 en w4
	sub w4, w4, #48			//Convertimos el numero a su ASCII y lo colocamos en w4

while:
	cbnz w4, do			//Si w0 != 0 saltamos a la etiqueta do

end:					//Terminamos el programa
	mov x8, #93
	svc 0
