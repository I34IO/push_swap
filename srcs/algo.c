/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:22:02 by razouani          #+#    #+#             */
/*   Updated: 2024/07/03 08:12:41 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_iterations(t_op *stack)
{
	int	biggest_index;
	int	iterations;
	int	i;

	biggest_index = stack->data;
	iterations = 0;
	i = 0;
	while (stack)
	{
		if (stack->data > biggest_index)
			biggest_index = stack->data;
		stack = stack->next;
		i++;
	}
	while ((biggest_index >> iterations) != 0)
		iterations++;
	return (iterations);
}

void	sort(t_op **stack_a, t_op **stack_b)
{
	t_op	*curr_a;
	int		i;
	int		j;
	int		size;
	int		iterations;

	i = 0;
	curr_a = *stack_a;
	size = list_size(curr_a);
	iterations = get_iterations(*stack_a);
	while (i < iterations)
	{
		j = 0;
		while (j++ < size)
		{
			curr_a = *stack_a;
			if (((curr_a->data >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
		}
		while (list_size(*stack_b) != 0)
			ft_pa(stack_b, stack_a);
		i++;
	}
}
