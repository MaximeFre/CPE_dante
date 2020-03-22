/*
** EPITECH PROJECT, 2020
** Epitech
** File description:
** check the end
*/

#include <time.h>
#include <stdlib.h>
#include "lib.h"

void check_end(map_t *map)
{
    if (map->list->x == 0 && map->list->y == 0)
        map->end = 1;
    if (map->list->x == map->max_x && map->list->y == map->max_y)
        map->end = 2;
}

void random_two(map_t *map, int random, int count)
{
    if (map->up == 1 && random == count) {
        map->list->y -= 1;
        return;
    } else if (map->up == 1) {
        count++;
    } if (map->bot == 1 && random == count) {
        map->list->y += 1;
        return;
    }
}
