#include<stdio.h>
int main()
{
   int a,remainder=0,sum=0;
    printf("Enter a number :");
    scanf("%d",&a);
    do
    {
        remainder=a%10;
        a=a/10;
        sum=sum+remainder;
    }
    while(a>0);
    printf("Sum of digits = %d",sum);
}
