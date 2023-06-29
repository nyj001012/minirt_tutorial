NAME = 	ray_and_camera

SRCS =	src/print/print.c \
		src/scene/canvas.c \
		src/scene/scene.c \
		src/trace/ray.c \
		src/util/vec3_utils.c \
		src/main.c
OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	${NAME}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.c
		${CC} ${CFLAGS} -I include -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
