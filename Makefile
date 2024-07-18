NAME = push_swap

C_FILES = main.c argument.c list.c swap.c push.c rotate.c reverse.c algo.c simple_sort.c utils.c

SRCS = $(addprefix srcs/,$(C_FILES))

CFLAGS = -Wall -Wextra -Werror -g3 -I includes/

LIB = ft_printf/ftprintf.a libft/libft.a
DEPS = $(addprefix lib/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C lib/ft_printf
	make -C lib/libft
	cc ${CFLAGS} ${SRCS} -L lib -lm -lz -o ${NAME} ${DEPS}

clean:
	make -C lib/ft_printf clean
	make -C lib/libft clean

fclean:	clean
		rm -rf ${NAME}

re:             fclean all

.PHONY:         all clean fclean re