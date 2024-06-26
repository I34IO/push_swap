/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:56:38 by zozo              #+#    #+#             */
/*   Updated: 2024/06/05 17:20:36 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_p(uintptr_t n)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		len += ft_print_p(n / 16);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}

int	ft_putptr(void *p)
{
	int	len;

	if (!p)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x") + ft_print_p((uintptr_t)p);
	return (len);
}
