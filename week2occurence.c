#include<stdio.h>
void occurence(int arr[],int size,int key)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        count++;
    }
    printf("number of occurence of %d : %d",key,count);
}
int main()
{
    int size,key;
    printf("enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d numbers : ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a number to find its number of occurence : ");
    scanf("%d",&key);
    occurence(arr,size,key);
}