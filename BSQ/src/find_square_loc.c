/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** find_square_loc.c
*/

#include "../include/bsq.h"

int cond(t_bsq *bs, int i, int j, int **array)
{
    if (array[i][j] == bs->bsn && bs->bsnq < 1){
        bs->i = i;
        bs->j = j;
        bs->bsnq++;
    }
    return 0;
}

void find_bn(t_bsq *bs, int **array)
{
    int bnsq = 0;
    bs->bsnq = bnsq;
    for (int i = 0; i < bs->lines; i++){
        for (int j = 0; j < bs->col; j++){
            cond(bs, i, j, array);
        }
    }
}

char **draw_sqr(t_bsq *bs, char **map)
{
    int bn = bs->bsn;
    int k = 0;
    int l = 0;
    int j = bs->j;
    for (int i = bs->i; k < bn; i--, k++){
        for (j = bs->j; l < bn; l++, j--){
            map[i][j] = 'x';
        }
        l = 0;
    }
    my_print_map(bs, map);
    return map;
}
