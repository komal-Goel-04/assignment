#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size],ans[size];
    printf("enter %d numbers : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        ans[i] = arr[i];
        
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",ans[i]);
    }
}
