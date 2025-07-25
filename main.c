#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t * next;
};

struct node_t *Head;

void add_node(struct node_t*,int data)
{
   struct node_t *temp=NULL;

}


int main()
{
    printf("Hello world!\n");

    Head = (node_t*)malloc(sizeof(struct node_t));
    Head->data=10;
    Head->next=NULL;


    return 0;
}
