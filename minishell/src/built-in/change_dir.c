/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** change_dir.c
*/
#include "../../include/shell.h"

static char *get_path(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], "HOME=", 5) == 0) {
            return env[i];
        }
    }
    return NULL;
}

static int check_st_mode(struct stat st)
{
    if (S_ISREG(st.st_mode)) {
        return 1;
    } else if (S_ISDIR(st.st_mode)) {
        return 0;
    } else {
        return 2;
    }
}

static int check_is_file(shell_t *shell)
{
    struct stat st;
    int index = 0;
    if (stat(shell->args[1], &st) == 0) {
        index = check_st_mode(st);
        return index;
    }
    return 3;
}

int change_directory(shell_t *shell)
{
    char *home_path = get_path(shell->env.set_env);
    if (home_path == NULL) {
        my_putstr("cd: No home directory.\n");
        return 1;
    }
    if (shell->args[1] == NULL) {
        chdir(home_path + 5);
    }
    if (shell->args[1] != NULL) {
        if (check_is_file(shell) == 1) {
            my_putstr(shell->args[1]);
            my_putstr(": Not a directory.\n");
        }
        if (check_is_file(shell) == 2) {
            my_putstr(shell->args[1]);
            my_putstr(": No such file or directory.\n");
        } else
            chdir(shell->args[1]);
    }
    return 0;
}
