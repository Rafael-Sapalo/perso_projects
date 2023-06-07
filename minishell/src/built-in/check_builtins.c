/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** check_builtins.c
*/
#include "../../include/shell.h"

int check_builtins(shell_t *shell, char **env, char **av)
{
    if (my_strncmp(shell->cmd, "cd", my_strlen("cd")) == 0) {
        change_directory(shell);
        return (1);
    }
    if (my_strncmp(shell->cmd, "env", my_strlen("env")) == 0) {
        print_env(shell, env);
        return (1);
    }
    if (my_strncmp(shell->cmd, "setenv", my_strlen("setenv")) == 0) {
        set_env(shell, shell->env.set_env);
        return (1);
    }
    if (my_strncmp(shell->cmd, "unsetenv", my_strlen("unsetenv")) == 0) {
        unset_env(shell, shell->env.set_env);
        return (1);
    }
    return (0);
}
