/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:06:32 by razouani          #+#    #+#             */
/*   Updated: 2024/06/12 19:02:28 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/ft_printf/ft_printf.h"
# include "../lib/libft/libft.h"
# include <X11/Xlib.h>
# include <X11/keysym.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_argu
{
	char		**split_argu;
	char		*join_argu;
}				t_argu;

typedef struct s_op
{
	int			data;
	struct s_op	*next;
	struct s_op	*prev;
	t_argu		argu;

}				t_op;

void			split_av(char **av, t_argu *vars);
int				check_arg(t_argu *vars, char **av);
int				check_sign(char *str);
int				check_long(char *str);
int				check_double(t_argu *vars);
t_op			*init_list(t_argu *vars, t_op *list);
void			ft_sa(t_op **a);
void			ft_sb(t_op **b);
void			ft_ss(t_op **a, t_op **b);
void			ft_pa(t_op **recept, t_op **push);
void			ft_pb(t_op **push, t_op **recept);
int				swap_list(t_op **swap);
int				rotate_list(t_op **swap);
void			ft_ra(t_op **a);
void			ft_rb(t_op **b);
void			ft_rr(t_op **a, t_op **b);
int				reverse_list(t_op **swap);
void			ft_rra(t_op **a);
void			ft_rrb(t_op **b);
void			ft_rrr(t_op **a, t_op **b);
int				list_size(t_op *list);
int				get_iterations(t_op *stack);
void			sort(t_op **stack_a, t_op **stack_b);
void			ft_free_list(t_op *list);

#endif