/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** my_strchr.c
*/
#include <string.h>

char *my_strchr(const char* str, int ch)
{
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }
    if (ch == '\0') {
        return (char*)str;
    }
    return NULL;
}
