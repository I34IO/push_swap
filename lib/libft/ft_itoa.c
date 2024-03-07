/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:01:06 by razouani          #+#    #+#             */
/*   Updated: 2023/12/04 13:36:32 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len(long int i)
{
	int	count;

	count = 0;
	if (i == 0)
	{
		return (1);
	}
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	long int	nb;

	nb = n;
	i = len(nb);
	res = malloc(i * sizeof(char) + 1);
	if (!res)
		return (0);
	res[i--] = 0;
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}

// #include<stdio.h>

// int main()
// {
//     printf("%s\n", ft_itoa(0));
//     return (0);
// }
