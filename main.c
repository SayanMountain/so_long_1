#include "so_long.h"
////один лик в GNL rem;

int	main(int argc, char **argv)
{
    t_vars vars;

    if ((argc == 1) || (argc > 2))
        return 1;
    map_start(argv, &vars);
    map_start2(&vars);
    vars.mlx = mlx_init();
    vars.wind = mlx_new_window(vars.mlx, vars.map_width, vars.map_height, "SO_LONG by Pjeffere");
    image_for_map(&vars);
    draw_map(&vars);
    mlx_hook(vars.wind, 2, 1L<<0, keyboard, &vars);
    mlx_hook(vars.wind, 17, 0, exit_win, &vars);
    mlx_loop(vars.mlx);
    mlx_destroy_window(vars.mlx, vars.wind);
//    while (1)
//        sleep (20);
}