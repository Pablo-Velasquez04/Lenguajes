.global factorial		//hacemos que la etiqueta "factorial" se visible para otros archivos

factorial:
	mov x9, x0		//Copiamos el valor de entrada que tenga x0 a x9
	mov x10, #1		//Inicializa x10 con 1 (factorial de 0 es 1) este seria el acumulador de resultado

rec:				//etiqueta de recursion
	cbz x9, end_rec		//Comparamos si x9 == 0, si lo es saltamos a la end_rec
	mul x10, x10, x9	//aquì multiplicamos el valor x10 con x9 (x10 = x10 * x9)
	add x9, x9, #-1		//decrementamos el valor de x9 (x9 = x9 - 1) o (x9--)
	b rec			//saltamos a la etiqueta rec para repetir el proceso asta que x9 sea cero

end_rec:
	mov x0, x10		//guardamos el contenido de x10 en x0 para retonarlo
	ret
