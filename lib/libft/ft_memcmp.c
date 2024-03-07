/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:52 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:54 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u;
	unsigned char	*p;
	size_t			i;

	i = 0;
	u = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (i < n)
	{
		if (u[i] > p[i])
			return (1);
		if (u[i] < p[i])
			return (-1);
		i++;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char u [9]= "cobco";
//     char p [9]= "coaco";
//     printf("%d\n", ft_memcmp(u, p, 5));
//     printf("%d\n", memcmp(u, p, 5));
//     return (0);
// }