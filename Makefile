NAME		= 	so_long

SRCS		=	so_long.c 						\
				image_for_map.c 				\
				support.c						\
				support_copy.c					\
				klaviatura.c					\
				map.c							\
				GNL/get_next_line.c 			\
				GNL/get_next_line_utils.c 		\
				ft_itoa.c						\
				ft_calloc.c						\
				ft_memset.c						\
				map_check_1.c					\
				map_check_2.c					\
				ft_strncmp.c

HEADERS		= 	so_long.h
OBJS		=	$(SRCS:.c=.o)
FLAGS		=	-Wall -Wextra -Werror
PROJDIR		=	$(dir $(CURDIR))
CC			=	gcc

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

$(NAME): $(HEADERS) $(OBJS)
	$(CC) ${OBJS} -Lmlx -lmlx -framework OpenGL -framework AppKit  -o $(NAME)

clean:
	rm -f  $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all
.PHONY:    all clean fclean re