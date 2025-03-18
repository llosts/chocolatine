##
## EPITECH PROJECT, 2024
## chocolatine
## File description:
## Makefile
##

SRC		=	src/main.c

OBJ		=	$(SRC:.c=.o)

NAME	=	chocolatine

CC		=	gcc
CFLAGS	=	-Werror -Wall -Wextra -iquote include

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
