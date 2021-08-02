#ifndef SO_LONG_H
#define SO_LONG_H

#include "fcntl.h"
#include "unistd.h"
#include "stdio.h"
#include "unistd.h"
#include "mlx/mlx.h"
#include "stdlib.h"
#include "GNL/get_next_line.h"
#include "libft/libft.h"

//typedef struct s_orient
//{
//    int                 x;
//    int                 y;
//    struct s_orient     *next;
//}              t_orient;

typedef struct	s_data1
{
    int             *wall_y;
    int             *wall_x;
    int              count_w;

    void	        *mlx;
    void	        *wind;
    char            *addr;
    void            *img;
    int             bits_per_pixel;
    int             line_length;
    int             endian;

    int             money_count;


    int             play_x;
    int             play_y;

    int             back_x;
    int             back_y;


    int             scale;

    char            **map;
    int             p_x;
    int             p_y;

    int             img_height;
    int             img_width;
    int             map_height;
    int             map_width;

    void            *play_img;
    void            *obst_img;
    void            *good_img;
    void            *wall_img;
    void            *kust_img;
    void            *exit_img;
    void            *enem_img;
    void            *kirp_img;
    void            *back_img;
    int             step;
//    char            *rem;

//    t_orient        *walls;
//    t_orient        *coll;
//    t_orient        *play;
//    t_orient        *exit;
}				t_vars;



typedef struct	s_data
{
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
}				t_data;

void    image_for_map(t_vars *vars);
void    record_to_map(t_vars *vars);
void    map_start(char **argv, t_vars *vars);
void    map_start2 (t_vars *vars);

int     exit_win(void *ptr);
void    free_arr(char **arr);
int     keyboard(int keycode, t_vars *vars);

void    player_go_up(t_vars *vars, int tmp);
void    draw_map (t_vars *vars);


#endif
