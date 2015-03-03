section .data
hello:
	.string db "Hello World!", 10
	.len equ $ - hello.string

section .text
	global start
	global _main
	extern _printf

start:
	call _main
	ret

_main:
	push rbp
	mov rsp, rbp
	sub rsp, 16
	lea rdi, hello.string
	call printf
	leave
	ret