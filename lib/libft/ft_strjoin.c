/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:07:42 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:25:30 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*t;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	t = malloc(sizeof(char) * (j + i) + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		t[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		t[i++] = s2[j++];
	t[i] = 0;
	return (t);
}

// #include<stdio.h>

// int main()
// {
//     printf("%s\n", ft_strjoin("bonyyy    7 ", "matin"));
//     return (0);
// }