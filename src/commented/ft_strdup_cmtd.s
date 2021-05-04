section .text
		global ft_strcmp
		extern ft_strlen
		extern ft_strcpy
		extern malloc

ft_strdup:
	xor rax, rax ;verification que rax est bien a zero ou sinon la met a zero
    push r15 ; empile r15 sur la stack
    mov r15, rdi ; "sauvegarde" de la str (rdi) dans r15
    call ft_strlen ; appel de la fonction
    mov rdi, rax ; deplacement le la len de la str dans arg1 (rdi)

alloc:
	inc rdi ; on ajoute 1 a la len de la str pour le '\0' (pour malloc)
    call malloc ; appel de la fonction
    cmp rax, 0 ; quand malloc echoue il renvoie NULL (0)
    jne copy ; si rax est different de 0 on passe dans copy
    pop r15 ; depile r15 de la stack
    ret ; fin de la fonction 

copy:
	mov rdi, rax ; deplacement du retour de malloc dans arg1 (rdi)
    mov rsi, r15 ; deplacement de la str d'origine dans arg2 (rsi)
    call ft_strcpy ; appel de la fonction
    pop r15 ; depile r15 de la stack
    ret ; fin de la fonction (le retour de strcpy est automatiquement rax qui sera aussi la valeur de retour pour strdup donc il n'y a rien a faire de plus)

