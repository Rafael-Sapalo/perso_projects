/*
** EPITECH PROJECT, 2022
** hashtag
** File description:
** hashtag
*/
int hashtag_oct(int nb)
{
    my_putchar("0");
    o_flag(nb);
}

int hashtag_up_hex(int nb)
{
    my_putchar('0');
    my_putchar('X');
    hexa_up(nb);
}

int hashtag_low_hex(int nb)
{
    my_putchar('0');
    my_putchar('x');
    x_flag_low(nb);
}
