NAME = Grace

SRCS = Grace.c

OBJETS = ${SRCS:%.c=./%.o}

CC = gcc

FLAGS = -Wall -Werror -Wextra

%.o : %.c
	${CC} -I. -o $@ -c $? ${FLAGS}

${NAME}	 : ${OBJETS}
		${CC} -o ${NAME} ${OBJETS}


all: ${NAME}

clean :
	rm -rf ${OBJETS}

fclean : clean
	rm -rf ${NAME}
	rm -rf Grace_kid.c

re :  fclean all

PHONY = all clean fclean re