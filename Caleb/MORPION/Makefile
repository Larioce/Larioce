##
## EPITECH PROJECT, 2023
## Larioce
## File description:
## Makefile
##

SRC	=	$(addprefix sources/,	\
							main.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	morpion

LDFLAGS	=	-fno-builtin -W -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME):	$(OBJ)
	@make -C lib/my/
	@gcc -o $(NAME) $(OBJ) $(LDFLAGS) -L./lib/my/ -lmy

clean:
	@make -C lib/my/ clean
	@rm -f *~
	@rm -f *#
	@rm -f includes/*~
	@rm -f includes/*#
	@rm -f vgcore*

fclean:
	@make -C lib/my/ fclean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
