/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:49:38 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 17:50:12 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"
#include<string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*y;

	i = 0;
	y = (char *) s;
	while (i < n)
	{
		y[i] = '\0';
		i++;
	}
	return ;
}

// int main()
// {
//   char s [7] = "bonjour";
//     ft_bzero(s,2);
//     return (0);
// }
