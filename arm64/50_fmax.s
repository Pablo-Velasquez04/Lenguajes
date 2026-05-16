.global _start

.data
f1: .float 3.1
f2: .float 1.2

.text
_start:
	ldr x1, =f1		//Guardamos la direccion de f1 en x1
	ldr s1, [x1]		//cargamos el contenido de x1 a s1
	ldr x2, =f2		//lo mismo para f2
	ldr s2, [x2]

	fmax s0, s1, s2		//con fmax verificamos entre s1 y s2 es el mayor y lo guardamos en s0
	fcvtzs x0, s0		//truncamos y convertimos el decimal a punto flotante

	mov x8, #93		//fin del programa
	svc #0

