/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:07:14 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:07:17 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		i;

	i = 0;
	while (s[i])
		i++;
	t = malloc(sizeof(char) * i + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = s[i];
		i++;
	}
	t[i] = 0;
	return (t);
}

// #include<stdio.h>

// int main()
// {
//     char u[10] = "coucou";
//     printf("%s\n", ft_strdup(u));
//     //printf("%s\n", strdup(u));
//     return (0);
// }