/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:11:26 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 07:43:48 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_list(t_op **swap)
{
	t_op	*last;

	if (!*swap)
		return (0);
	last = found_last_list(*swap);
	last->next = *swap;
	*swap = (*swap)->next;
	(*swap)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
	return (1);
}

t_op	*found_last_list(t_op *swap)
{
	if (!swap)
		return (NULL);
	while (swap->next)
		swap = swap->next;
	return (swap);
}

void	ft_ra(t_op **a)
{
	if (rotate_list(a) == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_op **b)
{
	if (rotate_list(b) == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_op **a, t_op **b)
{
	if (rotate_list(a) == 1 && rotate_list(b) == 1)
		ft_printf("rr\n");
}
