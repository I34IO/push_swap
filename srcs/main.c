/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/07/03 08:04:34 by razouani         ###   ########.fr       */
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

static int	ft_order(t_argu *vars)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (vars->split_argu[y])
	{
		if (vars->split_argu[y + 1] == NULL)
			break ;
		if (ft_atoi(vars->split_argu[y]) > ft_atoi(vars->split_argu[y + 1]))
			return (1);
		y++;
	}
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	exit(0);
}

static void	error_msg(t_argu *vars)
{
	ft_putstr_fd("Error\n", 2);
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
	ft_order(vars);
	a = NULL;
	b = NULL;
	a = init_list(vars, a);
	if (ac <= 6)
	{
		simple_sort(&a, &b);
		ft_free_list(b);
	}
	else
		sort(&a, &b);
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	ft_free_list(a);
	return (0);
}
