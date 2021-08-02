#include "so_long.h"

//void check_map(t_vars *vars)
//{
//    int y;
//    int x;
//
//}

void map_start(char **argv, t_vars *vars)
{
    int fd;
    char *line;
    int i;
//    char **arr;

    fd = open(argv[1], O_RDONLY);
    vars->map = (char **) malloc(100);
    i = 0;
    while (get_next_line(fd, &line))
    {
        vars->map[i] = line;
        i++;
    }
//    free_arr(t_vars.rem);
}

void map_start2(t_vars *vars)
{
    int y = 0;
    int x;

    while(vars->map[y])
    {
        x = 0;
        while(vars->map[y][x])
        {
            if (vars->map[y][x] == 'P')
            {
                vars->p_y = y;
                vars->p_x = x;
            }
            if (vars->map[y][x] == 'C')
            vars->money_count++;
            x++;
        }
            y++;
    }
    vars->map_height = y * 50;
    vars->map_width = x * 50;
}

void draw_map (t_vars *vars)
{
    int x;
    int y;

    mlx_clear_window(vars->mlx, vars->wind);
    y = 0;
    while(vars->map[y])
    {
        x = 0;
        while (vars->map[y][x])
        {
            if(vars->map[y][x] == 'P')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->play_img, x * 50, y * 50);
            else  if(vars->map[y][x] == '1')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->wall_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'E')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->exit_img, x * 50, y * 50);
            else  if(vars->map[y][x] == 'C')
                mlx_put_image_to_window(vars->mlx, vars->wind, vars->good_img, x * 50, y * 50);
            x++;
        }
        y++;
    }
}