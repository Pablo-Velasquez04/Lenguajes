.global _start

.data
fact: .double 1.8
cons: .double 32
test: .double 57

.text
_start:
	ldr x1, =fact		//Cargamos direcciones y valores de fact, cons y test
	ldr d1, [x1]
	ldr x2, =cons
	ldr d2, [x2]
	ldr x3, =test
	ldr d3, [x3]

	fmul d0, d1, d3		//multiplicamos d1 y d3 y guardamos en d0
	fadd d0, d0, d2		//sumamos d0 y d2 y lo guardamos en d0
	fcvtzs x0, d0		//truncamos y convertimos el flotante a entero

	mov x8, #93		//Terminamos el programa
	svc #0

