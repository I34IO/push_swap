/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:45:40 by zizi              #+#    #+#             */
/*   Updated: 2024/03/08 17:06:22 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void split_av(char **av, t_argu *vars)
{
    int i;

    i = 2;
    vars->join_argu = av[1];
    while (av[i])
    {
        vars->join_argu = ft_strdupl(vars->join_argu);
        vars->join_argu = ft_strjoin(vars->join_argu, av[i]);
        i++;
    }
    vars->split_argu = ft_split(vars->join_argu, ' ');
    return;
}

int    check_arg(t_argu *vars, char **av)
{
    int i;

    i = 1;
	if (!vars->split_argu)
		return (0);
	while (av[i])
	{
		if (!vars->split_argu[i - 1])
			return (0);
		i++;
	}
	i = 0;
    while (vars->split_argu[i])
    {
        if (check_sign(vars->split_argu[i]) == 0)
			return (0);//all_free(vars);
		if (ft_atoi_l(vars->split_argu[i]) > INT_MAX || ft_atoi_l(vars->split_argu[i]) < INT_MIN)
			return (0);
		i++;
    }
    return (1);
}

int     check_sign(char *str)
{
    int i;

    i = 0;
	if (!str)
		return (0);
    while(str[i])
    {
        if ((i == 0) && (str[0] == '+' || str[0] == '-'))
            i++;
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else if ((str[i] < '0' || str[i] > '9'))
            return (0);
		i++;
    }
    return (1);
}


