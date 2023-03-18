#include<stdio.h>
#include<string.h>
int main()
{
    int size1,size2;

    printf("enter size of first array : ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("enter %d integers : ",size1);
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    

    printf("enter size of second array : ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("enter %d integers : ",size2);
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }


    int totalsize = size1+size2;
    int arr3[totalsize];
    for(int i=0;i<size1;i++)
    {
        arr3[i] = arr1[i];
    }
    int j=0;
    for(int i=size1;i<totalsize;i++)
    {
        arr3[i]=arr2[j];
        j++;
    }
    printf("before merging and reversing : ");
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    printf("after merging and reversing : ");
    //printf("\n");
    for(int i=size1+size2-1;i>=0;i--)
    {
        printf("%d ",arr3[i]);
    }
}