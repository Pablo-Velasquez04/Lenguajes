.global _start

_start:
    mov x1, #10		//almacenamos 10 en x1
    mov x2, #20		//almacenamos 20 en x2

    cmp x1, x2		//comparamos x1 and x2 (10-20=-10)
    mrs x0, nzcv	//movemos el nzcv a x0
    lsr x0, x0, #29	//hacemos un corrimiento de 28 bits a la derecha
			//resultado 8
    mov x8, #93
    svc #0

