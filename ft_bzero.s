
section .text
	global _ft_bzero
	global _bz
	
_ft_bzero:
	mov rcx, 0
	jmp _bz

_bz:
	cmp rcx, rsi
	ja ret0
	mov [rdi], byte 0
	inc rdi
	inc rcx
	jmp _bz


ret0:
		mov rax, rdi
		ret