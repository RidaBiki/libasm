section .text
	global start
	global _main
	global _ret0
	global _bz
	
start:
	call _main
	ret

_main:
	mov rcx, 0
	jmp _bz

_bz:
	cmp rcx, rsi
	ja _ret0
	mov [rdi], byte 0
	inc rdi
	inc rcx
	jmp _bz

_ret0:
	mov rax, rdi
	ret