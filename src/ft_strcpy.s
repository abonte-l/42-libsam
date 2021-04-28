section .text
		global ft_strcpy

start:
	mov rcx, -1

comp:
	inc rcx
	mov dl, BYTE [rsi + rcx]
	mov BYTE [rdi + rcx], dl
	cmp dl, 0
	jne comp

end:
	mov rax, rdi
	ret
	