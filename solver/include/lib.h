/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** lib
*/

#pragma once

#include "struct.h"

char *open_file(char const *filepath);
void str_to_arr(char *file, map_t *map);
void solve(map_t *map);
void recup_info(map_t *map);
void check_end(map_t *map);
void move_map(map_t *map);
int count_two(map_t *map);
void go_random_two(map_t *map, int nb);
