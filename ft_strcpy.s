section .text
        global _ft_strcpy

_ft_strcpy:
        mov rcx, -1
        xor rax, rax
_fun:
        inc rcx
        cmp byte[rsi + rcx], 0
        je _end
        mov dl, byte[rsi + rcx]
        mov byte[rdi + rcx], dl
        jmp _fun
_end:
        mov dl, byte[rsi + rcx]
        mov byte[rdi + rcx], dl
        mov rax, rdi
        ret