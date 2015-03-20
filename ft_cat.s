section .bss
	buf resb 1024
	bufsize equ $-buf

section .text
	global _ft_cat

_ft_cat:
	cmp rdi, 0
	jb ret_err
	push rdi
	mov rax, 3
	lea rsi, [rel buf]
	mov rdx, bufsize
	syscall
	pop rdi
	ret

ret_err:
	ret