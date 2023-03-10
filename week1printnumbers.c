#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 && i%5!=0)
        {
            printf("Fizz\n");
            //printf("/n");
        }
        else if(i%5==0 && i%3!=0)
        {
            printf("Buzz\n");
            //printf("/n");
        }
        else if(i%5==0 && i%3==0)
        {
            printf("Fizz Buzz\n");
        }
        else 
        {
            printf("%d",i);
            printf("\n");
        }
    }
}