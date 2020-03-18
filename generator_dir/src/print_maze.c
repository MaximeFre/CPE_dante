/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** print_maze
*/

#include <stdlib.h>
#include <stdio.h>

void print_maze_perfect(char **maze, int y)
{
    for (int i = 0; maze[i] != NULL; i++) {
        for (int j = 0; maze[i][j] != '\0'; j++) {
            if (maze[i][j] == 'P' || maze[i][j] == '.')
                maze[i][j] = '*';
            printf("%c", maze[i][j]);
        }
        if (i < y - 1)
            printf("\n");
    }
}