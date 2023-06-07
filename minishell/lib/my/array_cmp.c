/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** array_cmp.c
*/
#include "../../include/shell.h"

static int get_size_env(char **env)
{
    int env_size = 0;
    for (int i = 0; env[i] != NULL; i++)
        env_size++;
    return env_size;
}

int array_cmp2(char **ar1, char **ar2)
{
    int i = 0;
    while (ar1[i] != NULL && ar2[i] != NULL) {
        if (my_strcmp(ar1[i], ar2[i]) != 0)
            return 1;
        i++;
    }
    if (ar1[i] == NULL && ar2[i] == NULL)
        return 0;
    return 1;
}

int array_cmp(char **ar1, char **ar2)
{
    int i ;
    int env_size = get_size_env(ar1);
    for (i = 0; i < env_size; i++) {
        if (my_strcmp(ar1[i], ar2[i]) != 0)
            return 0;
    }
    return 1;
}
