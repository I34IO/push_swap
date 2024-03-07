/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:01:34 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:01:42 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int main(int ac, char *av)
// {
// 	if (ac)
// 	{
// 		printf("%d\n", ft_isalpha(av[1]));
// 		printf("%d\n", isalpha(av[1]));
// 	}
// 	return (0);
// }