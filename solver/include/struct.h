/*
** EPITECH PROJECT, 2019
** Epitech
** File description:
** struct define
*/

#ifndef STRUCT_H
    #define STRUCT_H

typedef struct list_s
{
    int x;
    int y;
    struct list_s *prev;
} list_t;

typedef struct map_s
{
    char **map;
    list_t *list;
    int max_y;
    int max_x;
    int left;
    int right;
    int up;
    int bot;
    int end;
} map_t;

#endif /* STRUCT_H_ */
