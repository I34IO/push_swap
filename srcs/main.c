/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/06/24 16:44:30 by razouani         ###   ########.fr       */
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

static int	ft_order(char **list)
{
	int	i;
	int y;

	i = 0;
	y = 0;
	while (list[y])
	{
		if (ft_atoi(list[y]) > ft_atoi(list[y + 1]))
			return (1);
		y++;
	}
	ft_free(list, ft_lenpp(list));
	exit (0);
}

static void error_msg(t_argu *vars)
{
	ft_printf("error\n");
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	exit(0);
}


int	main(int ac, char **av)
{
	t_argu	*vars;
	t_op	*a;
	t_op	*b;

	if (ac <= 1)
		return (0);
	vars = ft_calloc(sizeof(t_argu), 1);
	split_av(av, vars);
	if (check_arg(vars, av) == 0)
		error_msg(vars);
	ft_printf("caca");
	ft_order(vars->split_argu);
	ft_printf("caca");
	a = NULL;
	b = NULL;
	a = init_list(vars, a);
	if (ac == 4)
		sort_three(&a);
	else if (ac == 3)
		sort_two(&a);
	else
		sort(&a, &b);
	ft_printf("%d\n", a->data);
	ft_free(vars->split_argu, ft_lenpp(vars->split_argu));
	free(vars);
	ft_free_list(a);
	return (0);
}
