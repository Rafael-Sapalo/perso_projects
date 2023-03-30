/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** convert_to_array.c
*/

#include "../include/my.h"
#include "../include/bsq.h"

char **convert_to_array(t_bsq *bs)
{
    char **array = malloc(sizeof(char *) * (bs->lines + 1));
    for (int i = 0; i < bs->lines; i++){
        array[i] = malloc(sizeof(char) * (bs->col + 1));
    }
    return array;
}

char **str_to_array(t_bsq *bs, char **map)
{
    int k = 0;
    int j;
    for (int i = 0; i < bs->lines; i++){
        for (j = 0; j < bs->col; j++){
            map[i][j] = bs->new_str[k];
            k++;
        }
        map[i][j] = '\0';
        k++;
    }
    return map;
}

void my_print_map(t_bsq *bs, char **map)
{
    for (int i = 0; i < bs->lines; i++){
        my_printf("%s\n", map[i]);
    }
}
