/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:43:59 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 07:43:36 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_list(t_op **swap)
{
	int	tmp;

	if (!swap || !(*swap)->next)
		return (0);
	tmp = (*swap)->data;
	(*swap)->data = (*swap)->next->data;
	(*swap)->next->data = tmp;
	return (1);
}

void	ft_sa(t_op **a)
{
	if (swap_list(a) == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_op **b)
{
	if (swap_list(b) == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_op **a, t_op **b)
{
	if (swap_list(a) == 1 && swap_list(b) == 1)
		ft_printf("ss\n");
}
