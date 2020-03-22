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
    map->map[map->max_y][map->max_x] = '1';
    for (int i = 0; map->map[i]; i++) {
        for (int a = 0; map->map[i][a]; a++) {
            if (map->map[i][a] == '1')
                printf("o");
            else if (map->map[i][a] == 'X')
                printf("X");
            else
                printf("*");
        }
        if (map->map[i + 1] != NULL)
            printf("\n");
    }
}

void create_node(map_t *map)
{
    list_t *tmp = malloc(sizeof(list_t));

    tmp->x = map->list->x;
    tmp->y = map->list->y;
    tmp->prev = map->list;
    map->list = tmp;
}

void solve(map_t *map)
{
    while (map->end == 0) {
        map->map[map->list->y][map->list->x] = '1';
        create_node(map);
        recup_info(map);
        move_map(map);
        check_end(map);
    }
    if (map->end == 1) {
        printf("No Solution\n");
    } else {
        print_map(map);
    }
}
