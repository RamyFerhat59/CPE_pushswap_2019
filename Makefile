SRC=	src/push_swap.c\
	src/my_getnbr.c\
	src/my_putchar.c\
	src/my_put_nbr.c\
	src/my_putstr.c \
	src/push.c

NAME=	push_swap

CFLAGS=	$(HEAD) -Wall -Wextra

HEAD=	-Iinclude

CC=	gcc -g $(CFLAGS)

RM=	rm -f

OBJ=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all: 	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
