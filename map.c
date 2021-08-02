#include "so_long.h"

void draw_map (t_vars *vars)
{
    int x;
    int y;

    mlx_clear_window(vars->mlx, vars->wind);
    y = 0;
    while(vars->map[y])
    {
//        mlx_clear_window(vars->mlx, vars->wind);
        x = 0;
        while (vars->map[y][x])
        {
            if(vars->map[y][x] == 'P')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->play_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'L')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->kust_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'K')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->kirp_img, x * 50, y * 50);
            else  if(vars->map[y][x] == '1')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->wall_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'E')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->enem_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'H')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->exit_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'N')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->good_img, x * 50, y * 50);
//            if ()
            x++;
        }
        y++;
    }
}

