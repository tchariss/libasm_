section .text
		global _ft_read

extern ___error        

_ft_read:
		xor rax, rax 

_fun:
		mov rax, 0x2000003
		syscall 
        jc _err
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