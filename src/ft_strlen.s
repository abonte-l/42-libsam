section .text
		global ft_strlen
start:
	mov rcx, 0

comp:
	cmp BYTE [rdi + rcx], 0
	jz end
	inc rcx
	jmp comp
	
end:
	mov rax, rcx
	ret
