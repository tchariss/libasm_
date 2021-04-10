section .text
		global _ft_write

extern ___error

_ft_write:
		xor rax, rax

_fun:
		mov rax, 0x2000004
		syscall ; Если ошибка, число сохраняется в rax, равное errno
		jc _err ; Если write вернул ошибку, нужно вызвать error(argv[1])
		jmp _end

_err:
		push rax ; значение ошибки стек вызовов
		call ___error
		pop rdx ; унесли данные и освободили область памяти
		mov [rax], rdx
		mov rax, -1
		ret

_end:
		ret