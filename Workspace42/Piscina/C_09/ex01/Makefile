NAME 	= libft.a
SRCS 	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c
OBJS 	= ${SRCS:.c=.o}
CFLAGS 	= -Wall -Werror -Wextra
CC 		= gcc
INC		= includes
MKLIB	= ar rc
RM		= rm -f
.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INC}

all:		${NAME}

${NAME}:	${OBJS}
			${MKLIB} ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all re clean fclean .c.o
