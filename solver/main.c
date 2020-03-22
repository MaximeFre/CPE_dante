/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void init_struct(map_t *map)
{
    map->end = 0;
    map->list = malloc(sizeof(list_t));
    map->list->x = 0;
    map->list->y = 0;
    map->list->prev = NULL;
    map->left = 0;
    map->right = 0;
    map->up = 0;
    map->bot = 0;
}

int main(int ac, char **av)
{
    map_t *map = malloc(sizeof(map_t));
    char *file = open_file(av[1]);

    str_to_arr(file, map);
    init_struct(map);
    solve(map);
    return (0);
}
