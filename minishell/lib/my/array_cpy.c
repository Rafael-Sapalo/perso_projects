/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** array_cpy.c
*/
#include "../../include/shell.h"

static int get_size_env(char **env)
{
    int env_size = 0;
    for (int i = 0; env[i] != NULL; i++)
        env_size++;
    return env_size;
}

char **array_cpy(char **src, char **dst)
{
    int size = 0;
    size = get_size_env(src);
    dst = malloc(sizeof(char *) * (get_size_env(src) + 1));
    if (dst == NULL)
        return NULL;
    int i;
    for (i = 0; i < size; i++) {
        dst[i] = malloc(sizeof(char) * (my_strlen(src[i]) + 1));
        if (dst[i] == NULL)
            return NULL;
        my_strcpy(dst[i], src[i]);
    }
    dst[i] = NULL;
    return dst;
}
