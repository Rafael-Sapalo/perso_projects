/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** signal_handler.c
*/
#include "../../include/shell.h"

void signal_handle(int signal)
{
    if (signal == SIGINT)
        my_putstr("\n>");
}
