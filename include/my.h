#include <stdarg.h>
#ifndef MY_H_

struct node
{
    int data;
    struct node *next;
};

void my_putchar(char c);
int my_getnbr(char *str);
size_t write(int fd, const void *buf, size_t count);
void my_putstr(char const *str);
int my_put_nbr(int nb);
void printList(struct node **l_a);
void push(struct node **l_a, int new_data);
void freeList(struct node **l_a);
void sa(struct node **l_a);
void pb(struct node **l_a, struct node**l_b);
void pa(struct node **l_a, struct node**l_b);
static void reverse(struct node **l_a);
void swap_list(struct node **l_a, struct node **l_b);

    
    
# define MY_H_


#endif /* !MY_H_ */
