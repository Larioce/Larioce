##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	file_for_list_management/file1.c	\
		file_for_list_management/file2.c	\
		file_for_list_management/file3.c	\
		file_for_list_management/file4.c	\
		file_for_list_management/file5.c	\
		file_for_list_management/file6.c	\
		file_for_list_management/file7.c	\
		file_for_list_management/file8.c	\
		file_for_list_management/file9.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ) my_free.o

clean:
	@rm -f $(OBJ)
	@rm -f *~

fclean:	clean
	@rm -f $(NAME)

re:	clean all

.PHONY: all clean fclean re
