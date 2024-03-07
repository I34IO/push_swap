/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:51:50 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 17:58:50 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmeb, size_t size)
{
	unsigned char	*t;
	size_t			i;

	i = 0;
	t = NULL;
	if (nmeb == 0 || size == 0)
		return (malloc(0));
	if (nmeb * size < nmeb || nmeb * size < size)
		return (NULL);
	t = malloc(nmeb * size);
	if (t == 0)
		return (NULL);
	while (i < nmeb * size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     printf("%s\n", (char *) ft_calloc(4, 4));
//     printf("%s\n", (char *) calloc(4, 4));
//     return (0);
// }