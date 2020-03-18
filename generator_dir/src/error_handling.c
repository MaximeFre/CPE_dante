/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** error_handling
*/

#include "string_utlis.h"

int error_handling(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    for (int j = 0; av[1][j] != '\0'; j++) {
        if ((av[1][j] < '0' && av[1][j] > '9') || my_getnbr(av[1]) <= 0) {
            return (84);
        }
    }
    for (int j = 0; av[2][j] != '\0'; j++) {
        if ((av[2][j] < '0' && av[2][j] > '9') || my_getnbr(av[2]) <= 0) {
            return (84);
        }
    }
    if (ac == 4 && my_strcmp(av[3], "perfect") != 0)
        return (84);
    return (0);
}