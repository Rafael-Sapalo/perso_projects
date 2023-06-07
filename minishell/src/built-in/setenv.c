/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** setenv.c
*/
#include "../../include/shell.h"

static int get_size_env(char **env)
{
    int i = 0;
    for (; env[i] != NULL; i++);
    return (i);
}

static void free_env(shell_t *shell)
{
    int i = 0;
    for (; shell->env.set_env[i] != NULL; i++) {
        free(shell->env.set_env[i]);
    }
    free(shell->env.set_env);
}

static int check_args(shell_t *shell)
{
    for (int i = 0; shell->args[1][i] != '\0'; i++) {
        if (get_char_number(shell->args[1][i]) == 3)
            return (1);
    }
    return (0);
}

void set_env(shell_t *shell, char **env)
{
    if (shell->args[1] == NULL) {
        print_env(shell, env);
        return;
    }
    if (check_args(shell) == 1) {
        my_putstr("setenv: Variable name must contain alphanumeric ");
        my_putstr("characters.\n");
        return;
    }
    char **new_env = malloc(sizeof(char *) * (get_size_env(env) + 2));
    int i = 0;
    for (; env[i] != NULL; i++) {
        new_env[i] = my_strdup(env[i]);
    }
    new_env[i] = my_strcat(shell->args[1], "=");
    if (shell->args[2] != NULL)
        new_env[i] = my_strcat(new_env[i], shell->args[2]);
    new_env[i + 1] = NULL;
    free_env(shell);
    shell->env.set_env = new_env;
}
