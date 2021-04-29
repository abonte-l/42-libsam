NAME    	=	libasm.a

SRC		= 	$(shell find ./src -name *.s)

OBJ		= 	$(SRC:.s=.o)


CC		=	clang

CCFLAGS	=	-Wall -Wextra -Werror

EXEC	=	testeur

all: $(NAME)

.s.o:
	nasm -felf64 -s $< -o $(<:.s=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) has been succesfully created"


test:main.o libasm.a
	$(CC) main.o libasm.a -o $(EXEC)

main.o:test/main.c 
	$(CC) -c $< -I ./include -o main.o

clean:
	$(RM) $(OBJ)  

fclean: clean
	$(RM) $(NAME)
	$(RM) $(EXEC)
	$(RM) main.o 

re: fclean all

.PHONY: all test clean fclean re
