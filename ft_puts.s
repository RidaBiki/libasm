%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

section .text
	global start
	global _main

start:
	call _main
	ret

_main:
	mov rbx, rdi
	mov rdi, STDOUT
	lea rsi, rbx
	mov rdx, 
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret