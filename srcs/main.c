/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zizi <zizi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:40:47 by zizi              #+#    #+#             */
/*   Updated: 2024/03/07 04:19:09 by zizi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char ** av)
{
    (void)ac;
    t_argu *vars;
    vars = ft_calloc(sizeof(t_argu), 1);
    split_av(av, vars);
    if (check_arg(vars) == 0)
        return (0);
    ft_printf("%s\n", vars->split_argu[0]);
    ft_printf("%s\n", vars->split_argu[1]);
    ft_printf("%s\n", vars->split_argu[2]);

    return (0);
}