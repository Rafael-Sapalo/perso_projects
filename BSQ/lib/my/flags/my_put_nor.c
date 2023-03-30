/*
** EPITECH PROJECT, 2022
** flag_S
** File description:
** flag_S
*/

int my_put_ascii(char *src)
{
    int i = 0;
    while (src[i] != '\0'){
        if (src[i] >= 33 && src[i] <= 126){
            my_putchar(src[i]);
        } else {
            my_putnbr(src[i]);
        }
        i++;
    }
}
