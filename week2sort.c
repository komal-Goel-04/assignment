#include<stdio.h>

void sort(int arr[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        int small = 0 ; 
        for(int j=i+1;j<size;j++)
        {
            //printf("entered second for loop");
            if(arr[i]>arr[j])
            {
            small = arr[j];
            arr[j] = arr[i];
            arr[i] = small; 
            }
        }
        printf("%d ",arr[i]);
    }

}
int main()
{

    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elements : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,size);

}