/*
** EPITECH PROJECT, 2022
** file4.c
** File description:
** add an elt at the end of the list
*/

#include "../my.h"

int push_back_list(list_t *li, char *n_chn)
{
    elt_t *new_chn = malloc(sizeof(elt_t));

    if (new_chn == NULL)
        return (-1);
    new_chn->prev = li->last;
    new_chn->lines = strdup(n_chn);
    new_chn->next = NULL;
    li->last->next = new_chn;
    li->last = new_chn;
    return (0);
}
