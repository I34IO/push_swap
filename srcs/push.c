/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:12:11 by zizi              #+#    #+#             */
/*   Updated: 2024/05/03 17:13:30 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push(t_op *push, t_op *recept)
{
	t_op *tmp;
	
	if (!push)
		return (0);
	if (!recept)
	{
		recept->data = push->data;
		return (1);
	}
	tmp = push;
	tmp->data = recept->data;
	recept->data = push->data;
	while (recept->next != tmp || recept->next != NULL)
	{
		recept->next->data = tmp->data;
		
	}
	
}