.global _start

.bss				//Variables no inicializadas
buffer: .skip 2			//apartamos 2 bits

.text
_start:
	mov x0, #3		//almacenamos 3 en x0
	ldr x1, =buffer		//guardamos la direccion del buffer en x1

switch:				//etiqueta para los tres casos
	cmp x0, #1		//comparamos (3-1=2) por lo tanto z=o
	b.eq case1		//continuamos con la siguiente instruccion

	cmp x0, #2		//comparamos (3-2=1) por lo tanto z=0
	b.eq case2		//continuamos con la siguiente instruccion

	cmp x0, #3		//comparamos (3-3=0) por lo tanto z=1 (cumple)
	b.eq case3		//saltamos a la etiqueta case3

	b end			//si no es ninguno de los casos saltamos a la etiqueta end

case1:
	mov x0, #49
	strb w0, [x1]
	b end

case2:
	mov x0, #50
	strb w0, [x1]
	b end

case3:
	mov x0, #51		//movemos el ASCCI correspondiente a 3 a x0
	strb w0, [x1]		//guardamos el valor de x1 a w0

end:
	add x1, x1, #1		//aumentamos el buffer haciendo un tipo de offset
	mov x2, #10
	strb w2, [x1]

	mov x0, #1		//Imprimimos el buffer
	ldr x1, =buffer
	mov x2, #2
	mov x8, #64
	svc #0

	mov x0, #0		//Salimos del programa
	mov x8, #93
	svc #0
