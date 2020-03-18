/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** generator
*/

#pragma once

enum
{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

typedef struct
{
    int x;
    int y;
} Vector2i;


int error_handling(int ac, char **av);
char **prepare_maze(char **av);
char **up(char **maze, Vector2i *position);
char **down(char **maze, Vector2i *position, int y);
char **left(char **maze, Vector2i *position);
char **right(char **maze, Vector2i *position, int x);
char **generator(char **maze, int x, int y);
void print_maze_perfect(char **maze, int y);