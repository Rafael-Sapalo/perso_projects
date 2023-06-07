/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** get_type.c
*/

int get_char_number(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else if (c >= '0' && c <= '9') {
        return 2;
    } else {
        return 3;
    }
}
