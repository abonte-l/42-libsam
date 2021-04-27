section .text
		global ft_strcmp
start:
	mov rcx, -1

comp:
	inc rcx
	cmp BYTE [rdi + rcx], 0
	jz comp_s1
	cmp BYTE [rsi + rcx], 0
	jz comp_s2
	mov dl, BYTE [rdi + rcx]
	cmp BYTE [rsi + rcx], dl
	jz comp
	sub dl, BYTE [rsi + rcx]
	jmp end

comp_s1:
	cmp BYTE [rsi + rcx], 0
	jz same
	mov dl, BYTE [rsi + rcx]
	movsx rax, dl
	ret

comp_s2:
	mov dl, BYTE [rsi + rcx]
	jmp end

same:
	mov rax, 0
	ret

end:
	movsx rax, dl
	ret