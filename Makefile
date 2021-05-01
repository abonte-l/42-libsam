NAME    	=	libasm.a

SRC		= 	$(shell find ./src -name *.s)

OBJ		= 	$(SRC:.s=.o)


CC		=	clang

CCFLAGS	=	-Wall -Wextra -Werror

EXEC	=	exe

all: $(NAME)

.s.o:
	@nasm -felf64 -s $< -o $(<:.s=.o)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[37;1m$(NAME)         \033[32;1m| creation OK |\033[0;1m"


test:main.o libasm.a
	@$(CC) main.o libasm.a -o $(EXEC)
	@echo "\033[37;1m./$(EXEC)            \033[32;1m| creation OK |\033[0;1m"

main.o:test/main.c 
	@$(CC) -c $< -I ./include -o main.o

clean:
	@$(RM) $(OBJ)
	@echo "\033[37;1mlibasm.a objects \033[33;1m|   supp OK   |\033[0;1m"  

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(EXEC)
	@$(RM) main.o 
	@echo "\033[37;1m$(NAME)         \033[33;1m|   supp OK   |\033[0;1m"
	@echo "\033[37;1m./exe            \033[33;1m|   supp OK   |\033[0;1m"
	@echo "\033[34;1m                 | all cleared |"

re: fclean all

.PHONY: all test clean fclean re
