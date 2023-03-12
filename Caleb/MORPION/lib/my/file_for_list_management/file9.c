/*
** EPITECH PROJECT, 2022
** B-PSU-300-COT-3-1-minishell2-nicaise.gbenou
** File description:
** file9
*/

#include "../my.h"

list_t *fill(list_t *tmp, char *to_be_checked)
{
    if (tmp == NULL)
        tmp = list_initialisation(to_be_checked);
    else
        push_back_list(tmp, to_be_checked);
    return (tmp);
}
