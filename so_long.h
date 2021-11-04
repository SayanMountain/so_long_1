/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:04:20 by pjeffere          #+#    #+#             */
/*   Updated: 2021/10/23 21:37:12 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "fcntl.h"
# include "unistd.h"
# include "stdio.h"
# include "unistd.h"
# include "mlx/mlx.h"
# include "stdlib.h"
# include "GNL/get_next_line.h"
# include "libft/libft.h"

typedef struct s_data1
{
	char			**map;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
	int				money_count;
	int				exit_count;
	int				play_id;
	int				play_x;
	int				play_y;
	int				scale;
	int				img_height;
	int				img_width;
	int				map_height;
	int				map_width;
	int				back_y;
	int				p_x;
	int				p_y;
	int				step;
	int				back_x;
	void			*mlx;
	void			*wind;
	void			*img;
	void			*play_img;
	void			*play_img_d;
	void			*play_img_s;
	void			*play_img_a;
	void			*play_img_w;
	void			*good_img;
	void			*wall_img;
	void			*exit_img;
	void			*enem_img;
	void			*kirp_img;
	void			*kust_img;
}					t_vars;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_data;

void	image_for_map(t_vars *vars);
void	check_size(t_vars *vars);
void	record_to_map(t_vars *vars);
void	map_start(char **argv, t_vars *vars);
void	map_start2(t_vars *vars);
void	draw_map(t_vars *vars);
void	free_arr(char **arr);
void	check_last_char(char **argv, _Bool first);
void	step_count(t_vars *vars);
void	all_check(t_vars *vars);
void	check_symbols(t_vars *vars);
void	check_borders(t_vars *vars);
void	check_length(t_vars *vars);
void	check_map_element(t_vars *vars);
int		exit_win(void *ptr);
int		keyboard(int keycode, t_vars *vars);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
