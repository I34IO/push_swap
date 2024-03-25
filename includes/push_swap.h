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
	// t_list list;
}				t_argu;

// typedef struct s_list
// {
// 	void			*data;
// 	struct s_list	*next;
// }					t_list;


void split_av(char **av, t_argu *vars);
int    check_arg(t_argu *vars, char **av);
int     check_sign(char *str);
int    check_long(char *str);





#endif