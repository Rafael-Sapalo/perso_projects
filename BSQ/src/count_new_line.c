/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-rafael.sapalo-esteves
** File description:
** count_new_line.c
*/
#include "../include/bsq.h"

void skip_lines(t_bsq *bs)
{
    int x = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * (my_strlen(bs->str) - 3 + 1));
    for (int i = 2; bs->str[i] != '\n'; i++){
        str[x] = bs->str[i];
        x++;
    }
    str[x] = '\0';
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '.' && j < 1){
            str[i] = 'x';
            j++;
        }
    }
    my_putstr(str);
}
