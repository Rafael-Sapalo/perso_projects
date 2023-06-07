/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <errno.h>
    #include <signal.h>



    void my_putchar(char c);
    void my_putstr(const char *src);
    int my_strlen(const char *src);
    char *my_strcpy(char *dest, char *src);
    char *my_strdup(char const *src);
    char *my_strcat(char *src1, char *src2);
    int my_strncmp(const char *str1, const char *str2, int n);
    int my_strcmp(const char *str_orig, const char *str_comp);
    int my_getnbr(char const *src);
    char *my_strchr(const char* str, int ch);
    int get_char_number(char c);


#endif /*MY_H_*/
