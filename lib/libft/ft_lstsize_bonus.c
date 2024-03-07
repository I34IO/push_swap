/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:30 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:37 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include<stdio.h>

// int     main(void)
// {
//         int     *ptr = malloc(sizeof(int));
//         int     *ptr_lst = malloc(sizeof(int));

//         *ptr = 4;
//         *ptr_lst = 2;
//         t_list *new_head = ft_lstnew((void *)ptr);
// 		t_list *new_head2 = ft_lstnew((void *)ptr_lst);
// 		printf("%d\n", ft_lstsize(new_head2));

//         return (0);
// }