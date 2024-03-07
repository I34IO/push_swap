/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:02:05 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:02:09 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!lst || !new)
		return ;
	if (*lst)
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
	else
		*lst = new;
}

// #include<stdio.h>

// int main()
// {
//     t_list *lst;

//     struct list list1;

//     list1.content = 2;

//     struct list list2;

//     list1.content = 6;

//     while(lst->next != NULL)
//     {
//         printf("%d\n", lst);
//         lst = lst->next;
//     }
//     return (0);

// }