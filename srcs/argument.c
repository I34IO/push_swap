/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zizi <zizi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:45:40 by zizi              #+#    #+#             */
/*   Updated: 2024/03/07 04:57:10 by zizi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void split_av(char **av, t_argu *vars)
{
    int i;

    i = 2;
    vars->join_argu = av[1];
    while (av[i])
    {
        vars->join_argu = ft_strdupM(vars->join_argu);
        vars->join_argu = ft_strjoin(vars->join_argu, av[i]);
        i++;
    }
    vars->split_argu = ft_split(vars->join_argu, ' ');
    return;
}

int    check_arg(t_argu *vars)
{
    int i;

    i = 0;
    while (vars->split_argu[i])
    {
        if (check_sign(vars->split_argu[i]) == 0)
            return (0);//all_free(vars);
        if (fix_arg(vars->split_argu[i]) == 0)
        i++;
    }
    return (1);
}

int     fix_arg(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[0] == '0' || str[1] == '0')
            while (str[i] == '0')
                i++;
        //je veux dupliquer la chaine sans les 0 pour avoir que le 5 (dans l'exemple de enzo) mias peut-on les suprimer ?
        i++;
    }
    return (1);
}

int     check_sign(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[0] == '+' || str[0] == '-')
            i++;
        else if (str[i] > '0' && str[i] < '9')
        {
            if (str[i] < '0' || str[i] > '9')
                return (0);
            i++;
        }
        else
            return (0);
    }
    return (1);
}

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

