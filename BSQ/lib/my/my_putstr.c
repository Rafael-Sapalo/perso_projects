/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task02
*/
void my_putchar(char c);

void my_putstr(char const *str)
{
    int str2 = 0;
    while (str[str2] != '\0'){
        my_putchar(str[str2]);
        str2 = str2 + 1;
    }
}
