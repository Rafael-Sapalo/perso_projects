/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** init_strc.c
*/
#include "../../include/shell.h"
void init_struct(shell_t *shell)
{
    shell->cmd = NULL;
    shell->env_path = NULL;
    shell->exit_val = 0;
    shell->pid = 0;
    shell->size = 0;
    shell->new_env = NULL;
    shell->args = NULL;
    shell->env.set_env = NULL;
    shell->status = 0;
    shell->pipes.path = NULL;
    shell->pipes.cmd = NULL;
    shell->pipes.args = NULL;
    shell->pipes.input_cmd = NULL;
    shell->pipes.cmd_pipe = NULL;
}
