.global _start

.data
float1: .float 3.5
float2: .float 2.5

.text
_start:
	ldr x0, =float1		//Cargamos direcciones y valores de float1 y float2
	ldr x1, =float2
	ldr s0, [x0]
	ldr s1, [x1]

	fcmp s0, s1		//comparamos (s0-s1) y actulizamos NVCZ
	cset w2, eq		//comparamos si (s0 == s1) ? 1 : 0

if:
	cbz w2, else		//si w2 es 1 entra al if, si w2 es 0 salta al else
	fcvtps w0, s0		//redondeamos hacia arriba y convertimos a entero a s0
	b end			//saltamos a la etiqueta end

else:
	fsub s2, s0, s1		//restamos los flotantes f1-f2 y lo almacenamos en s2
	fcvtps w0, s2		//redondeamos haci arriba y convetimos a entero a s2

end:
	mov x8, 93		//terminamos el programa
	svc #0
