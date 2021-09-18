
FILE = libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

O_FILES = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

HEADER = includes

all:	${FILE}

${FILE}:	
	gcc -Wall -Wextra -Werror -I ${HEADER} -c ${SRCS}
	ar rc ${FILE} ${O_FILES}
	ranlib ${FILE} 

clean: 
	rm -f ${O_FILES}

fclean: clean

	rm -f ${FILE}

re: 	fclean all
