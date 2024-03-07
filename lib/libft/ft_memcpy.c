/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razouani <razouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:05:00 by razouani          #+#    #+#             */
/*   Updated: 2023/11/17 18:53:15 by razouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*u;
	unsigned int	i;

	if (dest == 0 && src == 0)
		return (dest);
	i = 0;
	u = (unsigned char *)src;
	p = (unsigned char *)dest;
	while (i < n)
	{
		*p++ = *u++;
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char k [7]= "bonjour";
// 	char i [13]= "nanbienouquoi";
// 	printf("%s\n", ft_memcpy(i, k, 8));
// 	//printf("%p\n", memcpy(i, k, 8));
// 	return (0);
// }