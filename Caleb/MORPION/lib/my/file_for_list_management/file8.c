/*
** EPITECH PROJECT, 2022
** B-PSU-300-COT-3-1-myls-togni.akpo
** File description:
** file8
*/

#include "../my.h"

list_t *my_rev_list(list_t *begin)
{
    list_t *to_be_returned = NULL;

    for (elt_t *cur = begin->first; cur != NULL; cur = cur->next)
        if (to_be_returned == NULL)
            to_be_returned = list_initialisation(cur->lines);
        else
            push_front_list(to_be_returned, cur->lines);
    my_free_list(begin);
    return (to_be_returned);
}
