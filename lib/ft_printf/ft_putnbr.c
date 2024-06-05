/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:56:43 by zozo              #+#    #+#             */
/*   Updated: 2024/06/05 17:20:12 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int n, int *len)
{
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		n = -n;
		*len += ft_putchar('-');
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	*len += ft_putchar(n % 10 + 48);
	return (*len);
}
