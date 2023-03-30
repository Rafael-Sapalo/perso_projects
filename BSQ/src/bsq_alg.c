/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** bsq_alg.c
*/

#include "../include/bsq.h"
#include "../include/my.h"

int main_algo(int **array, int i, int j)
{
    int left = array[i][j - 1];
    int top_left = array[i - 1][j - 1];
    int top = array[i - 1][j];
    int next[3] = {left, top_left, top};
    int min_value = next[0];
    for (int k = 0; k < 2; k++){
        if (next[k + 1] < next[k]){
            min_value = next[k + 1];
        }
    }
    return min_value;
}

int switch_cond(t_bsq *bs, int **map, int i, int min_val)
{
    switch (map[i][bs->m]){
        case 0:
            break;
        default:
            min_val = main_algo(map, i, bs->m);
            map[i][bs->m] = map[i][bs->m] + min_val;
            break;
    }
    return 0;
}

int **aply_algo(t_bsq *bs, int **map)
{
    int min_val = 0;
    for (int i = 1; i < bs->lines; i++){
        for (int j = 1; j < bs->col; j++){
            bs->m = j;
            switch_cond(bs, map, i, min_val);
        }
    }
    return map;
}

int check_bsn(int **array, int i ,int j, int tmp)
{
    if (tmp < array[i][j]){
        tmp = array[i][j];
    }
    return tmp;
}

int find_bigest_nbr(t_bsq *bs, int **array)
{
    int tmp = 0;
    for (int i = 0; i < bs->lines; i++){
        for (int j = 0; j < bs->col; j++){
            tmp = check_bsn(array,  i, j, tmp);
        }
    }
    bs->bsn = tmp;
    return tmp;
}
