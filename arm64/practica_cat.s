.global _start

.bss
filename: .space 128
buffer:   .space 1024

.text
_start:
    //Obtener nombre del archivo (argumento)
    ldr x0, [sp, #16]
    ldr x1, =filename
    mov x2, #0

copy_arg:
    ldrb w3, [x0, x2]
    cmp w3, #0
    beq open_file
    strb w3, [x1, x2]
    add x2, x2, #1
    b copy_arg

open_file:
    //Abrir el archivo
    mov w3, #0
    strb w3, [x1, x2]

    mov x0, #-100
    ldr x1, =filename
    mov x2, #0
    mov x3, #0
    mov x8, #56
    svc #0
    mov x20, x0

read_loop:
    //Lectura del archivo
    mov x0, x20
    ldr x1, =buffer
    mov x2, #1024
    mov x8, #63
    svc #0

    cmp x0, #0
    beq close_file

    //Mostrar contenido en pantalla
    mov x2, x0
    mov x0, #1
    ldr x1, =buffer
    mov x8, #64
    svc #0

    b read_loop

close_file:
    //Cerrar archivo y salir
    mov x0, x20
    mov x8, #57
    svc #0

    mov x8, #93
    svc #0
