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
	mov al, byte[rdi + rcx]
    cmp al, byte[rsi + rcx]
    je s1
    sub al, byte[rsi + rcx]
    movsx rax, al
    ret

s1:
    cmp byte[rdi + rcx], 0
    jne s2
    ret

s2:
    cmp byte[rsi + rcx], 0
    jne incr
    ret