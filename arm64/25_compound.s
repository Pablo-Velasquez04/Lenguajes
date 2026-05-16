.global _start

_start:
	mov x0, #15	//valor a comparar
	mov x1, #10	//limite inferior
	mov x2, #20	//limite superior

	cmp x0, x1	//comparamos (15-10=5)
	cset x3, lt	//Si gt fue 1 colocalo en x3, de lo contrario 0 (Resultado: 1)

	cmp x0, x2	//comparamos (15-20=-5)
	cset x4, gt	//Si lt fue 1 colocalo en x4, de lo contrario 0 (Resultado: 1)

	and x0, x3, x4	//(1 and 1 = 1 = x3) RESULTADO EN CONSOLA: 1

	mov x8, #93
	svc #0
