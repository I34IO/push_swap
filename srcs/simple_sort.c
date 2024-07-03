/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:16:14 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 08:19:00 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_op **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->data > (*a)->next->next->data)
		ft_ra(a);
	if ((*a)->next->data > (*a)->next->next->data)
		ft_rra(a);
	if ((*a)->data < (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		ft_rra(a);
		ft_sa(a);
	}
	if ((*a)->data > (*a)->next->data)
		ft_sa(a);
}

static void	sort_two(t_op **a)
{
	if ((*a)->data > (*a)->next->data)
		ft_ra(a);
}

static void	sort_four(t_op **a, t_op **b)
{
	int	size;
	int	min;

	size = list_size(*a);
	min = find_min_index(a);
	if (((*a)->data == min || (*a)->next->data == min) && size == 4)
	{
		while ((*a)->data != min)
			ft_ra(a);
		ft_pb(a, b);
		size--;
	}
	while ((*a)->data != min && size == 4)
		ft_rra(a);
	if (size == 4)
		ft_pb(a, b);
	sort_three(a);
	ft_pa(a, b);
}

static void	sort_five(t_op **a, t_op **b)
{
	int	size;
	int	min;

	size = list_size(*a);
	min = find_min_index(a);
	if (((*a)->data == min || (*a)->next->data == min) && size == 5)
	{
		while ((*a)->data != min)
			ft_ra(a);
		ft_pb(a, b);
		size--;
	}
	while ((*a)->data != min && size == 5)
		ft_rra(a);
	if (size == 5)
		ft_pb(a, b);
	sort_four(a, b);
	ft_pa(a, b);
}

void	simple_sort(t_op **a, t_op **b)
{
	int	size;

	size = list_size(*a);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else
		sort_five(a, b);
}
