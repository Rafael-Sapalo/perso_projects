/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** print_env.c
*/
#include "../../include/shell.h"
static void free_env(shell_t *shell)
{
    for (int i = 0; shell->new_env[i] != NULL; i++)
        free(shell->new_env[i]);
}

void print_env(shell_t *shell, char **env)
{
    for (int i = 0; shell->env.set_env[i] != NULL; i++) {
        my_putstr(shell->env.set_env[i]);
        my_putchar('\n');
    }
}
