.global _start

.data					//Declaramos variables inicializadas
odd: .asciz "The number is odd\n"	//Valor IMPAR
even: .asciz "The number is even\n"	//Valor PAR

.text
_start:
	mov x0, #15			//colocamos 15 en x0

if:
	ands x0, x0, #1			//evaluamos and y luego guardamos el numero menos significativo (15 and 1 = 1) z=0
	b.eq else			//si z=1 entonces saltamos, de lo contrario seguimos con la siguiente instruccion

	mov x0, #1			//accion para escribir
	ldr x1, =odd			//colocamos la direccion en el registro x1
	mov x2, #18			//rango de 18 bits
	mov x8, #64			//comando syscall para write
	svc #0
	b endif				//saltamos al endif para terminar el programa

else:					//si z=1 en el "b.eq" entonces el numero es PAR y ejecutamos el even
	mov x0, #1
	ldr x1, =even
	mov x2, #19
	mov x3, #64
	svc #0
	b endif

endif:
	mov x0, #0
	mov x8, #93
	svc 0
