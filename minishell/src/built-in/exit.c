/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** exit.c
*/
#include "../../include/shell.h"

int exit_status(shell_t *shell)
{
    if (shell->args[1] == NULL) {
        shell->status = 0;
        return (0);
    } else {
        shell->status = my_getnbr(shell->args[1]);
        return (shell->status);
    }
}
