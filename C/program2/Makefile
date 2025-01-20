NAME1 = Colleen
NAME2 = Grace

SRCS1 = Colleen.c
SRCS2 = Grace.c

OBJETS1 = ${SRCS1:%.c=./%.o}
OBJETS2 = ${SRCS2:%.c=./%.o}

CC = gcc

FLAGS = -Wall -Werror -Wextra

%.o : %.c
	${CC} -I. -o $@ -c $? ${FLAGS}

${NAME1}	 : ${OBJETS1}
		${CC} -o ${NAME1} ${OBJETS1}

${NAME2}	 : ${OBJETS2}
		${CC} -o ${NAME2} ${OBJETS2}

all: ${NAME1} ${NAME2}

clean :
	rm -rf ${OBJETS1}
	rm -rf ${OBJETS2}

fclean : clean
	rm -rf ${NAME1}
	rm -rf ${NAME2}

re :  fclean all

PHONY = all clean fclean re