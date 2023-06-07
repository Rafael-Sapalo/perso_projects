/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** check_pipes.c
*/
#include "../../include/shell.h"

int check_pipes(shell_t *shell, char **av)
{
    int i = 0;
    while (shell->pipes.cmd[i] != '\0') {
        if (my_charcmp(shell->pipes.cmd[i], '|') == 0
        || my_charcmp(shell->pipes.cmd[i], ';') == 0) {
            return 1;
        }
        i++;
    }
    return 0;
}
