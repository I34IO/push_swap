/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/05/24 18:26:11 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	visual_stack(t_op *a, t_op *b)
{
	printf("[a]    [b]\n");
	while (a || b)
	{
		if (a == NULL)
			printf("-\t");
		else
			printf("{%d}\t", a->data);
		if (b == NULL)
			printf("-\n");
		else
			printf("{%d}\n", b->data);
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	t_argu	*vars;
	t_op	*a;
	t_op	*b;

	(void)ac;
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	vars = ft_calloc(sizeof(t_argu), 1);
	split_av(av, vars);
	if (check_arg(vars, av) == 0)
	{
		return (0);
	}
	a = NULL;
	b = NULL;
	a = popo(vars, a);
	sort(&a, &b);
	visual_stack(a, b);
	return (0);
}
