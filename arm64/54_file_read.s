.global _start

.data
filename: .asciz "test.txt"

.bss
buffer: .space 1024

.text
_start:
	//Abrir el archivo test.txt
        mov x0, #-100
        ldr x1, =filename
        mov x2, #0		//Lo abrimos en O_RDONLY
        mov x3, #0777
        mov x8, #56
        svc #0
        mov x20, x0

	//Cargamos el contenido del buffer en el archivo
        mov x0, x20
        ldr x1, =buffer
        mov x2, #1024		//longitud de 1024 bytes del buffer
        mov x8, #63
        svc #0

	//Cerramos el archivo
        mov x0, x20
        mov x8, #57
        svc #0

	//Imprimimos el buffer
	mov x0, #1		//cargamos el STDOUT
	ldr x1, =buffer		//cargamos la direcciòn del buffer en x1
	mov x2, #1024		//la longitud del buffer
	mov x8, #64		//syscall para write
	svc #0

	//Finalizamos el programa
        mov x8, #93
        svc #0
