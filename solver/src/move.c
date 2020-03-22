/*
** EPITECH PROJECT, 2020
** Epitech
** File description:
** move
*/

#include <time.h>
#include <stdlib.h>
#include "lib.h"

int path(map_t *map)
{
    int count = 0;

    if (map->left == 1)
        count++;
    if (map->right == 1)
        count++;
    if (map->up == 1)
        count++;
    if (map->bot == 1)
        count++;
    return (count);
}

void go_back(map_t *map)
{
    map->map[map->y][map->x] = '2';
    if (map->left == 2) {
        map->x -= 1;
        return;
    } if (map->right == 2) {
        map->x += 1;
        return;
    } if (map->up == 2) {
        map->y -= 1;
        return;
    } if (map->bot == 2) {
        map->y += 1;
        return;
    }
    go_random_two(map, count_two(map));
}

void go_here(map_t *map)
{
    if (map->left == 1) {
        map->x -= 1;
        return;
    } if (map->right == 1) {
        map->x += 1;
        return;
    } if (map->up == 1) {
        map->y -= 1;
        return;
    } if (map->bot == 1) {
        map->y += 1;
        return;
    }
}

void go_random(map_t *map, int nb)
{
    srand(time(NULL));
    int random = rand() % (nb - 1);
    int count = 0;

    if (map->left == 1 && random == count) {
        map->x -= 1;
        return;
    } else if (map->left == 1) {
        count++;
    } if (map->right == 1 && random == count) {
        map->x += 1;
        return;
    } else if (map->right == 1) {
        count++;
    } if (map->up == 1 && random == count) {
        map->y -= 1;
        return;
    } else if (map->up == 1) {
        count++;
    } if (map->bot == 1 && random == count) {
        map->y += 1;
        return;
    }
}

void move_map(map_t *map)
{
    int nb_path = path(map);

    switch (nb_path) {
        case 0: go_back(map);
            break;
        case 1: go_here(map);
            break;
        default: go_here(map);
            break;
    }
}
