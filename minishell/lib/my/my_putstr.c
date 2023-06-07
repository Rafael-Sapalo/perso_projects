/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** my_putstr.c
*/
#include <unistd.h>
static int my_strlen(const char *src)
{
    int len = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        len++;
    }
    return len;
}

void my_putstr(const char *src)
{
    write(1, src, my_strlen(src));
}
