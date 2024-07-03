/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:12:11 by zizi              #+#    #+#             */
/*   Updated: 2024/07/03 07:11:36 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_op **a, t_op **b)
{
	t_op	*push_node;

	if (!*a)
		return (0);
	push_node = (*a);
	(*a) = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	if (!*b)
	{
		*b = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *b;
		push_node->next->prev = push_node;
		*b = push_node;
	}
	return (1);
}

void	ft_pa(t_op **b, t_op **a)
{
	if (ft_push(b, a) == 1)
		ft_printf("pa\n");
}

void	ft_pb(t_op **a, t_op **b)
{
	if (ft_push(a, b) == 1)
		ft_printf("pb\n");
}
