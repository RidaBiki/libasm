section .text
	global _ft_strdup
	extern _malloc
	
_ft_strdup:
	push rdi
	mov rcx, 0
	mov r10, 0
	jmp loop2

ft_strdup2:
	mov rdi, rcx
	call _malloc
	pop rdi
	mov r9, rdi
	mov rdi, rax
	jmp ft_memcpy2

ft_memcpy2:
	mov rax, r9
	mov rcx, r10
	mov rdx, rdi
	cld
	rep movsb
	mov rax, rdx
	ret

loop2:
	cmp byte [rdi], 0
	je ft_strdup2
	inc rcx
	inc r10
	inc rdi
	jmp loop2
