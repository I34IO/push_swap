/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/06/12 19:27:56 by razouani         ###   ########.fr       */
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

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	ft_order(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < (ac - 1))
	{
		if (ft_atoi(av[i]) > ft_atoi(av[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_argu	*vars;
	t_op	*a;
	t_op	*b;

	(void)ac;
	if (ac == 1)
		return (0);
	vars = ft_calloc(sizeof(t_argu), 1);
	split_av(av, vars);
	if (check_arg(vars, av) == 0 || ft_order(ac, av) == 0)
	{
		return (0);
	}
	a = NULL;
	b = NULL;
	a = init_list(vars, a);
	sort(&a, &b);
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	ft_free_list(a);
	return (0);
}
