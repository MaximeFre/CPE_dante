/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** move_func
*/

#include "generator.h"
#include <stdio.h>

char **up(char **maze, Vector2i *position)
{
    if (position->y > 1 && maze[position->y - 2][position->x] == '*' &&
    maze[position->y - 2][position->x] != 'P') {
        maze[position->y][position->x] = 'P';
        maze[position->y--][position->x] = 'P';
        maze[position->y--][position->x] = 'P';
    } else if (position->y > 1 && maze[position->y - 1][position->x] == '*')
        maze[position->y--][position->x] = 'P';
    return (maze);
}

char **down(char **maze, Vector2i *position, int y)
{
    if (position->y < y - 2 && maze[position->y + 2][position->x] == '*' &&
    maze[position->y + 2][position->x] != 'P') {
        maze[position->y][position->x] = 'P';
        maze[position->y++][position->x] = 'P';
        maze[position->y++][position->x] = 'P';
    } else if (position->y < y - 1 && maze[position->y + 1][position->x] == '*')
        maze[position->y++][position->x] = 'P';
    return (maze);
}

char **left(char **maze, Vector2i *position)
{
    if (position->x > 1 && maze [position->y][position->x - 2] == '*' &&
    maze[position->y][position->x - 2] != 'P') {
        maze[position->y][position->x] = 'P';
        maze[position->y][position->x--] = 'P';
        maze[position->y][position->x--] = 'P';
    } else if (position->x > 1 && maze[position->y][position->x - 1] == '*')
        maze[position->y][position->x--] = 'P';
    return (maze);
}

char **right(char **maze, Vector2i *position, int x)
{
    if (position->x < x - 2 && maze[position->y][position->x + 2] == '*' &&
    maze[position->y][position->x + 2] != 'P') {
        maze[position->y][position->x] = 'P';
        maze[position->y][position->x++] = 'P';
        maze[position->y][position->x++] = 'P';
    } else if (position->x < x - 1 && maze[position->y][position->x + 1] == '*')
        maze[position->y][position->x++] = 'P';
    return (maze);
}