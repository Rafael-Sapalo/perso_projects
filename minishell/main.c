/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** main.c
*/
#include "include/shell.h"

static void free_array(char **array)
{
    if (array == NULL)
        return;
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
}

static int start_cmd(shell_t shell, char **env, char **av, char *command)
{
    while (shell.exit_val != 1) {
        shell.env_path = get_env_path(&shell, env);
        if (shell.env_path == NULL)
            return 1;
        signal(SIGINT, signal_handle);
        if (isatty(0) == 1)
            my_putstr("> ");
        if (getline(&command, &shell.size, stdin) == -1)
            break;
        if (command[0] == '\n')
            continue;
        else {
            shell.pipes.cmd = strtok(command, "\n");
            shell.cmd = strtok(command, "\n");
            check_cmd(&shell, env, av);
        }
    }
    return shell.status;
}

int main(int ac, char **av, char **env)
{
    shell_t shell;
    char *command = NULL;
    init_struct(&shell);
    if (ac != 1)
        return (84);
    else {
        if (array_cpy(env, shell.new_env) == NULL)
            return 1;
        shell.env.set_env = array_cpy(env, shell.env.set_env);
        shell.status = start_cmd(shell, env, av, command);
    }
    free_array(shell.new_env);
    free_array(shell.env.set_env);
    if (isatty(0) == 1)
        my_putstr("exit\n");
    return (shell.status);
}
