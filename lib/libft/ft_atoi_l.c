#include "libft.h"

long long int		ft_atoi_l(char *str)
{
	int	i;
	long long int	res;
	int	po;

	i = 0;
	res = 0;
	po = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			po *= -1;
		}	
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * po);
}
