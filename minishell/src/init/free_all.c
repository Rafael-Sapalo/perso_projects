/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** free_all.c
*/
#include "../../include/shell.h"

void free_all(shell_t *shell)
{
    free(shell->cmd);
    free(shell->env_path);
    free(shell->cmd_path);
}
