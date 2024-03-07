/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:04:42 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:04:45 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;
	unsigned char	v;

	p = (unsigned char *)s;
	i = 0;
	v = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == v)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char s [49]= "bonjour";
// 	printf("%s\n", (char *) ft_memchr(s, 106, 2));
//     printf("%s\n", (char *) memchr(s, 106, 2));
// 	return (0);

// }