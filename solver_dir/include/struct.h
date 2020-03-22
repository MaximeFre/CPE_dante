/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** struct define
*/

#ifndef STRUCT_H
    #define STRUCT_H

typedef struct map_s
{
    char **map;
    int max_y;
    int max_x;
    int x;
    int y;
    int left;
    int right;
    int up;
    int bot;
    int end;
} map_t;

#endif /* STRUCT_H_ */
