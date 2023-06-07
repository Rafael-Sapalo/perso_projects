/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** my_strdup.c
*/
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (str == NULL)
        return NULL;
    for (i; src[i] != '\0'; i++){
        str[i] = src[i];
    }
    str[i] = '\0';
    return str;
}
