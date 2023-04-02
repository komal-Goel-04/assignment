#include <stdio.h>
int main()
{
    int x, y, sum = 0;
    printf("enter two numbers : ");
    scanf("%d %d", &x, &y);
    int *m, *n;
    m = &x;
    n = &y;
    sum = *m + *n;
    printf("%d + %d = %d", x, y, sum);
}