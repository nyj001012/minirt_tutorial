NAME = vector

SRCS = src/main.c \
	   src/print.c \
	   src/utils.c
OBJS = ${SRCS:.c=.o}
INC  = -I include

MLX_DIR = ../minilibx_mms_20200219
MLX_LIB = libmlx.dylib

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
RMF = rm -rf

all: $(NAME)

$(NAME): $(MLX_LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) \
  					$(MLX_LIB) \
					-o $(NAME)

$(MLX_LIB):
	make all -C $(MLX_DIR)
	cp $(MLX_DIR)/$(MLX_LIB) .

%.o:%.c
	${CC} ${CFLAGS} $(INC) -c $< -o $@

clean:
	make -C $(MLX_DIR) clean
	$(RMF) $(OBJS)

fclean: clean
	$(RMF) $(NAME) $(MLX_LIB)

re: fclean
	all

.PHONY: all clean fclean re
