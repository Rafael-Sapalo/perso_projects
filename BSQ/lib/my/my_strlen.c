/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int str2 = 0;
    while (str[str2] != '\0'){
        str2 = str2 + 1;
    }
    return str2;
}
