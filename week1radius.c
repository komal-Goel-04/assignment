#include<stdio.h>
int main()
{
    float r,circum,dia,area;
    float pi=3.14;
    printf("Enter radius of the circle :");
    scanf("%f",&r);
    dia=2*r;
    circum=2*pi*r;
    area=pi*r*r;
    printf("diameter of circle : %f\n",dia);
    printf("circumference of circle : %f\n",circum);
    printf("area of circle : %f\n",area);
}
