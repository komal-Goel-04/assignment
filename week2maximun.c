#include<stdio.h>
int main()
{
    int size;
    printf("enter size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d numbers : ",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans[10];
    for(int i=0;i<10;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j] == i)
            count++;
        }
        ans[i]=count;
    }
    
    int max=0;
    for(int i=0;i<9;i++)
    {
        if(ans[i]>max)
        max = ans[i];
        
    }

    for(int i=0;i<9;i++)
    {
        if(max == ans[i])
        {
        printf("maximun occuring integer is : %d",i);
        break;
        }
    }
}