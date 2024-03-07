/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:05:50 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:05:53 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*p;
	unsigned int	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char str[8];
// 	printf("%s\n", ft_memset(str, 103, 8));
// 	return (0);
// }