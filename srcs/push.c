/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:12:11 by zizi              #+#    #+#             */
/*   Updated: 2024/05/15 18:08:34 by razouani         ###   ########.fr       */
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
	(*recept)->data = push->data;
	(*recept) = add_node(&recept, push);
	push = delete_node(push);
	return (push);
}
t_op*	delete_node(t_op *push)
{
	t_op *tmp;
	
	push = push->next;
	free(push->prev);
	tmp = push->next;
	while (tmp != push->prev->prev)
		tmp = tmp->next;
	push->prev = tmp;
	return (push);
}

t_op*	add_node(t_op **recept, t_op *push)
{
	t_op *tmp;
	tmp = &recept;
	(*recept)->data = push->data;
	(*recept)->next
	//faire les prev et next de la pile b 
}