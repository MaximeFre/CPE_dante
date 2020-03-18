/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "generator.h"
#include "string_utlis.h"

int main(int ac, char **av)
{
    char **maze;

    if (error_handling(ac, av) == 84)
        return (84);
    maze = prepare_maze(av);
    maze = generator(maze, my_getnbr(av[1]), my_getnbr(av[2]));
    return (0);
}