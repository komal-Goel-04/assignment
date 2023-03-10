#include<stdio.h>
int main()
{
    int a,b,ans=0;
    int op=1;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case 1:
        {
            ans=a+b;
            printf("%d + %d = %d\n",a,b,ans);
        }
        case 2:
        {
            ans=a-b;
            printf("%d - %d = %d\n",a,b,ans);
        }
        case 3:
        {
            ans=a*b;
            printf("%d * %d = %d\n",a,b,ans);
        }
        case 4:
        {
            ans=a/b;
            printf("%d / %d = %d\n",a,b,ans);
        }
    }
}