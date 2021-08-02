#include "so_long.h"

int	main(int argc, char **argv)
{
    t_vars vars;
    int i;
    int fd;
    char *line;

/// для работы с ПАМЯТЬЮ

    if ((argc == 1) || (argc > 2))
        return 1;
    fd = open(argv[1], O_RDONLY);
    vars.map = (char **)malloc(100);


/// для работы с КАРТОЙ
// валидация карты при встрече со стеной
    i = 0;
    while (get_next_line(fd, &line))
    {
        vars.map[i] = line;
        i++;
    }

    int y = 0;
    int x;

    while(vars.map[y])
    {
       x = 0;                                                   // по строке двумерного массива
       while(vars.map[y][x] != 'P' && vars.map[y][x])
            x++;
        if (vars.map[y][x] == 'P')
        {
            vars.p_y = y;
            vars.p_x = x;
        }
        y++;
    }
    vars.map_height = y * 50;
    vars.map_width = x * 50;
//  Количество стен и выделение памяти для массива интов
/// для работы с ИЗОБРАЖЕНИЕМ
// сделать так, чтобы P останавливалась при встрече с 1(единичкой)

   vars.mlx = mlx_init();
   vars.wind = mlx_new_window(vars.mlx, vars.map_width, vars.map_height, "SO_LONG by Pjeffere");
   image_for_map(&vars);
   draw_map(&vars);

/// для работы с КЛАВИАТУРОЙ

    mlx_hook(vars.wind, 2, 1L<<0, keyboard, &vars);
    mlx_hook(vars.wind, 17, 0, exit_win, &vars);

    mlx_loop(vars.mlx);
    mlx_destroy_window(vars.mlx, vars.wind);
//    free_arr(arr);
}

