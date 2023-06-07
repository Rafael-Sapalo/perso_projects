/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** executables.c
*/

#include "../../include/shell.h"

static char *get_exec_file(char *cmd)
{
    char *token = strtok(cmd, " ");
    char *cmd_file = malloc(sizeof(char) * ((my_strlen(token) - 2) + 1));
    int i = 0;
    for (; token[i + 2] != '\0'; i++) {
        cmd_file[i] = token[i + 2];
    }
    cmd_file[i] = '\0';
    return (cmd_file);
}

static int get_permission(shell_t *shell, struct stat sb)
{
    char *cmd = get_exec_file(shell->cmd);
    if (access(cmd, F_OK) == -1) {
        if (stat(cmd, &sb) == 0 && S_ISDIR(sb.st_mode)) {
            my_putstr(cmd);
            my_putstr(": Permission denied.\n");
        } else {
            shell->cmd = strtok(shell->cmd, " ");
            my_putstr(shell->cmd);
            my_putstr(": Command not found.\n");
        }
        return 1;
    } else {
        if (access(shell->cmd, X_OK) == 0) {
            return 0;
        } else {
            my_putstr(shell->cmd);
            my_putstr(": Permission denied.\n");
            return 1;
        }
    }
}

static int get_term_status(int signal, int status, shell_t *shell)
{
    if (signal == SIGSEGV) {
        if (WCOREDUMP(status)) {
            my_putstr("Segmentation fault (core dumped)\n");
        } else
            my_putstr("Segmentation fault\n");
    }
    if (signal == SIGFPE) {
        my_putstr("Floating exception (core dumped)\n");
    }
    if (signal == SIGABRT) {
        my_putstr("Aborted (core dumped)\n");
    }
    return 0;
}

static void check_status(shell_t *shell)
{
    if (WIFEXITED(shell->status)) {
        shell->status = WEXITSTATUS(shell->status);
    } else if (WIFSIGNALED(shell->status)) {
        get_term_status(WTERMSIG(shell->status), shell->status, shell);
    }
}

void get_executable(shell_t *shell, char **env)
{
    struct stat sb;
    if (get_pid(shell) == 0 && get_permission(shell, sb) == 0) {
        if (execve(shell->cmd, shell->args, NULL) == -1) {
            perror("error");
            exit(shell->status);
        }
        exit(shell->status);
    } else {
        pid_t term_pid = waitpid(shell->pid, &shell->status, 0);
        if (term_pid == -1) {
            exit(0);
        }
        check_status(shell);
        wait(0);
    }
}
