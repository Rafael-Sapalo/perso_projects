/*
** EPITECH PROJECT, 2022
** Format
** File description:
** +
*/
/*
char my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putnbr(int nb)
{
    int i = 0;
    if (nb < 0){
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    if (nb == "-2147483647")
        return 0;
    if (nb > 9){
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}*/

char plus(int i)
{
    if (i > 0){
        my_putchar('+');
        my_putnbr(i);
    } else {
        my_putnbr(i);
    }
}
