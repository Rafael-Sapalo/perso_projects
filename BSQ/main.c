/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** main.c
*/

#include "include/my.h"
#include "include/bsq.h"

void init_val(t_bsq *bs)
{
    bs->bsn = 0;
    bs->bsnq = 0;
    bs->col = 0;
    bs->i = 0;
    bs->j = 0;
    bs->k = 0;
    bs->sk = 0;
}

void main_third(t_bsq *bs, int **map)
{
    char **fin;
    char **fin1;
    find_bigest_nbr(bs, map);
    find_bn(bs, map);
    fin = convert_to_array(bs);
    fin1 = str_to_array(bs, fin);
    draw_sqr(bs, fin1);
    free(fin);
}

void main_princ(t_bsq *bs)
{
    skip_lines(bs);
}

int main_sec(t_bsq bs)
{
    init_val(&(bs));
    str_skip_line(bs.str, &(bs));
    count_line(&(bs));
    count_col(&(bs));
    char **map = convert_to_array(&(bs));
    char **map1 = str_to_array(&(bs), map);
    char **map2 = convert_to_int(&(bs), map1);
    int **array1 = alloc_int_array(&(bs));
    int **array2 = str_to_int(&(bs), array1, map2);
    int **array3 = aply_algo(&(bs), array2);
    main_third(&(bs), array3);
    return 0;
}

int main(int ac, char **av)
{
    t_bsq bs;
    if (ac == 2) {
        bs.str = open_file(av[1]);
        if (bs.str == NULL){
            return 0;
        }
        if (bs.str[0] == '1' && bs.str[1] == '\n'){
            main_princ(&(bs));
        } else {
            main_sec(bs);
        }
    }
    return 0;
}
