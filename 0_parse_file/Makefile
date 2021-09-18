NAME = parse_file

SRC = main.c ft_parse_file.c ft_putstr.c 

INCLUDES = include

all:
	gcc -Wall -Wextra -Werror ${SRC} -o ${NAME} -I ${INCLUDES}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
