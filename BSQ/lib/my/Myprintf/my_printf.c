/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/

#include "../../../include/my.h"
#include <stdarg.h>

void my_putchar(char c);
int my_putnbr(int nb);
void my_putstr(char const *str);
int oct_ave(int nb);
int hexa_low(int nb);
int hexa_up(int nb);
void second_cases(const char *format, int i, va_list ap);
int binary(int nb);

void first_cases(const char *format, int i, va_list ap)
{
    switch (format[i + 1]){
        case 'c':
            my_putchar(va_arg(ap, int));
            break;
        case 'i':
            my_putnbr(va_arg(ap, int));
            break;
        case 's':
            my_putstr(va_arg(ap, char *));
            break;
        case 'd':
            my_putnbr(va_arg(ap, int));
            break;
        case 'o':
            o_flag(va_arg(ap, int));
            break;
    }
    second_cases(format, i, ap);
}

void second_cases(const char *format, int i, va_list ap)
{
    switch (format[i + 1]){
        case 'b':
            binary(va_arg(ap, int));
            break;
        case 'X':
            hexa_up(va_arg(ap, int));
            break;
        case 'x':
            x_flag_low(va_arg(ap, int));
            break;
        case '%':
            my_putchar('%');
            break;
    }
}

void conditions(const char *format, int i, va_list ap)
{
    switch (format[i + 1]){
        case '#':
            hashtag_case(format, i, ap);
            break;
        case '+':
            plus_cases(format, i, ap);
            break;
    }
    first_cases(format, i, ap);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int i = 0;
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%'){
            conditions(format, i, ap);
            i++;
        } else
            my_putchar(format[i]);
    }
    va_end(ap);
    return 0;
}
