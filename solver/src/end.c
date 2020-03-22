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
    if (map->x == 0 && map->y == 0)
        map->end = 1;
    if (map->x == map->max_x && map->y == map->max_y)
        map->end = 2;
}

void go_random_two(map_t *map, int nb)
{
    srand(time(NULL));
    int random = rand() % (nb - 1);
    int count = 0;

    if (map->left == 3 && random == count) {
        map->x -= 1;
        return;
    } else if (map->left == 3) {
        count++;
    } if (map->right == 3 && random == count) {
        map->x += 1;
        return;
    } else if (map->right == 3) {
        count++;
    } if (map->up == 3 && random == count) {
        map->y -= 1;
        return;
    } else if (map->up == 3) {
        count++;
    } if (map->bot == 3 && random == count) {
        map->y += 1;
        return;
    }
}

int count_two(map_t *map)
{
    int count = 0;

    if (map->left == 3)
        count++;
    if (map->right == 3)
        count++;
    if (map->up == 3)
        count++;
    if (map->bot == 3)
        count++;
    return (count);
}
