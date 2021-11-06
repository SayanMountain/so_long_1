/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:59:11 by pjeffere          #+#    #+#             */
/*   Updated: 2021/10/23 21:09:16 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_length(t_vars *vars)
{
	int		len_str;
	int		x;

	x = 0;
	len_str = ft_strlen(vars->map[0]);
	while (vars->map[x])
	{
		if (ft_strlen(vars->map[x]) != len_str)
		{
			write (1, "map error - excess elements\n", 28);
			exit(0);
		}
		x++;
	}
}

void	check_symbols(t_vars *vars)
{
	int	y;
	int	x;

	y = 0;
	while (vars->map[y])
	{
		x = 0;
		while (vars->map[y][x])
		{
			if (vars->map[y][x] != 'E' && vars->map[y][x] != 'P' &&
				vars->map[y][x] != 'C' && vars->map[y][x] != '0' &&
				vars->map[y][x] != '1' && vars->map[y][x] != 'V' &&
				vars->map[y][x] != 'G' && vars->map[y][x] != 'K')
			{
				write(1, "map error - damp at the map\n", 28);
				exit(0);
			}
			x++;
		}
		y++;
	}
}

void	check_map_element(t_vars *vars)
{
	if (vars->play_id != 1)
	{
		write (1, "must have 1 player\n", 20);
		exit(0);
	}
	if (vars->money_count < 1)
	{
		write (1, "less, than 1 coin\n", 18);
		exit(0);
	}
	if (vars->exit_count < 1)
	{
		write (1, "less, than 1 exit\n", 18);
		exit(0);
	}
}

void	check_size(t_vars *vars)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	if (ft_strlen (vars->map[y]) > 10 || ft_strlen (vars->map[x]) > 10)
	{
		write(1, "too big map\n", 12);
		exit(0);
	}
}
