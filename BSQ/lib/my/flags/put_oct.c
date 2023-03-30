/*
** EPITECH PROJECT, 2022
** my_put_oct
** File description:
** my_put_oct
*/
int my_putnbr(int nb);
void my_putchar(char c);
int o_flag(int nb);

int o_flag(int nb)
{
    int rem = 0;
    if (nb < 7){
        my_putnbr(nb);
    } else {
        rem = nb % 8;
        nb = (nb - rem) / 8;
        o_flag(nb);
        my_putchar(rem + 48);
    }
    return 0;
}
