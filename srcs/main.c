/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/06/26 20:56:50 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	ft_order(char **list)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (list[y])
	{
		if (ft_atoi(list[y]) > ft_atoi(list[y + 1]))
			return (1);
		y++;
	}
	ft_free(list, ft_lenpp(list));
	exit(0);
}

static void	error_msg(t_argu *vars)
{
	ft_printf("error\n");
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	exit(0);
}

int	main(int ac, char **av)
{
	t_argu	*vars;
	t_op	*a;
	t_op	*b;

	if (ac <= 1)
		return (0);
	vars = ft_calloc(sizeof(t_argu), 1);
	split_av(av, vars);
	if (check_arg(vars, av) == 0)
		error_msg(vars);
	ft_order(vars->split_argu);
	a = NULL;
	b = NULL;
	a = init_list(vars, a);
	if (ac == 4)
		sort_three(&a);
	else if (ac == 3)
		sort_two(&a);
	else
		sort(&a, &b);
	verif(&a);
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	ft_free_list(a);
	return (0);
}

void	verif(t_op **a)
{
	t_op	*last;

	if (!a)
		return ;
	last = found_last_list(*a);
	if ((*a)->data > last->data)
		ft_ra(a);
}
