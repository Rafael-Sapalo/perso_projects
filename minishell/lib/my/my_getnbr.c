/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-2-minishell2-rafael.sapalo-esteves
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *src)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (src[i] == '-' || src[i] == '+') {
        if (src[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (src[i] >= '0' && src[i] <= '9') {
        nb = nb * 10 + (src[i] - 48);
        i++;
    }
    return (nb * sign);
}
