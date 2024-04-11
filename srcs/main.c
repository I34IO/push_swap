/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/04/11 18:53:42 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char ** av)
{
    (void)ac;
    t_argu *vars;
	t_op *list;
	
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		return(0);
	}
    vars = ft_calloc(sizeof(t_argu), 1);
	list = ft_calloc(sizeof(1), 1);
    split_av(av, vars);
    if (check_arg(vars, av) == 0)
	{
		return (0);
	}
	popo(vars, list);
    // ft_printf("%s\n", vars->split_argu[0]);
    // ft_printf("%s\n", vars->split_argu[1]);
    // ft_printf("%s\n", vars->split_argu[2]);
	int i = 0;
	while(i < 2)
	{
		ft_printf("%d\n", list->data);
		list = list->next;
		i++;
	}
	ft_printf("GOOD\n");
    return (0);
}