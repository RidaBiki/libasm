%include "ft_isalpha.s"

section .text
	global start2
	global _main2
	global _sup48
	global _inf58

start2:
	call _main
	ret

_main2:
	cmp rdi, 58
	jae _main
	jb _inf58

_inf58:
	cmp rdi, 48
	jae _ret1
	jb _ret0
