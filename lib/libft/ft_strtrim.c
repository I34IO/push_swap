/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 02:51:29 by razouani          #+#    #+#             */
/*   Updated: 2023/11/21 02:55:34 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && check_char(set, s1[start]))
		start++;
	while (end > start && check_char(set, s1[end - 1]))
		end--;
	str = malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	while (s1[start] && start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

/*int main()
{
	char str[] = "   xxx   xxx";
	char charset[] = " x";
	char *zizi = ft_strtrim(str, charset);

	printf("%s\n", ft_strtrim(str, charset));
	printf("%s\n", zizi);
	free(zizi);
	return(0);
}*/