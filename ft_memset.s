section .text
	global _ft_memset
	
_ft_memset:
	cmp rdi, 0
	je ret0
	mov rcx, rdx
	mov rax, rsi
	mov rdx, rdi
	cld
	rep stosb
	jmp rets
	
rets:
	mov rax, rdx
	ret