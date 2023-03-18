//move all negative elements to one side of the array
#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d numbers : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int start=0,end=size-1,c;
    while(start<end)
    {
        if(arr[start]>0 && arr[end]<0)
        {
            c=arr[start];
            arr[start]=arr[end];
            arr[end]=c;
            start++;
            end--;
        }
        else if(arr[start]<0)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}