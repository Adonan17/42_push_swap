NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

SRC= 	ft_substr.c	ft_split.c	ft_strlcpy.c	ft_strlen.c\

OBJ = ${SRC:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	ar rsc ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
