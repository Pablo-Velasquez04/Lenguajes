.global _start

_start:
	mov x0, #10			//almacenamos 10 en x1
	mov x1, #15			//almacenamos 15 en x2
	bl smax				//salatamos a la etiqueta smax y guardamos direccion

	mov x8, #93			//syscall para salir
	svc #0				//llamada al sistema

smax:
	cmp x0, x1			//comparamos (10-15=-5) actualizamos NZCV
	csel x0, x0, x1, ge		//Si x0 >= x1, x0=x0; si no x0 = x1 (ge: N==V?)
	ret				//retornamos
