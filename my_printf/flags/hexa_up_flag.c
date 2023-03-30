/*
** EPITECH PROJECT, 2022
** X_flag
** File description:
** X_flag
*/

int hexa_up(int nb)
{
    if (nb <= 0){
        return 0;
    } else
        hexa_up(nb / 16);
    if (nb % 16 < 10){
        my_putnbr(nb % 16);
    } else{
        my_putchar(nb % 16 + 55);
    }
}
