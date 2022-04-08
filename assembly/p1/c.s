	.file	"c.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"hi"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], 2
	jmp	.L2
.L3:
	mov	edi, OFFSET FLAT:.LC0
	mov	eax, 0
	call	printf
	add	DWORD PTR [rbp-4], 1
.L2:
	cmp	DWORD PTR [rbp-4], 10
	jle	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 12.1.0"
	.section	.note.GNU-stack,"",@progbits
