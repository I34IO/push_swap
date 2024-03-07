/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:19:11 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:03 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	po;

	i = 0;
	res = 0;
	po = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
		{
			po *= -1;
		}	
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * po);
}

// #include<stdio.h>
// #include<stdlib.h>

// int main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		printf("%d\n", ft_atoi(av[1]));
// 		printf("%d\n", atoi(av[1]));
// 	}
// 	return (0);
// }