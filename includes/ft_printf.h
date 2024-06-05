/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:55:15 by zozo              #+#    #+#             */
/*   Updated: 2024/06/05 17:48:43 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(char const *str, ...);
int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_putnbr(long int n, int *len);
unsigned int	ft_putuint(unsigned int n);
int				ft_puthex(unsigned int n, char c);
int				ft_putptr(void *ptr);
char			*ft_aux(unsigned long long n, char *base);

#endif
