section .text
		global ft_strcpy

start:
	mov rcx, -1 ;initialisation de rcx a -1

comp:
	inc rcx ; incrementation de rcx 
	mov dl, BYTE [rsi + rcx] ; copie char src[i] dans registre dl (partie 8-bits de rdx)
	mov BYTE [rdi + rcx], dl ; copie char src[i] (stocke dans dl) dans dest[i]
	cmp dl, 0 ; compare dl et 0
	jne comp ; si dl est different de 0 alors retour au debut

end:
	mov rax, rdi ; stockage de dest (rdi) dans rax (registre valeur de retour)
	ret ; fin de la fonction