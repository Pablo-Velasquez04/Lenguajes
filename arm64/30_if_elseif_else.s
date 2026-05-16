.global _start

.data
pos: .asciz "The number is positive\n"
neg: .asciz "The number is negative\n"
neu: .asciz "The number is neutral\n"

.text
_start:
	mov x0, #15

if:
	cmp x0, #0	//comparamos (15-0=15)
	blt elseif	//si x0 < 0 entonces saltamos a la etiqueta elseif
	beq else	//Si x0 == 0 entonces saltamos a la etiqueta else, de lo contrario es por que x0 > 0

	mov x0, #1	//Imprimimos si el valor es mayor a cero
	ldr x1, =pos
	mov x2, #23
	b endif

elseif:
	mov x0, #1	//Imprimimos si el valor es menor a cero
	ldr x1, =neg
	mov x2, #23
	b endif

else:
	mov x0, #1	//Imprimimos si el valor es igual a cero
	ldr x1, =neu
	mov x2, #22

endif:
	mov x8, #64	//Imprimimos el mensaje
	svc 0

	mov x0, #0	//Salimos del programa
	mov x8, #93
	svc #0
