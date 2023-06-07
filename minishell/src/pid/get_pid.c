/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** get_pid.c
*/
#include "../../include/shell.h"

pid_t get_pid(shell_t *shell)
{
    shell->pid = fork();
    if (shell->pid == -1) {
        my_putstr("error : Fork Failed\n");
        return 84;
    }
    return shell->pid;
}

pid_t get_child_pid(shell_t *shell)
{
    shell->pipes.pid_ch = fork();
    if (shell->pipes.pid_ch == -1) {
        my_putstr("error : Fork Failed\n");
        return 84;
    }
    return shell->pipes.pid_ch;
}

pid_t get_parent_pid(shell_t *shell)
{
    shell->pipes.pid_par = fork();
    if (shell->pipes.pid_par == -1) {
        my_putstr("error : Fork Failed\n");
        return 84;
    }
    return shell->pipes.pid_par;
}
