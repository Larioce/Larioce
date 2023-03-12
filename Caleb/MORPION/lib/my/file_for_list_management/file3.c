/*
** EPITECH PROJECT, 2022
** file3.c
** File description:
** add an elt at the start of the list
*/

#include "../my.h"

int push_front_list(list_t *li, char *n_chn)
{
    elt_t *new_chn = malloc(sizeof(elt_t));

    if (new_chn == NULL)
        return (-1);
    new_chn->prev = NULL;
    new_chn->lines = strdup(n_chn);
    new_chn->next = li->first;
    li->first = new_chn;
    return (0);
}
