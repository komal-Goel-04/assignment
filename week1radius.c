#include<stdio.h>
int main()
{
    int a;
    float c,d;
    printf("Enter radius of the circle :");
    scanf("%d",&a);
    d=2*a;
    c=2*3.14*a;
    printf("diameter of circle : %f\n",d);
    printf("circumference of circle : %f\n",c);
}