/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** convert_to_int.c
*/

#include "../include/my.h"
#include "../include/bsq.h"

int condition_conv(char **map,int i, int j)
{
    if (map[i][j] == '.'){
        map[i][j] = '1';
    } else if (map[i][j] == 'o'){
        map[i][j] = '0';
    }
    return 0;
}

char **convert_to_int(t_bsq *bs, char **map)
{
    for (int i = 0; i < bs->lines; i++){
        for (int j = 0; j < bs->col; j++){
            condition_conv(map,i, j);
        }
    }
    return map;
}

int **alloc_int_array(t_bsq *bs)
{
    int **array = malloc(sizeof(int *) * (bs->lines + 1));
    if (array == NULL){
        return NULL;
    }
    for (int i = 0; i < bs->lines; i++){
        array[i] = malloc(sizeof(int) * (bs->col + 1));
        if (array[i] == NULL){
            return NULL;
        }
    }
    return array;
}

int **str_to_int(t_bsq *bs, int **array, char **map)
{
    int tmp;
    int j = 0;
    for (int i = 0; i < bs->lines; i++){
        for (j = 0; j < bs->col; j++){
            tmp = map[i][j] - '0';
            array[i][j] = tmp;
        }
    }
    return array;
}

int **my_print_int(t_bsq *bs, int **array)
{
    for (int i = 0; i < bs->lines; i++){
        for (int j = 0; j < bs->col; j++){
            my_printf("%d", array[i][j]);
        }
        my_putchar('\n');
    }
    return 0;
}
