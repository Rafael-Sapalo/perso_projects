/*
** EPITECH PROJECT, 2023
** str_to_word_array
** File description:
** str_to_word_array
*/

#include <stdlib.h>
#include <unistd.h>

static int nb_line(char *str, char del)
{
    int nbr_line = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == del) {
            nbr_line++;
        }
    }

    return (nbr_line + 1);
}

static int nb_col(char *src, char del)
{
    int nb_col = 0;
    while (src[nb_col] != del && src[nb_col] != '\0') {
        nb_col++;
    }

    return nb_col;
}

static char **alloc_array(char *str, char del)
{
    int start = 0;
    int nbr_rows = 0;
    int nbr_line = nb_line(str, del);
    char **array = malloc(sizeof(char *) * (nbr_line + 1));
    if (array == NULL)
        return NULL;
    for (int i = 0; i < nbr_line; i++) {
        nbr_rows = nb_col(str + start, del);
        array[i] = malloc(sizeof(char) * (nbr_rows + 1));
        if (array[i] == NULL)
            return NULL;
        array[i][nbr_rows] = '\0';
        start += nbr_rows + 1;
    }
    array[nbr_line] = NULL;

    return array;
}

char **str_to_array(char *src, char del)
{
    int i = 0;
    char **array = alloc_array(src, del);
    if (array == NULL)
        return NULL;
    for (int k = 0, j = 0; src[k] != '\0'; k++) {
        if (src[k] != del) {
            array[i][j] = src[k];
            j++;
        } else {
            j = 0;
            i++;
        }
    }
    return array;
}
