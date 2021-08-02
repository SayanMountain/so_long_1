#include "so_long.h"

void    player_go(t_vars *vars, int tmp)
{
    int position[2];

    position[0] = vars->play_x;
    position[1] = vars->play_y;

    if (tmp == 0) //// A
    {
        if(vars->map[vars->p_y][vars->p_x - 1] == '1')
        {
            return;
        }
        else
        {
            vars->map[vars->p_y][vars->p_x] = '0';
            vars->map[vars->p_y][vars->p_x - 1] = 'P';
            vars->p_x -= 1;
        }
    }

    if (tmp == 1) //// S
    {
        if(vars->map[vars->p_y + 1][vars->p_x] == '1')
        {
            return;
        }
        else
        {
            vars->map[vars->p_y][vars->p_x] = '0';
            vars->map[vars->p_y + 1][vars->p_x] = 'P';
            vars->p_y += 1;
        }
    }

    if (tmp == 2) //// D
    {
        if (vars->map[vars->p_y][vars->p_x + 1] == '1')
            return;
        else
        {
            vars->map[vars->p_y][vars->p_x] = '0';
            vars->map[vars->p_y][vars->p_x + 1] = 'P';
            vars->p_x = vars->p_x + 1;
        }
    }

    if (tmp == 13) //// W
    {
        if (vars->map[vars->p_y - 1][vars->p_x] == '1')
            return;
        else
        {
            vars->map[vars->p_y - 1][vars->p_x] = 'P';
            vars->map[vars->p_y][vars->p_x] = 'O';
            vars->p_y = vars->p_y - 1;
        }
    }
    draw_map(vars);
//    vars->step++;
//    tmp = 0;
//    write(1, "step number: ", 13);
////    ft_putnbr_fd(vars->step, 1);
//    write(1, "\n", 1);
}



int keyboard (int keycode, t_vars *vars)
{
    draw_map(vars);
    if (keycode == 53)
        exit (0);
    else if (keycode == 0)
          player_go(vars, 0);
    else if (keycode == 1)
        player_go(vars, 1);
    else if (keycode == 2)
        player_go(vars, 2);
    else if (keycode == 13)
        player_go(vars, 13);
    int i = 0;
    while(vars->map[i])
        printf("%s\n", vars->map[i++]);
    return (0);
}



