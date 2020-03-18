/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int total = 0;

    for (int i = 0; str[i] != '\0'; i++)
        total++;
    return total;
}