/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:06:39 by razouani          #+#    #+#             */
/*   Updated: 2024/03/08 16:36:35 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count_char(const char *str, char c, int index)
{
	int	p;

	p = 0;
	while (str[index] && str[index] != c)
	{
		p++;
		index++;
	}
	return (p);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char	*ft_strndup(const char *str, int index, int n)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_calloc(n + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (str[index] && i < n)
	{
		s[i] = str[index];
		i++;
		index++;
	}
	s[i] = '\0';
	return (s);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (j < count_words(s, c) && s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_strndup(s, i, count_char(s, c, i));
			if (!(tab[j]))
				return (ft_free(tab, j));
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

// // #include <stdio.h>

// // int main() {
// //     char **arr = ft_split("   lorem   ipsum dolor     sit amet,
// 		consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
// //     int i = 0;
// //     while (arr[i])
// //     {
// //         printf("%s\n", arr[i]);
// //         free(arr[i]);
// //         i++;
// //     }
// //     free(arr);
// // }