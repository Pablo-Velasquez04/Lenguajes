.global _start		//Pablo Daniel Velàsquez Hernandez

.data
	nums: .word 7,3,21,10

.text
_start:
	adr x0, nums

	ldp w3, w5, [x0]
	ldp w6, w9, [x0, #8]


	add w0, w3, w5
	add w0, w0, w6
	add w0, w0, w9

	mov x8, #93
	svc #0
