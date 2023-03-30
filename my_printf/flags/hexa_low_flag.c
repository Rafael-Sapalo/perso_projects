/*
** EPITECH PROJECT, 2022
** x_flag
** File description:
** x_flag
*/

int x_flag_low(int nb)
{
    if (nb <= 0){
        return 0;
    } else
        x_flag_low(nb / 16);
    if (nb % 16 < 10){
        my_putnbr(nb % 16);
    } else {
        my_putchar(nb % 16 + 87);
    }
}
