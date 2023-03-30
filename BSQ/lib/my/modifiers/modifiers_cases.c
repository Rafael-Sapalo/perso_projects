/*
** EPITECH PROJECT, 2022
** modifiers_cases
** File description:
** modifiers_cases
*/
#include <stdarg.h>
int hashtag_oct(int nb);
int hashtag_up_hex(int nb);
char plus(int i);
int hashtag_low_hex(int nb);

void hashtag_case(const char *format, int i, va_list ap)
{
    switch (format[i + 2]){
        case 'o':
            hashtag_oct(va_arg(ap, int));
            break;
        case 'x':
            hashtag_low_hex(va_arg(ap, int));
            break;
        case 'X':
            hashtag_up_hex(va_arg(ap, int));
            break;
    }
}

void plus_cases(const char *format, int i, va_list ap)
{
    switch (format[i + 2]){
        case 'i':
            i = i + 2;
            plus(va_arg(ap, int));
            break;
        case 'd':
            plus(va_arg(ap, int));
            break;
        case 'u':
            plus(va_arg(ap, int));
            break;
    }
}
