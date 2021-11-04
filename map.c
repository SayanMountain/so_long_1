/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:06:46 by pjeffere          #+#    #+#             */
/*   Updated: 2021/10/23 21:54:54 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_start(char **argv, t_vars *vars)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	vars->map = (char **)malloc(100);
	i = 0;
	while (get_next_line(fd, &line))
	{
		if (line == NULL)
		{
			free(line);
			write(1, "argument error\n", 15);
			exit (0);
		}
		vars->map[i] = ft_strdup(line);
		if (vars->map[i++] == NULL)
		{
			free(line);
			exit (0);
		}
		free(line);
	}
	vars->map[i] = ft_strdup(line);
	free(line);
}

void	map_start2(t_vars *vars)
{
	int	y;
	int	x;

	y = 0;
	while (vars->map[y])
	{
		x = 0;
		while (vars->map[y][x])
		{
			if (vars->map[y][x] == 'P')
			{
				vars->p_y = y;
				vars->p_x = x;
				vars->play_id++;
			}
			if (vars->map[y][x] == 'C')
				vars->money_count++;
			if (vars->map[y][x] == 'E')
				vars->exit_count++;
			x++;
		}
		y++;
	}
	vars->map_height = y * 50;
	vars->map_width = x * 50;
}

void	step_count(t_vars *vars)
{
	char	*r;

	r = ft_itoa(vars->step);
	mlx_string_put(vars->mlx, vars->wind, 10, 10, 0x00FF00, r);
	free(r);
}

static void	draw_map_2(t_vars *vars, int *s, int *x, int *y)
{
	if (vars->map[*s][*x] == 'P')
		mlx_put_image_to_window(vars->mlx, \
			vars->wind, vars->play_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == '1')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->wall_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == 'E')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->exit_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == 'C')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->good_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == 'V')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->enem_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == 'K')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->kirp_img, *x * 50, *y * 50);
	else if (vars->map[*s][*x] == 'G')
		mlx_put_image_to_window(vars->mlx, vars->wind,
			vars->kust_img, *x * 50, *y * 50);
}

void	draw_map(t_vars *vars)
{
	int		s;
	int		x;
	int		y;

	mlx_clear_window(vars->mlx, vars->wind);
	step_count(vars);
	y = 1;
	s = 0;
	while (vars->map[s])
	{
		x = 0;
		while (vars->map[s][x])
		{
			draw_map_2 (vars, &s, &x, &y);
			x++;
		}
		s++;
		y++;
	}
}
