/*
** EPITECH PROJECT, 2020
** Epitech
** File description:
** solve
*/

#include <stdio.h>
#include "lib.h"

void print_map(map_t *map)
{
    for (int i = 0; map->map[i]; i++)
        printf("%s\n",map->map[i]);
}

void solve(map_t *map)
{
    print_map(map);
    while (map->end == 0) {
        map->map[map->y][map->x] = '1';
        recup_info(map);
        move_map(map);
        check_end(map);
    }
    if (map->end == 1) {
        printf("No Solution\n");
        print_map(map);
    } else {
        printf("NICE\n");
        print_map(map);
    }
}
