/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:00:43 by zizi              #+#    #+#             */
/*   Updated: 2024/07/03 07:51:08 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_op	*init_list(t_argu *vars, t_op *list)
{
	int		i;
	t_op	*tmp;
	t_op	*tempo;

	i = 1;
	list = ft_calloc(sizeof(t_op), 1);
	tmp = list;
	list->prev = list;
	list->data = ft_atoi(vars->split_argu[0]);
	while (vars->split_argu[i])
	{
		list->next = ft_calloc(sizeof(t_op), 1);
		list->next->prev = list;
		list->next->data = ft_atoi(vars->split_argu[i]);
		tempo = list;
		list = list->next;
		list->prev = tempo;
		i++;
	}
	return (tmp);
}

void	ft_free_list(t_op *list)
{
	while (list->next != NULL)
	{
		list = list->next;
		free(list->prev);
	}
	free(list);
	return ;
}

int	count_arg_list(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
