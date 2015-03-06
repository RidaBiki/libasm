section .text
	global start
	global _main
	global _retrdi
	global _retmod

start:
	call _main
	ret

_main:
	cmp rdi, 97
	jb _retrdi
	cmp rdi, 122
	ja _retrdi
	jmp _retmod

_retrdi:
	mov rax, rdi
	ret

_retmod:
	mov rbx, rdi
	sub rbx, 32
	mov rdi, rbx
	ret