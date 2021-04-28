section .text
		global ft_strcmp
		extern ft_strlen
		extern ft_strcpy
		extern malloc

start:
	call ft_strlen ; appel de la fonction
	mov rdx, rdi ; "sauvegarde" de la str (rdi) dans rdx
	mov rdi, rax ; deplacement le la len de la str dans arg1 (rdi)

alloc:
	add rdi, 1 ; on ajoute 1 a la len de la str pour le '\0' (pour malloc)
	call malloc ; appel de la fonction
	cmp rax, 0 ; quand malloc echoue il renvoie NULL (0)
	je end ; si rax == 0 alors on va directement a end:

copy:
	mov rdi, rax ; on passe la valeur de retour de malloc dans l'arg1 de strcpy
	mov rsi, rdx ; on passe la len de la str dans l'arg2 de strcpy
	call ft_strcpy ; appel de la fonction
	
end:
	ret ; fin de la fonction (le retour de strcpy est automatiquement rax qui sera aussi la valeur de retour pour strdup donc il n'y a rien a faire de plus)
