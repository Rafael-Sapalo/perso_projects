/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell1-rafael.sapalo-esteves
** File description:
** my_strcmp.c
*/
int my_strcmp(const char *str_orig, const char *str_comp)
{
    for (int i = 0; str_comp[i] != '\0'; i++) {
        if (str_orig[i] < str_comp[i])
            return -1;
        if (str_orig[i] > str_comp[i])
            return 1;
    }
    return 0;
}
