/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:00:43 by zizi              #+#    #+#             */
/*   Updated: 2024/04/11 18:52:10 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	popo(t_argu *vars, t_op *list)
{
	int i;
	i = 0;
	
	while(vars->split_argu[i])
	{
		list = ft_calloc(sizeof(1), 1);
		list->data = ft_atoi(vars->split_argu[i]);
		ft_printf("%d\n", list->data);
		list = list->next;
		i++;
	}
	// list->next = NULL;
}