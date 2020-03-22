/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** print_maze
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

static int *init(int *number, int y)
{
    for (int i = 0; i < y; i++)
        number[i] = 0;
    return (number);
}

static char **replace(char **maze, int *number)
{
    int tmp = 0;
    int count = 0;

    for (int i = 0; maze[i] != NULL; i++) {
        if (number[i] > 0)
            tmp = rand() % number[i] - 1;
        for (int j = 0; maze[i][j] != '\0'; j++) {
            if (maze[i][j] == 'X')
                count++;
            if (count == tmp + 1)
                maze[i][j] = '*';
        }
        count = 0;
    }
    return maze;
}


static char **change_wall(char **maze, int y)
{
    int *number = malloc(sizeof(int) * y);

    number = init(number, y);
    for (int i = 0; maze[i] != NULL; i++) {
        for(int j = 0; maze[i][j] != '\0'; j++) {
            if (maze[i][j] == 'X') {
                number[i] += 1;
            }
        }
    }
    maze = replace(maze, number);
    free(number);
    return maze;
}

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

void print_maze_imperfect(char **maze, int x, int y)
{
    maze = change_wall(maze, y);
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