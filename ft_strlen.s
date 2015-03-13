section .text
	global _ft_strlen

_ft_strlen:
	mov rcx, 0
	call loop
	ret

loop:
	cmp byte [rdi], 0
	je ret
	inc rcx
	inc rdi
	jmp loop

ret:
	mov rax, rcx
	ret