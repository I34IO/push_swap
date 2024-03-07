/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:56:48 by zozo              #+#    #+#             */
/*   Updated: 2023/12/21 15:29:32 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_puthex(unsigned int n, char c)
{
	char	*hexa;
	int		len;

	len = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	else if (c == 'X')
		hexa = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		len += ft_puthex(n / 16, c);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}
