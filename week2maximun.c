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
    int maxcount=0,maxelement;
    for(int i=0;i<size-1;i++)
    {
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(count>maxcount)
                {
                    maxelement=arr[j];
                    maxcount=count;
                }
            }
        }
    }
    printf("maximum occuring integer is : %d",maxelement);
}
