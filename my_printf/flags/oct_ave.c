/*
** EPITECH PROJECT, 2022
** oct
** File description:
** oct
*/

int printer(int A1, int A2, int A3)
{
    my_putchar(A1 + 48);
    my_putchar(A2 + 48);
    my_putchar(A3 + 48);
    my_putchar('\n');
}

int calc(int A1, int A2, int A3, int nb)
{
    int i = 0;
    while (i < nb){
        A3++;
        if (A3 > 7){
            A2++;
            A3 = 0;
        }
        if (A2 > 7){
            A1++;
            A2 = 0;
        }
        i++;
    }
    printer(A1, A2, A3);
}

int oct_ave(int nb)
{
    int A1 = 0;
    int A2 = 0;
    int A3 = 0;
    int i;
    for (i = 0; i <= nb; i++ ){
        if (nb == 0){
            printer(A1, A2, A3);
            break;
        }
        if (nb > 0) {
            calc(A1, A2, A3, nb);
        }
        break;
    }
}
