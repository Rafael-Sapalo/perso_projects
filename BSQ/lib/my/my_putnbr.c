/*
** EPITECH PROJECT, 2022
** my_putnbr
** File description:
** my_putnbr
*/
void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 0 && nb <= 9){
        my_putchar(nb + 48);
    }
    if (nb == -2147483647)
        return 0;
    if (nb > 9){
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return 0;
}
