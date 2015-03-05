section .text
		global start
		global _main
		global _inf91
		global _inf122
		global _sup64
		global _sup96
		global _ret1
		global _ret0

start:
	    call _main
	    ret

_main:
		cmp rdi, 64
		ja _sup64
		jmp _ret0

_inf91:
		mov rax, 0
		ret

_sup64:
		cmp rdi, 90
		jbe _ret1
		jmp _inf122

_inf122:
		cmp rdi, 122
		jbe _sup96
		jmp _ret0

_sup96:
		cmp rdi, 96
		ja _ret1
		jmp _ret0

_ret1:
		mov rax, 1
		ret

_ret0:
		mov rax, 0
		ret
	