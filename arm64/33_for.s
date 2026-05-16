.global _start

_start:
	mov x0, #0		//variable resultado x0
	mov x1, #9		//variable de restaremos (numerador) x1
	mov x2, #3		//numero que restara (divisor) x2

for:
	cmp x1, #0		//comparamos x1-0, nos dira los valores de NZCV
	ble end			//si Z=1 y N != V salta a la etiqueta end, de lo contrario sigue con las instrucciones de abajo
	add x0, x0, #1		//sumamos x0+1 (el contador)
	sub x1, x1, x2		//Restamos x1-x2 hasta llegar a cero
	b for			//volvemos a la etiqueta for y validamos

end:				//Terminamos el programa
	mov x8, #93
	svc #0
