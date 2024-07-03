/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:15:25 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 08:16:05 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_op **a)
{
	t_op	*tmp;
	int		min;

	tmp = *a;
	min = tmp->data;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (min > tmp->data)
			min = tmp->data;
	}
	return (min);
}

int	list_size(t_op *list)
{
	int	len;

	if (!list)
		return (0);
	len = 1;
	while (list->next)
	{
		list = list->next;
		len++;
	}
	return (len);
}
