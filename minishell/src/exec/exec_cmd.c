/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** exec_cmd.c
*/
#include "../../include/shell.h"

static void run_cmd(shell_t *shell, char **av)
{
    if (get_pid(shell) == 0){
        if (execve(shell->cmd_path, shell->args, NULL) == - 1) {
            perror("error");
            exit(0);
        }
        exit(0);
    }
    wait(0);
    for (int i = 0; shell->args[i] != NULL; i++)
        free(shell->args[i]);
}

static void cmd_not_found(shell_t *shell)
{
    my_putstr(shell->cmd);
    my_putstr(": Command not found.\n");
    wait(0);
}

void check_all_path(shell_t *shell, char **env, char **av)
{
    shell->cmd_path = check_env_path(shell, env);
    char **ar = str_to_array(shell->cmd_path, ':');
    int counter = 0;
    for (int i = 0; ar[i] != NULL;) {
        char *path = my_strcat(ar[i], "/");
        path = my_strcat(path, shell->cmd);
        if (access(path, X_OK) == 0) {
            shell->cmd_path = path;
            run_cmd(shell, av);
            break;
        } else {
            i++;
            counter++;
            free(path);
        }
    }
    free(shell->cmd_path);
    if (count_nb_paths(shell) == counter) {
        cmd_not_found(shell);
    }
}
