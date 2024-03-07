/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:56:22 by zozo              #+#    #+#             */
/*   Updated: 2023/12/21 15:57:30 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

unsigned int	ft_putuint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putuint(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}
