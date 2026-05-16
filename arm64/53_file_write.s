.global _start

.data
filename: .asciz "test.txt"			//Nombre del archivo a crear
buffer: .asciz "Hello,\nWorld!\n"		//Contenido del test.txt

.text
_start:
	//Creamos el archivo test.txt
	mov x0, #-100		//AT_FDCWD archivo relativo al directorio actual
	ldr x1, =filename	//direcciòn del nombre del archivo
	mov x2, #101		//operacon de crear el archivo
	mov x3, #0777		//cargamos el octal para permisos Unix del archivo
	mov x8, #56		//Syscall para abrir y crear un archivo
	svc #0			//llamamos al sistema
	mov x20, x0		//devuleve un file descriptor y guardamos en x20

	//en el arhcivo escribimos el contenido de buffer
	mov x0, x20		//colocamos el dile descriptor en x0
	ldr x1, =buffer		//cargamos la direcciòn del buffer en x1
	mov x2, #15		//longitud cantidad de bytes a escribir
	mov x8, #64		//syscall write
	svc #0			//llamamos al sistema

	//cerramos el archivo  (file descriptor)
	mov x0, x20		//cargamos el file descriptor en x0
	mov x8, #57		//syscall para cerrar
	svc #0

	//Fin del programa
	mov x8, #93
	svc #0
