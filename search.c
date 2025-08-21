#include <stdio.h>
#include <stdlib.h>



int linear_search(int*dat,int length,int key)
{
    int*data=dat;
    int i=0;
    for(i=0;i<length;i++)
    {
        if(data[i]==key)
           {
               if(i>0)
                {
                  int temp=data[i-1];
                  data[i-1]=data[i];
                  data[i]=temp;
                }
                printf("Position of Key = %d\n\r",i);
                return i;
           }
    }
    printf("Position of Key = %d\n\r",i);
    return -1;
}

int binary_search(int *data, int low, int high,int key)
{
    int mid=0;

    while(low<=high)
    {
        mid = low +((high-low)/2);

        if(data[mid]==key)
        {
            printf("Position of Key = %d\n\r",mid);
            return mid;
        }
        else if(data[mid]>=key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
        printf("Position of Key NOT FOUND\n\r");
    return -1;
}

void reverse_array(int*data,int length)
{
    int array[10]={0};
    int i=0,j=0;

    for(i=length-1,j=0;i>=0;i--,j++)
    {
        array[j]=data[i];
    }

    for(i=0;i<length;i++)
    {
        data[i]=array[i];
    }
    for(i=0;i<length;i++)
    {
        printf("Element no %d of array = %d\r\n",i,data[i]);
    }

}
int (*func_ptr)(int abc, int data)=binary_search;
