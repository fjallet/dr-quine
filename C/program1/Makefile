NAME1 = Colleen

SRCS1 = Colleen.c

OBJETS1 = ${SRCS1:%.c=./%.o}

CC = gcc

FLAGS = -Wall -Werror -Wextra

%.o : %.c
	${CC} -I. -o $@ -c $? ${FLAGS}

${NAME1}	 : ${OBJETS1}
		${CC} -o ${NAME1} ${OBJETS1}

all: ${NAME1}

clean :
	rm -rf ${OBJETS1}

fclean : clean
	rm -rf ${NAME1}
	rm -rf tmp_Colleen

re :  fclean all

PHONY = all clean fclean re