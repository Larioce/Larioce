/*
** EPITECH PROJECT, 2022
** file7.c
** File description:
** display the list
*/

#include "../my.h"

int disp_list(list_t *li)
{
    if (li == NULL) {
        printf("NULL\n");
        return (-1);
    }
    elt_t *cur = li->first;
    for (; cur != NULL; cur = cur->next)
        printf("%s\n", cur->lines);
    return (0);
}
