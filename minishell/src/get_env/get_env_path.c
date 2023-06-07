/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** get_env_path.c
*/

#include "../../include/shell.h"

char *get_env_path(shell_t *shell, char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], "PATH=", 5) == 0) {
            return env[i];
        }
    }
    return NULL;
}
