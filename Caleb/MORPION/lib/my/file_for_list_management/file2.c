/*
** EPITECH PROJECT, 2022
** file2.c
** File description:
** return the list's lenght
*/

#include "../my.h"

int my_listlen(list_t *li)
{
    int len = 0;
    elt_t *elt = li->first;

    if (li != NULL)
        for (; elt != NULL; elt = elt->next)
            ++len;
    return (len);
}
