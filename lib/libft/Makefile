
NAME = libft.a

SRCS = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isascii.c\
			ft_isalnum.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_strnstr.c\
			ft_memcmp.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_split.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_lenPP.c\
			ft_strdupl.c\
			ft_atoi_l.c\

BONUS = ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\



OBJS =          ${SRCS:.c=.o}
OBJS_BONUS = $(BONUS:.c=.o)

CC = cc
CF = -Wall -Wextra -Werror

HEADER =        libft.h

NAME =          libft.a


all:            ${NAME}

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar -rc $(NAME) $(OBJS)
	@echo "Compiled $(NAME) & .o."


bonus: $(OBJS_BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)
	ar -rc $(NAME) $(OBJS_BONUS)

.c.o:
	cc ${CF} -c $^ -include ${HEADER}

clean:
	@rm -f $(OBJS_BONUS) $(OBJS) 
	@echo "Deleted .o files."

fclean: clean
	@rm -f $(NAME)
	@echo "Deleted $(NAME)."

re:             fclean all

.PHONY:         all clean fclean re