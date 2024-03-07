/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:08:23 by razouani          #+#    #+#             */
/*   Updated: 2023/12/04 13:42:00 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;

	i = 0;
	t = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!t)
		return (NULL);
	while (i < ft_strlen(s))
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = 0;
	return (t);
}

// #include<stdio.h>

// char oui(unsigned int i, char c)
// {
//     return (c - 32);
// }

// int main()
// {
//     char p[20] = "bonjoursalechien";
//  	char *r = ft_strmapi(p, oui);
//  	printf("%s\n", r);
//     return (0);
// }
