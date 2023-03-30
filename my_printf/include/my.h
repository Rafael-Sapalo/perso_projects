/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/
#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>

int my_strlen(char const *str);
int my_putnbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
int oct_ave(int nb);
int hexa(int nb);
int u_flag(int nb);
int x_flag_low(int nb);
int X_flag_up(int nb);
int hexa_up(int nb);
int o_flag(int nb);
int hashtag(int nb);
int hashtag_case(const char *format, int i, va_list ap);
int plus_cases(const char *format, int i, va_list ap);
int hashtag_low_hex(int nb);
int hashtag_up_hex(int nb);
int hashtag_oct(int nb);
int my_printf(const char *format, ...);

#endif /*MY_H_*/
