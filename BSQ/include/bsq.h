/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** bsq.h
*/

#ifndef BSQ_H_
    #define BSQ_H_
    #include <stdarg.h>
    #include<stdlib.h>
    #include <sys/stat.h>
    #include "my.h"

typedef struct bsq_str{
    int new_ln;
    int lines;
    int m;
    int i;
    int bsnq;
    int j;
    int col;
    int k;
    int sk;
    int bsn;
    char *str;
    char *new_str;
}t_bsq;
int count_line(t_bsq *bs);
int count_col(t_bsq *bs);
char **str_to_array(t_bsq *bs, char **map);
char **convert_to_array(t_bsq *bs);
void my_print_map(t_bsq *bs, char **map);
char *str_skip_line(char const *src, t_bsq *bs);
char **convert_to_int(t_bsq *bs, char **map);
int **alloc_int_array(t_bsq *bs);
int **str_to_int(t_bsq *bs, int **array, char **map);
int **my_print_int(t_bsq *bs, int **array);
int **aply_algo(t_bsq *bs, int **array);
int find_bigest_nbr(t_bsq *bs, int **array);
void find_bn(t_bsq *bs, int **array);
char **draw_sqr(t_bsq *bs, char **map);
void skip_lines(t_bsq *bs);


#endif // BSQ_H_
