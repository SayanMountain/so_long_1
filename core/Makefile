NAME		= 	so_long
SRCS		=	main.c 							\
				image_for_map.c 				\
				hook.c 							\
				support.c						\
				klaviatura.c					\
				GNL/get_next_line.c 			\
				GNL/get_next_line_utils.c 		\
				libft/ft_strlen.c 				\


HEADERS		= 	so_long.h
OBJS		=	$(SRCS:.c=.o)
FLAGS		=	-Wall -Wextra -Werror
PROJDIR		=	$(dir $(CURDIR))
CC			=	gcc

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

$(NAME): $(HEADERS) $(OBJS)
	$(CC) ${OBJS} -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	rm -f  $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all
.PHONY:    all clean fclean re
