.global _start		//Pablo Daniel Velàsquez Hernandez

.data
        nums: .word 7,3,21,10

.text
_start:
        adr x0, nums

	ldr w3, [x0]
	ldr w5, [x0, #4]
	ldr w6, [x0, #8]
	ldr w9, [x0, #12]

        add w0, w3, w5
        add w0, w0, w6
        add w0, w0, w9

        mov x8, #93
        svc #0

