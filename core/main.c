#include "so_long.h"

int	main(int argc, char **argv)
{
    t_vars vars;

    int i;
    int fd;
    char *line;
    // char **map;
//    char **arr;

/// для работы с ПАМЯТЬЮ

    if ((argc == 1) || (argc > 2))
        return 1;
    fd = open(argv[1], O_RDONLY);
    vars.map = (char **)malloc(100);
    i = 0;
    while (get_next_line(fd, &line))
    {
        vars.map[i] = line;
        i++;
    }

/// для работы с КАРТОЙ

   int x = 0;
   int y= 0;
   while(vars.map[x])
   {
       y = 0;
       while(vars.map[x][y] != 'P' && vars.map[x][y])
            y++;
        if (vars.map[x][y] == 'P')
        {
            vars.p_y = x;
            vars.p_x = y;
            break ;
        }
        x++;
   }
//    while (vars.map[i1])
//        printf("%s\n", vars.map[i1++]);

/// для работы с ИЗОБРАЖЕНИЕМ

   vars.mlx = mlx_init();
   vars.wind = mlx_new_window(vars.mlx, 1000, 1000, "SO_LONG by Pjeffere");
   image_for_map(&vars);
    vars.play_x = 500;
    vars.play_y = 500;

   mlx_put_image_to_window(vars.mlx, vars.wind, vars.back_img, 200, 200);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.enem_img, 300, 100);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.exit_img, 450, 950);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.good_img, 600, 600);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.kirp_img, 250, 100);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.kust_img, 350, 100);
   mlx_put_image_to_window(vars.mlx, vars.wind, vars.wall_img, 200, 200);

/// для работы с КЛАВИАТУРОЙ

    mlx_hook(vars.wind, 2, 1L<<0, keyboard, &vars);
    mlx_hook(vars.wind, 17, 0, exit_win, &vars);

//    mlx_key_hook(vars.wind, 17, 1L<<0, exit_win, NULL);

//    printf("!!!!!----------------'\n");
    mlx_loop(vars.mlx);

   mlx_destroy_window(vars.mlx, vars.wind);
//    free_arr(arr);
}



//
//gcc -lmlx -framew2ork OpenGL -framework AppKit main.c
//./so_long map.ber