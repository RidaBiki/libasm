section .text
	global _ft_strcat
	extern _ft_strlen
	
_ft_strcat:
	cmp byte [rdi], 0
	je strcat2
	inc rdi
	jmp _ft_strcat

strcat2:
	push rdi
	mov rdi, rsi
	call _ft_strlen
	pop rdi
	jmp loopcat

loopcat:	
	cmp rax, 0
	je end
	mov r9, [rsi]
	mov [rdi], r9
	inc rdi
	inc rsi
	sub rax, 1
	jmp loopcat
end:
	mov rax, rdi
	ret