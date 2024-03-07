/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:55:07 by zozo              #+#    #+#             */
/*   Updated: 2023/12/21 15:55:06 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


int	check_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));//ok
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));//ok
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int), &len));//ok
	else if (c == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));//ok
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c));//ok
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));//ok
	else if (c == '%')
		return (ft_putchar('%'));//ok
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			len += check_format(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}