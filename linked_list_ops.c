#include "linked_list.h"

struct node_t *Head;

void create_linked_list(struct node_t ** h, int * data, int length)
{
    struct node_t *temp = (struct node_t*)malloc(sizeof(struct node_t));
    *h = temp;
    struct node_t *last=NULL;

    temp->data=data[0];
    temp->next=NULL;

    for(int i=1;i<length;i++)
    {
        last = (struct node_t*)malloc(sizeof(struct node_t));
        last->data=data[i];
        temp->next=last;
        last->next=NULL;
        temp=last;
    }

/*
    while((*h)!=NULL)
    {
        printf("Node = %d\r\n",(*h)->data);
        (*h)=(*h)->next;
    }
*/
   traverse_list(*h);

}
void traverse_list(struct node_t *Head)
{
    while(Head!=NULL)
    {
        printf("Node = %d\r\n",Head->data);
        Head=Head->next;
    }
}


void insert(struct node_t **head, int pos,int data)
{
    struct node_t * temp=NULL;

    if(pos ==0)
    {
    temp=(struct node_t *)malloc(sizeof(struct node_t));
    temp->next=*head;
    temp->data=data;
    *head=temp;
    }

}
