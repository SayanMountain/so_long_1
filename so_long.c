/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:13:13 by pjeffere          #+#    #+#             */
/*   Updated: 2021/10/23 21:38:26 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_counts(t_vars *vars)
{
	vars->play_id = 0;
	vars->money_count = 0;
	vars->exit_count = 0;
	vars->step = 0;
}

void	check_arg(char *s)
{
	int	i;

	i = 0;
	while (s && *s != '.')
		s++;
	if (ft_strncmp(s, ".ber", 4))
	{
		write (1, "error in out arg\n", 17);
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	t_vars		vars;

	if ((argc == 1) || (argc > 2))
	{
		write (1, "error in out arg\n", 17);
		exit (1);
	}
	check_arg(argv[1]);
	init_counts(&vars);
	map_start(argv, &vars);
	map_start2(&vars);
	all_check(&vars);
	vars.mlx = mlx_init();
	vars.wind = mlx_new_window(vars.mlx, vars.map_width,
			vars.map_height + 50, "Go");
	image_for_map(&vars);
	draw_map(&vars);
	mlx_hook (vars.wind, 2, 1L << 0, keyboard, &vars);
	mlx_hook (vars.wind, 17, 0, exit_win, &vars);
	mlx_loop (vars.mlx);
	mlx_destroy_window (vars.mlx, vars.wind);
	return (1);
}
