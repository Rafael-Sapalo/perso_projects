/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** unsetenv.c
*/
#include "../../include/shell.h"

static int get_size_env(char **env)
{
    int i = 0;
    for (; env[i] != NULL; i++);
    return (i++);
}

void unset_env(shell_t *shell, char **env)
{
    char **new_env = malloc(sizeof(char *) * (get_size_env(env) + 1));
    if (new_env == NULL)
        return;
    int j = 0;
    for (int i = 0; env[i] != NULL; i++) {
        char *tmp = my_strdup(env[i]);
        if (tmp == NULL)
            return;
        char *name_tok = strtok(tmp, "=");
        if (name_tok != NULL && my_strcmp(name_tok, shell->args[1]) != 0) {
            new_env[j] = my_strdup(env[i]);
            j++;
        }
        free(tmp);
    }
    new_env[j] = NULL;
    shell->env.set_env = new_env;
}
