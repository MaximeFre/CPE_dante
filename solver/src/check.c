/*
** EPITECH PROJECT, 2020
** Epitech
** File description:
** check
*/

#include "lib.h"

void check_left(map_t *map)
{
    if (map->list->x == 0)
        map->left = 0;
    else if (map->map[map->list->y][map->list->x - 1] == '*')
        map->left = 1;
    else {
        if (map->map[map->list->y][map->list->x - 1] == '1')
            map->left = 2;
        else if (map->map[map->list->y][map->list->x - 1] == '2')
            map->left = 3;
        else
            map->left = 0;
    }
}

void check_right(map_t *map)
{
    if (map->list->x == map->max_x)
        map->right = 0;
    else if (map->map[map->list->y][map->list->x + 1] == '*')
        map->right = 1;
    else {
        if (map->map[map->list->y][map->list->x + 1] == '1')
            map->right = 2;
        else if (map->map[map->list->y][map->list->x + 1] == '2')
            map->right = 3;
        else
            map->right = 0;
    }
}

void check_up(map_t *map)
{
    if (map->list->y == 0)
        map->up = 0;
    else if (map->map[map->list->y - 1][map->list->x] == '*')
        map->up = 1;
    else {
        if (map->map[map->list->y - 1][map->list->x] == '1')
            map->up = 2;
        else if (map->map[map->list->y - 1][map->list->x] == '2')
            map->up = 3;
        else
            map->up = 0;
    }
}

void check_bot(map_t *map)
{
    if (map->list->y == map->max_y)
        map->bot = 0;
    else if (map->map[map->list->y + 1][map->list->x] == '*')
        map->bot = 1;
    else {
        if (map->map[map->list->y + 1][map->list->x] == '1')
            map->bot = 2;
        else if (map->map[map->list->y + 1][map->list->x] == '2')
            map->bot = 3;
        else
            map->bot = 0;
    }
}

void recup_info(map_t *map)
{
    check_left(map);
    check_right(map);
    check_up(map);
    check_bot(map);
}
