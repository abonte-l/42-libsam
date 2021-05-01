section .text
		global ft_strcmp

ft_strcmp:
	xor rcx, rcx
    xor rax, rax
    xor al, al
    jmp comps
    ret

incr:
    inc rcx

comps:
	mov al, BYTE [rdi + rcx]
    cmp al, BYTE [rsi + rcx]
    je s1
    sub al, BYTE [rsi + rcx]
    movsx rax, al
    ret

s1:
    cmp BYTE [rdi + rcx], 0
    jne s2
    ret

s2:
    cmp BYTE [rsi + rcx], 0
    jne incr
    ret