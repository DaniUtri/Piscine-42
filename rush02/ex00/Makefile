
SRCS	= main.c ft_atoi.c ft_putstr.c   check_num.c ft_recursive_power.c ft_strcmp.c ft_strlen.c structure_arg.c write_number.c 

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= rush-02

RM		= rm -f

${NAME}:
		${CC} ${CFLAGS} ${SRCS} -I proto.h -o ${NAME}

all:		${NAME}

fclean:		
			${RM} ${NAME}

.PHONY:		all fclean 
