/*
** EPITECH PROJECT, 2022
** file6.c
** File description:
** suppress an elt at the end of the list
*/

#include "../my.h"

int processing_deletion(list_t *li)
{
    elt_t *tmp = li->first, *ptmp = li->first;
    while (tmp->next != NULL) {
        ptmp = tmp;
        tmp = tmp->next;
    }
    ptmp->next = NULL;
    li->last = ptmp;
    free(tmp->lines);
    free(tmp);
}

int suppress_back_list(list_t *li)
{
    if (li->first == NULL) {
        return (-1);
    } else if (li->first->next == NULL) {
        elt_t *to_be_deleted = li->first;
        free(to_be_deleted->lines);
        free(to_be_deleted);
        li->first = NULL;
        return (0);
    } else
        processing_deletion(li);
    return (0);
}
