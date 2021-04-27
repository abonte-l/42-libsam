section .text
		global ft_strcmp
start:
	mov rcx, -1 ;initialisation de rcx a -1

comp:
	inc rcx ; incrementation de rcx 
	cmp BYTE [rdi + rcx], 0 ; compare le char (BYTE) de str[i] ([rdi + rcx])  a zero (est ce une fin de chaine de caratere // rdi est le registre par defaut pour l'argument 1 de la fonction
	jz comp_s1 ; si la comparaison est egale a 0 alors on va directement a comp_s1:
	cmp BYTE [rsi + rcx], 0 ; compare le char (BYTE) de str[i] ([rsi + rcx])  a zero (est ce une fin de chaine de caratere // rsi est le registre par defaut pour l'argument 2 de la fonction
	jz comp_s2; si la comparaison est egale a 0 alors on va directement a comp_s2:
	mov dl, BYTE [rdi + rcx] ; attribution du char dans le registre dl (partie 8-bits de rdx)
	cmp BYTE [rsi + rcx], dl ;comparaison des char str[i] des deux str
	jz comp ; on retourne au debut de comp: si la comparaison = 0
	sub dl, BYTE [rsi + rcx] ; on soustrait le char dde rsi a ce lui de rdi
	jmp end ; on va directement a end:

comp_s1:
	cmp BYTE [rsi + rcx], 0
	jz same
	mov dl, BYTE [rsi + rcx]
	movsx rax, dl ; on attribue dl a rax mais comme il n'on pas la meme taille on utilise une instruction qui va le faire
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