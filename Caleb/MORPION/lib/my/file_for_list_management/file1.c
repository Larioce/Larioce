/*
** EPITECH PROJECT, 2022
** file1.c
** File description:
** initilisation of the list whit av[1]
*/

#include "../my.h"

list_t *list_initialisation(char *chn)
{
    list_t *li = malloc(sizeof(list_t) * 1);
    elt_t *f_elt = malloc(sizeof(elt_t) * 1);

    if (li == NULL || f_elt == NULL) return (NULL);
    f_elt->prev = NULL;
    f_elt->lines = strdup(chn);
    f_elt->next = NULL;
    li->first = f_elt;
    li->last = f_elt;
    return (li);
}
