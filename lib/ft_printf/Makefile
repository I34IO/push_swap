# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: razouani <razouani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 15:40:29 by adiaz-be          #+#    #+#              #
#    Updated: 2024/01/12 13:43:45 by razouani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ftprintf.a

SRC	=	ft_printf.c			\
		ft_putchar.c		\
		ft_putstr.c		\
		ft_putnbr.c		\
		ft_putuint.c		\
		ft_puthex.c		\
		ft_putptr.c		\
		ft_printf_utils.c			\

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re
