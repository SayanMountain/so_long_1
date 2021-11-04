/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_for_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:23:29 by pjeffere          #+#    #+#             */
/*   Updated: 2021/08/19 21:23:30 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	image_for_map(t_vars *vars)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	vars->play_img_w = mlx_xpm_file_to_image(vars->mlx, "./play_w.xpm", &x, &y);
	vars->play_img_s = mlx_xpm_file_to_image(vars->mlx, "./play_s.xpm", &x, &y);
	vars->play_img_a = mlx_xpm_file_to_image(vars->mlx, "./play_a.xpm", &x, &y);
	vars->play_img_d = mlx_xpm_file_to_image(vars->mlx, "./play_d.xpm", &x, &y);
	vars->play_img = mlx_xpm_file_to_image(vars->mlx, "./play.xpm", &x, &y);
	vars->wall_img = mlx_xpm_file_to_image(vars->mlx, "./wall.xpm", &x, &y);
	vars->enem_img = mlx_xpm_file_to_image(vars->mlx, "./enem.xpm", &x, &y);
	vars->exit_img = mlx_xpm_file_to_image(vars->mlx, "./exit.xpm", &x, &y);
	vars->good_img = mlx_xpm_file_to_image(vars->mlx, "./good.xpm", &x, &y);
	vars->kirp_img = mlx_xpm_file_to_image(vars->mlx, "./kirp.xpm", &x, &y);
	vars->kust_img = mlx_xpm_file_to_image(vars->mlx, "./kust.xpm", &x, &y);
}
