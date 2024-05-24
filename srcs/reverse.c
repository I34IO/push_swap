/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:48:33 by razouani          #+#    #+#             */
/*   Updated: 2024/05/24 18:29:42 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_list(t_op **swap)
{
	t_op	*last;

	if (!*swap || !(*swap)->next)
		return (0);
	last = (*swap);
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->next = *swap;
	last->prev = NULL;
	*swap = last;
	last->next->prev = last;
	return (1);
}

void	ft_rra(t_op **a)
{
	if (reverse_list(a) == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_op **b)
{
	if (reverse_list(b) == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_op **a, t_op **b)
{
	if (reverse_list(a) == 1 && reverse_list(b) == 1)
		ft_printf("rrr\n");
}
