/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-rafael.sapalo-esteves
** File description:
** open_file.c
*/
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"
char *open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1){
        my_putstr("FAILURE\n");
        return NULL;
    }
    struct stat st;
    if (stat(filepath, &st) == -1){
        return NULL;
    }
    int size = st.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL)
        return NULL;
    if (read(fd, buffer, size) < 1){
        return NULL;
    }
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
