#include "so_long.h"

void image_for_map(t_vars *vars)
{
    int     x;
    int     y;

    x = 0;
    y = 0;
    vars->back_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/play.xpm", &x, &y);
    vars->play_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/play.xpm", &x, &y);
    vars->wall_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/back.xpm", &x, &y);
    vars->enem_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/enem.xpm", &x, &y);
    vars->exit_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/exit.xpm", &x, &y);
    vars->good_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/good.xpm", &x, &y);
    vars->kirp_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/kirp.xpm", &x, &y);
    vars->kust_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/kust.xpm", &x, &y);
    vars->wall_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/wall.xpm", &x, &y);
    vars->wall_img = mlx_xpm_file_to_image(vars->mlx, "/Users/pjeffere/Desktop/so_long/wall.xpm", &x, &y);
}
