/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupM.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:54:47 by razouani          #+#    #+#             */
/*   Updated: 2024/03/08 14:54:55 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdupl(const char *s)
{
	char	*t;
	int		i;

	i = 0;
	while (s[i])
		i++;
	t = malloc(sizeof(char) * i + 2);
	if (!t)
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = s[i];
		i++;
	}
    t[i] = ' ';
	t[i + 1] = 0;
	return (t);
}
