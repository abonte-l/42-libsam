section .text
		global ft_strcpy

ft_strcpy:
	;xor rdi, rdi
	xor rcx, rcx
    xor rax, rax
    jmp end
	ret

copy:
	mov al, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], al
	inc rcx

end:
	cmp BYTE [rsi + rcx], 0
	jne copy
    mov BYTE [rdi + rcx], 0
    mov rax, rdi
    ret
