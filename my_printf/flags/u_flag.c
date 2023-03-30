/*
** EPITECH PROJECT, 2022
** uflag
** File description:
** uflag
*/
//#include "my.h"

void my_putchar(char c);

int num_pos(int nb)
{
        int i = 0;
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    if (nb == -2147483647)
        return 0;
    if (nb > 9){
        num_pos(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}

int u_flag(int nb)
{
    if (nb < 0){
        return 0;
    }else {
        num_pos(nb);
    }
}
