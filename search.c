#include <stdio.h>
#include <stdlib.h>

int liner_search(int*dat,int length,int key)
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

int binary search(int *data, int low,int high,int key)
{
    int mid=(low+high)/2;

    while(low<=high)
    {
        if(data[mid]==key)
        {
            return mid;
        }
        else if(data[mid]>=key)
        {

        }
        else
        {

        }
    }

}
