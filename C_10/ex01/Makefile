NAME = ft_cat

INCLUDE = include

SRC = main.c ft_werror.c

all: 
	gcc -Wall -Wextra -Werror ${SRC} -I ${INCLUDE} -o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
