section .text
		global _ft_strlen

_ft_strlen:
		xor rax, rax

_fun:
		cmp byte[rdi + rax], 0
		je _end
		inc rax
		jmp _fun

_end:
		ret
