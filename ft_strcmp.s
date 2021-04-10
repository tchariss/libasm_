section .text
        global _ft_strcmp

_ft_strcmp:
        mov rcx, -1
	mov dl, 0
	mov bl, 0
        mov rdx, 0
        mov rbx, 0
        xor rax, rax

_fun:
        inc rcx
        cmp byte[rdi + rcx], 0
	je _end
        mov dl, byte[rdi + rcx]                      
        mov bl, byte[rsi + rcx]
        jz _end
        cmp dl, bl
        jz _fun
        jmp _end

_end:
        mov dl, byte[rdi + rcx]
        mov bl, byte[rsi + rcx]
	sub rdx, rbx
        mov rax, rdx
        ret