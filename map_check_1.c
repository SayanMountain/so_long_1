/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:59:29 by pjeffere          #+#    #+#             */
/*   Updated: 2021/08/19 20:59:30 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_str(char **argv)
{
	int	str;
	int	i;

	i = -1;
	str = 0;
	while (argv[str])
		str++;
	str--;
	while (argv[0][++i])
	{
		if (argv[str][i] != '1')
		{
			write (1, "map error - excess elements\n", 28);
			exit(0);
		}
		if (argv[0][i] != '1')
		{
			write (1, "map error - excess elements\n", 28);
			exit(0);
		}
	}
}

void	check_last_char(char **argv, _Bool first)
{
	int		i;
	int		str;

	str = 0;
	i = 0;
	if (!first)
	{
		while (argv[0][i])
			i++;
		i--;
	}
	while (argv[str])
	{
		if (argv[str][i] != '1')
		{
			write (1, "map error - excess elements\n", 28);
			exit(0);
		}
		str++;
	}
}

void	all_check(t_vars *vars)
{
	check_last_char (vars->map, 0);
	check_last_char (vars->map, 1);
	check_length(vars);
	check_str(vars->map);
	check_symbols(vars);
	check_map_element(vars);
	check_size(vars);
}
