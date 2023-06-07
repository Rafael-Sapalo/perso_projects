/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** shell.h
*/
#ifndef SHELL_H_
    #define SHELL_H_
    #include "my.h"

    typedef struct pipes {
        int fd[2];
        int status;
        int nb_cmd;
        int nb_pipes;
        int nb_semcol;
        int nb_redi;
        char *cmd;
        char **input;
        char **input_cmd;
        char **args;
        char *path;
        char **cmd_pipe;
        pid_t pid_par;
        pid_t pid_ch;
    }pipes_t;

    typedef struct env {
        char **set_env;
    }env_t;

    typedef struct shell {
        char *cmd;
        char *env_path;
        char *cmd_path;
        char **new_env;
        char **args;
        int exit_val;
        int status;
        pipes_t pipes;
        env_t env;
        pid_t pid;
        size_t size;
    }shell_t;

    /*base_functions*/
    void init_struct(shell_t *shell);
    char **str_to_array(char *str, char del);
    char **get_args(shell_t *shell);
    char **array_cpy(char **src, char **dst);
    char **strtok_to_array(char *src, char const *delim);
    int count_nb_paths(shell_t *shell);
    int my_charcmp(char c, char str);
    int array_cmp(char **ar1, char **ar2);
    int exec_pipes(shell_t *shell);
    char *Remove_FirstSpace(char* str);

    /*env functions*/
    char *get_env_path(shell_t *shell, char **env);
    char *check_env_path(shell_t *shell, char **env);
    void check_cmd(shell_t *shell, char **env, char **av);
    void check_all_path(shell_t *shell, char **env, char **av);

    /*built-in*/
    int check_builtins(shell_t *shell, char **env, char **av);
    int change_directory(shell_t *shell);
    void print_env(shell_t *shell, char **env);
    void set_env(shell_t *shell, char **env);
    int exit_status(shell_t *shell);
    void unset_env(shell_t *shell, char **env);
    void get_executable(shell_t *shell, char **env);
    /*PID*/
    pid_t get_pid(shell_t *shell);
    void signal_handle(int signal);
    pid_t get_child_pid(shell_t *shell);
    pid_t get_parent_pid(shell_t *shell);

    /*pipes*/
    int check_pipes(shell_t *shell, char **av);

#endif /*SHELL_H_*/
