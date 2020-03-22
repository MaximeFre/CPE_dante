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

int error_handling(char *file)
{
    for (int i = 0; file[i]; i++) {
        if (file[i] != '*' && file[i] != 'X' && file[i] != '\n')
            return (84);
    }
    return (0);
}

int length_check(map_t *map, char *file)
{
    int count = 0;

    for (int i = 0; file[i]; i++) {
        if (file[i] == '\n' || file[i] == '\0') {
            if ((count - 1) != map->max_x)
                return (84);
            count = 0;
        } else
            count++;
    }
    return (0);
}

int main(int ac, char **av)
{
    map_t *map = malloc(sizeof(map_t));
    char *file;

    if (ac != 2)
        return (84);
    file = open_file(av[1]);
    if (file == NULL)
        return (84);
    if (error_handling(file) == 84)
        return (84);
    str_to_arr(file, map);
    if (length_check(map, file) == 84)
        return (84);
    init_struct(map);
    solve(map);
    return (0);
}
