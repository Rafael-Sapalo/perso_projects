/*
** EPITECH PROJECT, 2022
** hashtag
** File description:
** hashtag
*/
void my_putchar(char c);
int o_flag(int nb);
int hexa_up(int nb);
int x_flag_low(int nb);

int hashtag_oct(int nb)
{
    my_putchar('0');
    o_flag(nb);
    return 0;
}

int hashtag_up_hex(int nb)
{
    my_putchar('0');
    my_putchar('X');
    hexa_up(nb);
    return 0;
}

int hashtag_low_hex(int nb)
{
    my_putchar('0');
    my_putchar('x');
    x_flag_low(nb);
    return 0;
}
