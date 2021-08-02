#include "so_long.h"

void    free_arr(char **arr)
{
    int     i = 0;
    while(arr[i])
    {
        free(arr[i]);
        arr[i] = NULL;
        i++;
    }
    free(arr);
    arr = NULL;
}