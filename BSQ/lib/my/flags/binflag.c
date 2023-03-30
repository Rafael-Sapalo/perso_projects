/*
** EPITECH PROJECT, 2022
** binary
** File description:
** binary
*/
void my_putchar(char c);

int binary(int nb)
{
    if (nb == 0){
        return 0;
    }
    binary(nb / 2);
    my_putchar(nb % 2 + 48);
    return 0;
}
