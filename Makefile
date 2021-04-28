NAME	= libasm.a

DIR_SRCS = ./src/

SRCS	= $(DIR_SRCS)ft_strlen $(DIR_SRCS)ft_strcpy $(DIR_SRCS)ft_strcmp $(DIR_SRCS)ft_strdup $(DIR_SRCS)ft_read $(DIR_SRCS)ft_write

OBJS	= $(SRCS:.s=.o)

FLAGS_ASM	= -f elf64

RM	= rm -f

%.o: %.s
	nasm $(FLAGS_ASM) $< -o $@

$(NAME): $(OBJS) Makefile
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo $(NAME) : Created !

all	: $(NAME)

test : re
	clang -no-pie ./test/main.c -L libasm.a -lasm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

tclean: fclean
	$(RM) a.out

re :	fclean all

.PHONY: all, clean, fclean, test, re