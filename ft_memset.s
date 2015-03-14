section .text
	global _ft_memset
	
_ft_memset:
	mov r11, rdi
	cmp r11, 0
	je ret0
	push rdi
	mov rcx, 0
	jmp length

ft_memset2:	
	pop rdi
	mov r9, rcx
	mov rcx, 0
	jmp loop2

length:
	cmp byte [rdi + rcx], 0
	je ft_memset2
	inc rcx
	jmp length
	
loop2:
	cmp rcx, r9
	jae rets
	cmp rcx, rdx
	jae end
	mov [rdi + rcx], rsi
	inc rcx
	jmp loop2

end:
	inc rcx
	jmp loop2
	
ret0:
	mov rax, 0
	ret

rets:
	mov rax, rdi
	ret