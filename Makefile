##
## EPITECH PROJECT, 2024
## chocolatine
## File description:
## Makefile
##

SRC_MAIN=	src/main.c

SRC		=	src/chocolatine.c

TEST_SRC=	tests/test.c

OBJ		=	$(SRC:.c=.o)	 \
			$(SRC_MAIN:.c=.o)

NAME	=	chocolatine
TESTS	=	unit_tests

CC		=	gcc
CTESTS	=	--coverage -lcriterion
CFLAGS	=	-Werror -Wall -Wextra -iquote include

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

tests_run:
		$(CC) -o $(TESTS) $(SRC) $(TEST_SRC) $(CTESTS) $(CFLAGS);
		./$(TESTS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f $(TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:		fclean all

.PHONY:		all clean fclean re
