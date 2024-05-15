/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:00:43 by zizi              #+#    #+#             */
/*   Updated: 2024/05/15 15:20:43 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_op	*popo(t_argu *vars, t_op *list)
{
	int i;
	t_op *tmp;
	t_op *tempo;
	
	i = 1;
	list = ft_calloc(sizeof(t_op), 1);
	tmp = list;
	list->prev = list;
	list->data = ft_atoi(vars->split_argu[0]);
	while(vars->split_argu[i])
	{
		list->next = ft_calloc(sizeof(t_op), 1);
		list->next->prev = list;
		list->next->data = ft_atoi(vars->split_argu[i]);
		tempo = list;
		list = list->next;
		list->prev = tempo;
		i++;
	}
	tempo = list->prev->next;
	list->next = tmp;
	list->next->prev = tempo;
	return (tmp);
}