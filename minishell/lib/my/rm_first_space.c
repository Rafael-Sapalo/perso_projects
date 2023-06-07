/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** rm_first_space.c
*/
char *check_first_space(char* str)
{
    int spaceFound = 0;
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && !spaceFound) {
            spaceFound = 1;
        } else {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
    return str;
}
