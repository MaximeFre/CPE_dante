/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** prepare_maze
*/

#include "string_utlis.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static char *change_line(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0)
            str[i] = '*';
    }
    return (str);
}

char **prepare_maze(char **av)
{
    int x = my_getnbr(av[1]);
    int y = my_getnbr(av[2]);
    char **maze = malloc(sizeof(char *) * (y + 1));

    maze[y] = NULL;
    for (int i = 0; i < y; i++) {
        maze[i] = malloc(sizeof(char) * (x + 1));
        memset(maze[i], 'X', x);
        maze[i][x] = '\0';
    }
    for (int i = 0; maze[i] != NULL; i++) {
        if (i % 2 == 0) {
            maze[i] = change_line(maze[i]);
        }
    }
    maze[y - 1][x - 1] = '*';
    maze[0][0] = '*';
    return (maze);
}