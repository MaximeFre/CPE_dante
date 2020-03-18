/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** generator
*/

#include "generator.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char **go_back(char **maze, Vector2i *position, int x, int y)
{
    if ((position->x > 1 && maze[position->y][position->x - 2] == '*') ||
    (position->x < x - 2 && maze[position->y][position->x + 2] == '*') ||
    (position->y < y - 2 && maze[position->y + 2][position->x] == '*') ||
    (position->y > 1 && maze[position->y - 2][position->x] == '*')) {
        return (maze);
    } else {
        if (position->x < x - 1 && maze[position->y][position->x + 1] == 'P') {
            maze[position->y][position->x] = '.';
            maze[position->y][position->x++] = '.';
        }
        if (position->x >= 1 && maze[position->y][position->x - 1] == 'P') {
            maze[position->y][position->x] = '.';
            maze[position->y][position->x--] = '.';
        }
        if (position->y < y - 1 && maze[position->y + 1][position->x] == 'P') {
            maze[position->y][position->x] = '.';
            maze[position->y++][position->x] = '.';
        }
        if (position->y >= 1 && maze[position->y - 1][position->x] == 'P') {
            maze[position->y][position->x] = '.';
            maze[position->y--][position->x] = '.';
        }
    }
    return (maze);
}

static char **update(char **maze, int current_wall, int wall_total,
Vector2i *size)
{
    int tmp = 0;
    Vector2i position = {0, 0};

    while (position.x != 0 && position.y != 0) {
        tmp = rand() % 4;
        if (tmp == UP)
            maze = up(maze, &position);
        else if (tmp == DOWN)
            maze = down(maze, &position, size->y);
        else if (tmp == LEFT)
            maze = left(maze, &position);
        else if (tmp == RIGHT)
            maze = right(maze, &position, size->x);
        go_back(maze, &position, size->x, size->y);
        for (int i = 0; maze[i] != NULL; i++)
            printf("%s\n", maze[i]);
        printf("\n");
        printf("x: %d, y: %d\n", position.x, position.y);
    }
    return (maze);
}

static int count_wall(char **maze)
{
    int total = 0;

    for (int i = 0; maze[i] != NULL; i++) {
        for (int j = 0; maze[i][j] != '\0'; j++) {
            if (maze[i][j] == 'X')
                total++;
        }
    }
    return (total);
}

char **generator(char **maze, int x, int y)
{
    srand(time(NULL));
    int wall_total = 2 * y * x - y - x;
    int current_wall = count_wall(maze);
    Vector2i size = {x, y};

    update(maze, current_wall, wall_total, &size);
    return (maze);
}