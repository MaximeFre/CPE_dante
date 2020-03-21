/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "generator.h"
#include "string_utlis.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static void free_maze(char **maze)
{
    for (int i = 0; maze[i] != NULL; i++)
        free(maze[i]);
    free(maze);
}

int main(int ac, char **av)
{
    char **maze;

    if (error_handling(ac, av) == 84)
        return (84);
    if (my_getnbr(av[1]) == 1 && my_getnbr(av[2]) == 1) {
        printf("*");
        return (0);
    }
    maze = prepare_maze(av);
    maze = generator(maze, my_getnbr(av[1]), my_getnbr(av[2]));
    if (ac == 4 && strcmp(av[3], "perfect") == 0)
        print_maze_perfect(maze, my_getnbr(av[2]));
    else if (ac == 3) {
        print_maze_perfect(maze, my_getnbr(av[2]));
        print_maze_imperfect(maze, my_getnbr(av[1]), my_getnbr(av[2]));
    } else
        return (84);
    free_maze(maze);
    return (0);
}