#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t * next;
};

struct node_t *Head;

/*void add_node(struct node_t*,int data)
{
   struct node_t *temp=NULL;

}*/

int array[10]={3,21,4,5,45,3434,22,332,255,43};
int sorted_array[10]={3,5,6,7,10,22,33,44,56,77};

extern int binary_search(int *data, int low, int high,int key);
extern int linear_search(int*dat,int length,int key);

int main()
{
    printf("Hello world!\n");

    Head = (struct node_t*)malloc(sizeof(struct node_t));
    Head->data=10;
    Head->next=NULL;

    binary_search(sorted_array,0,9,11);
    return 0;
}




