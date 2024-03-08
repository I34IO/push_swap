/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/03/08 17:01:44 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char ** av)
{
    (void)ac;
    t_argu *vars;
	
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		return(0);
	}
    vars = ft_calloc(sizeof(t_argu), 1);
    split_av(av, vars);
    if (check_arg(vars, av) == 0)
        return (0);
    ft_printf("%s\n", vars->split_argu[0]);
    ft_printf("%s\n", vars->split_argu[1]);
    ft_printf("%s\n", vars->split_argu[2]);
	ft_printf("GOOD\n");
    return (0);
}