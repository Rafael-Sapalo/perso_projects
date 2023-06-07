/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** check_cmd.c
*/
#include "../../include/shell.h"

static void run_cmd(shell_t *shell, char **av)
{
    if (get_pid(shell) == 0) {
        if (execve(shell->cmd, shell->args, NULL) == - 1) {
            perror("error");
            exit(0);
        }
        exit(0);
    }
    wait(0);
}

static void check_exec_files(shell_t *shell, char **env, char **av)
{
    if (my_strncmp(shell->cmd, "./", 2) == 0) {
        get_executable(shell, env);
    } else {
        check_all_path(shell, env, av);
    }
}

static void check_file_stat(shell_t *shell, char **av, struct stat sb)
{
    if (S_ISDIR(sb.st_mode)) {
        my_putstr(shell->cmd);
        my_putstr(": Permission denied.\n");
        return;
    } else if (S_ISREG(sb.st_mode)) {
        run_cmd(shell, av);
        return;
    } else {
        my_putstr(shell->cmd);
        my_putstr(": Command not found.\n");
        return;
    }
}

static void check_executable(shell_t *shell, char **env, char **av)
{
    struct stat sb;
    stat(shell->cmd, &sb);
    if (shell->cmd[0] == '/') {
        check_file_stat(shell, av, sb);
    } else
        check_exec_files(shell, env, av);
}

void check_cmd(shell_t *shell, char **env, char **av)
{
    shell->args = strtok_to_array(shell->cmd, " \t");
    shell->cmd = shell->args[0];
    if (check_env_path(shell, env) == NULL)
        return;
    if (check_builtins(shell, env, av) == 1)
        return;
    if (check_pipes(shell, env) == 1)
        return;
    if (my_strcmp(shell->cmd, "exit") == 0
    && my_strlen(shell->cmd) == my_strlen("exit")) {
        shell->exit_val = 1;
        shell->status = exit_status(shell);
    } else
        check_executable(shell, env, av);
}
