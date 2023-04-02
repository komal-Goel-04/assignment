#include <stdio.h>
int main()
{
    int x, fact = 1;
    printf("enter a number : ");
    scanf("%d", &x);
    int *m = &x;
    for (int i = *m; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", *m, fact);
}

// week3factorialusingpointer.c