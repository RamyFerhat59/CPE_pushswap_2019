/*
** EPITECH PROJECT, 2019
** push
** File description:
** push
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

int main(int argc, char *argv[])
{
    struct node *l_a = NULL;
    struct node *l_b = NULL;

    int i;
    int data;

    for (i = 1; i < argc; i++)
    {
        data = my_getnbr(argv[i]);
        push(&l_a, data);
    }
    bubblesort(&l_a, &l_b);
    freeList(&l_a);
    freeList(&l_b);
    return 0;
}

void printList(struct node **l_a)
{
    struct node *temp = *l_a;

    while (temp != NULL)
    {
        my_put_nbr(temp->data);
        temp = temp->next;
    }
}

void push(struct node **l_a, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*l_a);
    (*l_a) = new_node;
}

void freeList(struct node **l_a)
{
    struct node *current = *l_a;
    struct node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *l_a = NULL;
}

void bubblesort(struct node **l_a, struct node **l_b)
{
    struct node *tmp;
    int i;

    i = 1;
    while (i == 1)
    {
        i = 0;
        tmp = *l_a;
        while ((*l_a)->next != NULL)
        {
            if ((*l_a)->data > (*l_a)->next->data)
            {
                sa(l_a);
                i = 1;
            }
            pb(l_a, l_b);
            tmp = tmp->next;
        }
        while (*l_b != NULL)
            pa(l_a, l_b);
    }
}