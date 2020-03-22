/*
** EPITECH PROJECT, 2019
** CPE_BSQ_bootstrap_2019
** File description:
** open file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "lib.h"

void find_info(map_t *map, char *file)
{
    map->max_y = 0;
    map->max_x = 0;

    for (int i = 0; file[i] != '\n'; i++)
        map->max_x = i;
    for (int a = 0; file[a] != '\0'; a++) {
        if (file[a] == '\n')
            map->max_y++;
    }
    map->max_y--;
}

void str_to_arr(char *file, map_t *map)
{
    int i = 0;

    find_info(map, file);
    map->map = malloc(sizeof(char *) * (map->max_y + 2));
    map->map[map->max_y + 1] = NULL;
    for (int a = 0; a <= map->max_y; a++) {
        map->map[a] = malloc(sizeof(char) * (map->max_x + 2));
        map->map[a][map->max_x + 1] = '\0';
        for (int z = 0; z <= map->max_x; i++, z++) {
            map->map[a][z] = file[i];
        }
        i++;
    }
}

char *open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    long long size;
    struct stat *buf = malloc(sizeof(struct stat));
    char *map;

    if (stat(filepath, buf) == 0)
        size = buf->st_size;
    map = malloc(sizeof(char) * (size + 1));
    read(fd, map, size);
    map[size] = '\0';
    free(buf);
    return (map);
}
