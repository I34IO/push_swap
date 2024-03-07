/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:08:38 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:08:42 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		while (s1[i + j] == s2[j] && s1[i + j] && i + j < n)
		{
			j++;
			if (s2[j] == 0)
				return ((char *)s1 + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*#include<string.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("coucou bonjour pute", "bonjour", 15));
	printf("%s\n", strnstr("coucou bonjour pute", "bonjour", 15));
	return (0);
}*/