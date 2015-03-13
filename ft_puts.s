%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%include "ft_strlen.s"
	
section .text
	global _ft_puts

_ft_puts:
	mov rbx, rdi
	mov rdi, STDOUT
	lea rsi, [rbx]
	mov rdx, _ft_strlen
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret