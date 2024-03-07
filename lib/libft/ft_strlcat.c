/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:07:51 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:07:54 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// #include<stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main()
// {
//     char dest [14]= "a";
//     char src []= "lorem ipsum dolor sit amet";
//     char d [14]= "a";
//     char s []= "lorem ipsum dolor sit amet";
//     printf("la mienne :");
//     printf("%ld    ", ft_strlcat(dest, src, 15));
//     printf("%s\n", dest);
//     printf("la vrai   :");
//     printf("%ld    ", strlcat(d, s, 15));
//     printf("%s\n", d);
//     return (0);
// }