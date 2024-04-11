#ifndef SO_LONG_H
# define SO_LONG_H

#include "../lib/libft/libft.h"
#include "../lib/ft_printf/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
# include <fcntl.h>
# include <fcntl.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef	struct s_argu {
	char **split_argu;
	char *join_argu;
	// struct s_argu *next;
	// struct s_argu *prev;
	
}				t_argu;

typedef struct s_op
{
	int		data;
	struct s_op	*next;
	struct s_op	*prev;
	t_argu argu;
	
}					t_op;


void split_av(char **av, t_argu *vars);
int    check_arg(t_argu *vars, char **av);
int     check_sign(char *str);
int    check_long(char *str);
int     check_double(t_argu *vars);
void	popo(t_argu *vars, t_op *list);





#endif