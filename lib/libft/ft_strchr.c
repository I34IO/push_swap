/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:07:05 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:07:08 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	v;

	v = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == v)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == v)
		return ((char *)&s[i]);
	return (0);
}

// #include<stdio.h>
// #include<string.h>
// #include<stddef.h>

// int main()
// {
// 	char *s = "tripouille";
//   char *b = "tripouille";
//   printf("la vrai   :");
// //  printf("%s", strchr(s, 'z'));
//   printf("la mienne :");
// 	printf("%s", ft_strchr(b, 'z'));
// 	return (0);
// }