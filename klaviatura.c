/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   klaviatura.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:23:07 by pjeffere          #+#    #+#             */
/*   Updated: 2021/08/20 09:04:25 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_key_w(t_vars *vars)
{
	if ((vars->map[vars->p_y - 1][vars->p_x] == 'E' && vars->money_count == 0)
		|| vars->map[vars->p_y - 1][vars->p_x] == 'V')
	{
		write(1, "game again\n", 10);
		exit(0);
	}
	if (vars->map[vars->p_y - 1][vars->p_x] == '1' ||
		vars->map[vars->p_y - 1][vars->p_x] == 'E')
		return ;
	if (vars->map[vars->p_y - 1][vars->p_x] == 'C')
		vars->money_count--;
	vars->map[vars->p_y - 1][vars->p_x] = 'P';
	vars->map[vars->p_y][vars->p_x] = '0';
	vars->step++;
	vars->p_y = vars->p_y - 1;
	vars->play_img = vars->play_img_w;
}

static void	check_key_a(t_vars *vars)
{
	if ((vars->map[vars->p_y][vars->p_x - 1] == 'E' && vars->money_count == 0)
		|| vars->map[vars->p_y][vars->p_x - 1] == 'V')
	{
		write(1, "game again\n", 10);
		exit(0);
	}
	if (vars->map[vars->p_y][vars->p_x - 1] == '1' ||
		vars->map[vars->p_y][vars->p_x - 1] == 'E')
		return ;
	if (vars->map[vars->p_y][vars->p_x - 1] == 'C')
		vars->money_count--;
	vars->map[vars->p_y][vars->p_x - 1] = 'P';
	vars->map[vars->p_y][vars->p_x] = '0';
	vars->step++;
	vars->p_x = vars->p_x - 1;
	vars->play_img = vars->play_img_a;
}

static void	check_key_s(t_vars *vars)
{
	if ((vars->map[vars->p_y + 1][vars->p_x] == 'E' && vars->money_count == 0)
		|| vars->map[vars->p_y + 1][vars->p_x] == 'V')
	{
		write(1, "game again\n", 10);
		exit(0);
	}
	if (vars->map[vars->p_y + 1][vars->p_x] == '1' ||
		vars->map[vars->p_y + 1][vars->p_x] == 'E')
		return ;
	if (vars->map[vars->p_y + 1][vars->p_x] == 'C')
		vars->money_count--;
	vars->map[vars->p_y + 1][vars->p_x] = 'P';
	vars->map[vars->p_y][vars->p_x] = '0';
	vars->step++;
	vars->p_y = vars->p_y + 1;
	vars->play_img = vars->play_img_s;
}

static void	check_key_d(t_vars *vars)
{
	if ((vars->map[vars->p_y][vars->p_x + 1] == 'E' && \
		vars->money_count == 0) || vars->map[vars->p_y][vars->p_x + 1] == 'V')
	{
		write(1, "game again\n", 10);
		exit(0);
	}
	if (vars->map[vars->p_y][vars->p_x + 1] == '1' || \
							vars->map[vars->p_y][vars->p_x + 1] == 'E')
		return ;
	if (vars->map[vars->p_y][vars->p_x + 1] == 'C')
		vars->money_count--;
	vars->map[vars->p_y][vars->p_x + 1] = 'P';
	vars->map[vars->p_y][vars->p_x] = '0';
	vars->step++;
	vars->p_x = vars->p_x + 1;
	vars->play_img = vars->play_img_d;
}

int	keyboard(int keycode, t_vars *vars)
{
	if (keycode == 53)
		exit (0);
	else if (keycode == 0)
		check_key_a(vars);
	else if (keycode == 1)
		check_key_s(vars);
	else if (keycode == 2)
		check_key_d(vars);
	else if (keycode == 13)
		check_key_w(vars);
	draw_map(vars);
	return (0);
}
