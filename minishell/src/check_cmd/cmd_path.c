/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** cmd_path.c
*/
#include "../../include/shell.h"

int count_nb_paths(shell_t *shell)
{
    int path = 0;
    for (int i = 0; shell->env_path[i] != '\0'; i++) {
        if (shell->env_path[i] == ':') {
            path++;
        }
    }
    path = path + 1;
    return path;
}

char *check_env_path(shell_t *shell, char **env)
{
    int i = 0;
    while (shell->env_path[i] != '=') {
        i++;
    }
    i++;
    char *path = malloc(sizeof(char) * (my_strlen(shell->env_path) - i + 1));
    if (path == NULL)
        return NULL;
    int j;
    for (j = 0; shell->env_path[i] != '\0'; j++) {
        path[j] = shell->env_path[i];
        i++;
    }
    path[j] = '\0';
    return path;
}
