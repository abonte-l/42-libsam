section .text
		global ft_strdup
		extern ft_strlen
		extern ft_strcpy
		extern malloc

ft_strdup:
	xor rax, rax
    push r12
    mov r12, rdi
    call ft_strlen
    mov rdi, rax

alloc:
	inc rdi
    call malloc
    cmp rax, 0
    jne copy
    pop r12
    ret

copy:
	mov rdi, rax
    mov rsi, r12
    call ft_strcpy
    pop r12
    ret
