/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** get_args.c
*/
#include "../../include/shell.h"
static char *new_agrs(shell_t *shell)
{
    int i;
    for (i = 0; shell->cmd[i] != ' '; i++) {
    }
    i++;
    char *cp_cmd = malloc(sizeof(char) * (my_strlen(shell->cmd) - i + 1));
    if (cp_cmd == NULL)
        return NULL;
    int j;
    for (j = 0; shell->cmd[i] != '\0'; i++, j++)
        cp_cmd[j] = shell->cmd[i];
    cp_cmd[j] = '\0';
    return cp_cmd;
}

char **get_args(shell_t *shell)
{
    if (shell->cmd == NULL)
        return NULL;
    char **cp_args = str_to_array(new_agrs(shell), ' ');
    return cp_args;
}
