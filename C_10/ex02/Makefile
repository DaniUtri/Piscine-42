NAME = ft_tail

SRC = main.c ft_len.c ft_putstr2.c write_message.c ft_options.c ft_readfiles.c ft_werror.c ft_utils.c

INCLUDE = include

MEM = -fsanitize=address

all:
	gcc -Wall -Wextra -Werror ${MEM} ${SRC} -I ${INCLUDE} -o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
