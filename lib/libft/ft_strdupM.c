#include "libft.h"
#include<stdlib.h>

char	*ft_strdupM(const char *s)
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