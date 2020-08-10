/*
** EPITECH PROJECT, 2020
** functions
** File description:
** functions
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

static void reverse(struct node **l_a)
{
    struct node *prev = NULL;
    struct node *current = *l_a;
    struct node *next = NULL;
    
    while (current != NULL) {
    
        next = current->next;

    
        current->next = prev;

    
        prev = current;
        current = next;
    }
    *l_a = prev;
} 

void sa(struct node **l_a)
{
    struct node *tmp = *l_a;

    tmp = tmp->next;
    (*l_a)->next = tmp->next;
    tmp->next = (*l_a);
    (*l_a) = tmp;
    my_putstr("sa ");
}

void pa(struct node **l_a, struct node **l_b)
{
    struct node *tmp = *l_a;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = (*l_b)->data;
    tmp->next = (*l_a);
    (*l_a) = tmp;
    (*l_b) = (*l_b)->next;
    my_putstr("pa ");
}

void pb(struct node **l_a, struct node **l_b)
{
    struct node *tmp = *l_b;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = (*l_a)->data;
    tmp->next = (*l_b);
    (*l_b) = tmp;
    (*l_a) = (*l_a)->next;
    my_putstr("pb ");
}
