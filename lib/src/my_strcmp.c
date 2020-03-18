/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** my_strcmp
*/

#include "string_utlis.h"

int my_strcmp(char const *str1, char const *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 != len2)
        return (-1);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (84);
    }
    return (0);
}