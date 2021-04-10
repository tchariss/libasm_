section .text
        global _ft_strdup

extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
        xor rax, rax

_fun:
        push rdi ; сохраняю rdi, тк будет перезаписан для malloc 
        call _ft_strlen
        mov rdi, rax  
        add rdi, 1 
        call _malloc ; rax - возв
        cmp rax, 0
        je _error_malloc ; если malloc fail
        pop rsi
        mov rdi, rax
        call _ft_strcpy
        jmp _end

_error_malloc:
        pop rdi
        mov rax, 0 ; malloc выделяет размер для rdi, если не удалось, то rax = 0
        ret

_end:
        ret
