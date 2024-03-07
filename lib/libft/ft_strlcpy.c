/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:07:59 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:08:02 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char u [10]= "salut";
//     char p [10]= "bonjour";
//     printf("%ld\n", ft_strlcpy(u, p, 4));
//     //printf("%ld\n", strlcpy(u, p, 10));
//     printf("%s\n", u);
//     return (0);
// }