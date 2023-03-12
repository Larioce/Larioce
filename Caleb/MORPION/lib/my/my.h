/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** libmy
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>

typedef struct elt_s {
    struct elt_s *prev;
    char *lines;
    struct elt_s *next;
} elt_t;

typedef struct list_s {
    elt_t *first;
    elt_t *last;
} list_t;

typedef struct av_s {
    char *str;
    char **dtab;
    int i;
    int l;
    char sep;
} av_t;

int disp_list(list_t *li);
list_t *fill(list_t *tmp, char *to_be_checked);
list_t *list_initialisation(char *chn);
int my_listlen(list_t *li);
int push_front_list(list_t *li, char *n_chn);
int push_back_list(list_t *li, char *n_chn);
int suppress_front_list(list_t *li);
int suppress_back_list(list_t *li);
void my_free_list(list_t *to_be_cleaned);

#endif
