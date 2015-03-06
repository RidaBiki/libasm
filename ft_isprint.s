section .text
    global start
    global _main
    global _ret0
    global _ret1

start:
    call _main
    ret

_main:
    cmp rdi, 32
    jb _ret0
    cmp rdi, 126
    ja _ret0
    jmp _ret1

_ret0:
	
	mov rax, 0
	ret

_ret1:
	mov rax, 1
	ret