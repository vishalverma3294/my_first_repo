#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t * next;
};

extern struct node_t *Head;
extern void create_linked_list(struct node_t ** h, int * data, int length);
extern void traverse_list(struct node_t *Head);
extern void insert(struct node_t **head, int pos,int data);
#endif // LINKED_LIST_H_INCLUDED
