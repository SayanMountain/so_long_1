//#include "so_long.h"

//#include "so_long.h"
//
//void	render_img(t_data *vars, void *img, t_coordinates *component)
//{
//    t_coordinates	*temp;
//    int				size;
//
//    temp = component;
//    size = vars->scale;
//    while (temp != NULL)
//    {
//        mlx_put_image_to_window(vars->mlx, vars->win, img, temp->x * scale, temp->y * scale);
//        temp = temp->next;
//    }
//}
//
//void	render_back(t_vars *vars)
//{
//    int				x;
//    int				y;
//    int				scale;
//
//    x = 0;
//    y = 0;
//    scale = vars->scale;
//    while (x < vars->wind)
//    {
//        while (y < vars->img_height)
//        {
//            mlx_put_image_to_window(vars->mlx, vars->wind, vars->back_img, x * scale, y * scale);
//            y++;
//        }
//        y = 0;
//        x++;
//    }
//}
//
//int	render_map(t_data *vars)
//{
//    render_back(vars);
//    render_img(vars, vars->img_kirp, vars->kirp);
//    render_img(vars, vars->img_exit, vars->exit);
//    render_img(vars, vars->img_enem, vars->enem);
//    render_img(vars, vars->img_good, vars->good);
//    render_img(vars, vars->img_play, vars->play);
//    render_img(vars, vars->img_back, vars->back);
//    return (0);
//}
