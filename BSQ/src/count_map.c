/*
** EPITECH PROJECT, 2022
** BSQ [WSL: Ubuntu]
** File description:
** count_map.c
*/
#include "../include/my.h"
#include "../include/bsq.h"

int count_line(t_bsq *bs)
{
    int lines = 0;
    for (int i = 0; bs->new_str[i] != '\0'; i++){
        if (bs->new_str[i] == '\n'){
            lines++;
        }
    }
    bs->lines = lines;
    return 0;
}

int count_col(t_bsq *bs)
{
    int i = 0;
    int col = 0;
    while (bs->new_str[i] != '\n'){
        i++;
    }
    i++;
    while (bs->new_str[i] != '\n'){
        col++;
        i++;
    }
    bs->col = col;
    return 0;
}

char *str_skip_line(char const *src, t_bsq *bs)
{
    int z = 0;
    for (int i = 0; bs->str[i] != '\n'; i++){
        bs->sk++;
    }
    bs->sk++;
    char *str = malloc(sizeof(char) * (my_strlen(src) - bs->sk + 1));
    for (; src[bs->sk] != '\0'; z++){
        str[z] = src[bs->sk];
        bs->sk++;
    }
    bs->new_str = str;
    bs->new_str[z] = '\0';
    return " ";
}
