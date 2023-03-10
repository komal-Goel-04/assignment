#include<stdio.h>
int main()
{
    int op;
    float ans,a,b;
    printf("Enter two numbers :");
    scanf("%f %f",&a,&b);
    printf("1 -> Addition   2 -> Subtraction    3 -> Multiplication     4 -> Division\n");
    printf("enter your choice :\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        {
            ans=a+b;
            printf("%f + %f = %f\n",a,b,ans);
            break;
        }
        case 2:
        {
            ans=a-b;
            printf("%f - %f = %f\n",a,b,ans);
            break;
        }
        case 3:
        {
            ans=a*b;
            printf("%f * %f = %f\n",a,b,ans);
            break;
        }
        case 4:
        {
            ans=a/b;
            printf("%f / %f = %f\n",a,b,ans);
            break;
        }
        default :
        {
            ("you have entered wrong choice");
            break;
        }
    }
}
