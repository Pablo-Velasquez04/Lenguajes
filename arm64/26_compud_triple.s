.global _start

_start:
    mov x0, #15    // valor a comparar
    mov x1, #10    // límite inferior
    mov x2, #20    // límite superior
    mov x3, #15    // otro valor igual a x0

    cmp x0, x1     // 15 > 10 ?
    cset x4, lt    // x4 = 1 si GT, si no 0 → aquí x4 = 1

    cmp x0, x2     // 15 < 20 ?
    cset x5, gt    // x5 = 1 si LT, si no 0 → aquí x5 = 1

    cmp x0, x3     // 15 != 15 ?
    cset x6, ne    // x6 = 1 si NE, si no 0 → aquí x6 = 0

    and x0, x4, x5 // x0 = 1 & 1 = 1
    and x0, x0, x6 // x0 = 1 & 0 = 0

    mov x8, #93    // exit
    svc #0