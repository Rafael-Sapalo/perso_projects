/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** my_strlen.c
*/

int my_strlen(const char *src)
{
    int len = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        len++;
    }
    return len;
}
