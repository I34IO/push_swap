/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/05/22 18:23:49 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    visual_stack(t_op *a, t_op *b)
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


int main(int ac, char ** av)
{
    (void)ac;
    t_argu	*vars;
	t_op	*a;
	t_op	*b;
	
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		return(0);
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
	ft_push(&a, &b);
	//visual_stack(a, b);
	ft_push(&a, &b);
	//visual_stack(a, b);
	ft_printf("%d\n", b->next->next->data);
	




	
	// ft_printf("%d\n", b->data);
	// printf("avant le swap:\n");
	// ft_printf("%d\n", a->data);
	// for (t_op *curr = a->next; curr != a; curr = curr->next)
	// 	printf("%d\n", curr->data);
	// ft_sa(a);
	// ft_printf("\napres le swap:\n");
    return (0);
}