/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:12:11 by zizi              #+#    #+#             */
/*   Updated: 2024/05/23 18:30:11 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

// int		ft_push(t_op **push, t_op **recept)
// {
// 	t_op	*push_node;

// 	if (!*push)
// 		return (0);
// 	push_node = (*push);
// 	(*push) = (*push)->next;
// 	if (*push)
// 		(*push)->prev = NULL;
// 	if (!*recept)
// 	{
// 		*recept = push_node;
// 		push_node->next = NULL;
// 	}
// 	else
// 	{
// 		push_node->next = *recept;
// 		push_node->next->prev = push_node;
// 		*recept = push_node;
// 	}
// 	return (1);
// }

// void	ft_pa(t_op **recept, t_op **push)
// {
// 	if (ft_push(recept, push) == 1)
// 		ft_printf("pa\n");
// }

// void	ft_pb(t_op **push, t_op **recept)
// {
// 	if (ft_push(push, recept) == 1)
// 		ft_printf("pb\n");
// }

static int ft_push(t_op **a, t_op **b)
{
	t_op *push_node;

	if (!*a)
		return (0);
	push_node = (*a);
	(*a) = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	if (!*b)
	{
		*b = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *b;
		push_node->next->prev = push_node;
		*b = push_node;
	}
	return (1);
}

void ft_pa(t_op **b, t_op **a)
{
if (ft_push(b, a) == 1)
ft_printf("pa\n");
}

void ft_pb(t_op **a, t_op **b)
{
if (ft_push(a, b) == 1)
ft_printf("pb\n");
}






















// t_op*		push(t_op **push, t_op **recept)
// {
// 	//t_op *tmp;
	
// 	if (!push)
// 		return (push);
// 	if (!(*recept))
// 	{
// 		(*recept) = ft_calloc(sizeof(t_op), 1);
// 		(*recept)->data = (*push)->data;
// 		(*recept)->next = (*recept);
// 		(*recept)->prev = (*recept);
// 		push = delete_node(push);
// 		return (push);
// 	}
// 	push = add_node(recept, push);
// 	push = delete_node(push);
// 	return (push);
// }

// t_op*	add_node(t_op **recept, t_op *push)
// {
// 	t_op *tmp;
// 	t_op *tmp_2;
// 	tmp = (*recept);
// 	tmp_2 = (*recept);
// 	while ((*recept)->next != tmp)
// 		tmp_2 = tmp_2->next;
// 	ft_printf("%d\n", tmp->data);
// 	if ((*recept)->next != tmp)
// 		while ((*recept)->next != tmp)
// 		{
// 			(*recept) = ft_calloc(sizeof(t_op), 1);
// 			(*recept) = (*recept)->next;
// 		}
// 	else
// 		(*recept) = ft_calloc(sizeof(t_op), 1);
// 		(*recept)->next = ft_calloc(sizeof(t_op), 1);
// 	while ((*recept) != tmp)
// 		(*recept) = (*recept)->next;
// 	(*recept)->data = push->data;
// 	(*recept) = (*recept)->next;
// 	while(tmp != tmp_2)
// 	{
// 		(*recept)->data = tmp->data;
// 		(*recept) = (*recept)->next;
// 		tmp = tmp->next;
// 	}

	 
// 	 return(push);
// }

// t_op*	delete_node(t_op *push)
// {
// 	t_op *tmp;
// 	t_op *tmp_2;
	
// 	push = push->next;
// 	free(push->prev);
// 	tmp_2 = push;
// 	tmp = push->next;
// 	while (tmp != push->prev->prev)
// 		tmp = tmp->next;
// 	push->prev = tmp;
// 	while(push != tmp)
// 		push = push->next;
// 	push->next = tmp_2;
// 	push = push->next;
// 	return (push);
// }