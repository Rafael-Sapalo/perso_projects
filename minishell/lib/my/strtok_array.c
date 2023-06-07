/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** strtok_array.c
*/
#include "../../include/shell.h"

char **strtok_to_array(char *src, char const *delim)
{
    char *tmp = my_strdup(src);
    char *token = malloc(sizeof(char) * (my_strlen(src) + 1));
    token = strtok(tmp, delim);
    int i = 0;
    char **array = malloc(sizeof(char *) * (my_strlen(src) + 1));

    if (array == NULL)
        return (NULL);
    while (token != NULL) {
        array[i] = my_strdup(token);
        token = strtok(NULL, delim);
        i++;
    }
    array[i] = NULL;
    free(tmp);
    return (array);
}
