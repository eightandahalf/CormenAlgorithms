	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "&d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$5, 20(%esp)
	movl	$2, 24(%esp)
	movl	$4, 28(%esp)
	movl	$6, 32(%esp)
	movl	$1, 36(%esp)
	movl	$3, 40(%esp)
	movl	$0, 44(%esp)
	movl	$0, 60(%esp)
	movl	$0, 56(%esp)
	jmp	L2
L3:
	movl	56(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	addl	$1, 56(%esp)
L2:
	cmpl	$5, 56(%esp)
	jle	L3
	movl	$10, (%esp)
	call	_putchar
	movl	$1, 52(%esp)
	jmp	L4
L8:
	movl	52(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	movl	%eax, 44(%esp)
	movl	52(%esp), %eax
	subl	$1, %eax
	movl	%eax, 60(%esp)
	jmp	L5
L7:
	movl	60(%esp), %eax
	leal	1(%eax), %edx
	movl	60(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	movl	%eax, 20(%esp,%edx,4)
	subl	$1, 60(%esp)
L5:
	cmpl	$0, 60(%esp)
	js	L6
	movl	60(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	cmpl	44(%esp), %eax
	jg	L7
L6:
	movl	60(%esp), %eax
	leal	1(%eax), %edx
	movl	44(%esp), %eax
	movl	%eax, 20(%esp,%edx,4)
	addl	$1, 52(%esp)
L4:
	cmpl	$5, 52(%esp)
	jle	L8
	movl	$0, 48(%esp)
	jmp	L9
L10:
	movl	48(%esp), %eax
	movl	20(%esp,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	addl	$1, 48(%esp)
L9:
	cmpl	$5, 48(%esp)
	jle	L10
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
