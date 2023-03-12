/*
** EPITECH PROJECT, 2022
** file5.c
** File description:
** suppress an elt at the start of the list
*/

#include "../my.h"

int suppress_front_list(list_t *li)
{
    if (li == NULL)
        return (-1);
    if (li->first != NULL) {
        elt_t *to_be_deleted = li->first;
        li->first = li->first->next;
        free(to_be_deleted->lines);
        free(to_be_deleted);
    }
    return (0);
}
