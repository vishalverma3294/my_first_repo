#include "linked_list.h"

struct node_t *Head;

void create_linked_list(struct node_t ** h, int * data, int length)
{
    struct node_t *temp = (struct node_t*)malloc(sizeof(struct node_t));
    *h = temp;

    temp->data=data[0];
    temp->next=NULL;
    printf("Node = %d\r\n",temp->data);

    for(int i=1;i<length;i++)
    {
        temp->data=data[i];
        *temp = (struct node_t*)malloc(sizeof(struct node_t));
    }

    while(temp->next!=NULL)
    {
        printf("Node = %d\r\n",temp->data);
        temp=temp->next;
    }

}
