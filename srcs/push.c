/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:12:11 by zizi              #+#    #+#             */
/*   Updated: 2024/05/20 19:41:52 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_op*		push(t_op *push, t_op **recept)
{
	//t_op *tmp;
	
	if (!push)
		return (push);
	if (!(*recept))
	{
		(*recept) = ft_calloc(sizeof(t_op), 1);
		(*recept)->data = push->data;
		(*recept)->next = (*recept);
		(*recept)->prev = (*recept);
		push = delete_node(push);
		return (push);
	}
	(*recept) = add_node(recept, push);
	push = delete_node(push);
	return (push);
}

t_op*	add_node(t_op **recept, t_op *push)
{
	t_op *tmp;
	tmp = *recept;
	ft_printf("%d\n", tmp->data);
	(*recept) = ft_calloc(sizeof(t_op), 1);
	(*recept)->data  = push->data;
	
	ft_printf("%d\n", (*recept)->data);
	// ft_printf("%d\n", (*recept)->next->next->data);
	//  for (t_op *curr = (*recept)->next; curr != (*recept); curr = curr->next)
	//  	printf("%d\n", curr->data);
	// (*recept) = (*recept)->next;
	// (*recept)->data = push->data;
	 
	 return(*recept);
}

t_op*	delete_node(t_op *push)
{
	t_op *tmp;
	t_op *tmp_2;
	
	push = push->next;
	free(push->prev);
	tmp_2 = push;
	tmp = push->next;
	while (tmp != push->prev->prev)
		tmp = tmp->next;
	push->prev = tmp;
	while(push != tmp)
		push = push->next;
	push->next = tmp_2;
	push = push->next;
	return (push);
}