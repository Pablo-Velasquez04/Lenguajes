.global _start

_start:
	bl func				//saltamos a func, guardando la direcciòn lr

	mov x8, #93			//Terminamos el programa
	svc #0

func:
	stp lr, fp, [sp, #-16]!		//reservamos 16 bytes en el stack pointer para guardar lr y fp
	mov x0, #10			//Colocamos 10 en x0
	ldp lr, fp, [sp], #16		//restauramos/liberamos el stack pointer con lr original
	ret				//retornamos

