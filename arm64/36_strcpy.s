.global _start

.data
string1: .string "Hello, World!\n"

.bss				//Variables no inicializadas
string2: .skip 15		//Reservamos 15 bytes en memoria para la string2

.text
_start:
	ldr x0, =string1	//Colocamos la direcciòn de string1 a x0
	ldr x1, =string2	//Colocamos la direcciòn de string2 a x1

loop:
	ldrb w2, [x0]		//Cargamos 1 byte de la direcciòn x0 al registro w2
	cbz w2, end		//Verificamos si w2 es igual a cero, si es asì, saltamos a end
	strb w2, [x1]		//ALmacenamos en x1 el byte contenido en w2 (vamos copiando la cadena string 1)
	add x0, x0, #1		//Avanzamos de posiciòn en el string1 de la cadena contenida en x0
	add x1, x1, #1		//Avanzamos de posiciòn en string2 para almacenar el nuevo byte
	b loop			//Repetimos el bucle saltando a la etiqueta loop

end:
	mov x0, #1		//Salida a pantalla
	ldr x1, =string2	//almacenamos la direcciòn de string2 a x1 para imprimirlo
	mov x2, #15		//Longitud a imprimir
	mov x8, #64		//syscall para escribir en pantalla
	svc #0			//llamada al sistema

	mov x0, 0		//finalizamos el programa
	mov x8, #93
	svc #0


