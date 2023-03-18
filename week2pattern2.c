#include<stdio.h>
int main()
{
    int totalrows,n;
    printf("enter total number of rows to be printed : ");
    scanf("%d",&totalrows);
    n = totalrows;
    for(int row = 0 ; row < totalrows ; row++)
    {
        for(int col = n ; col > 0 ; col--)
        {
            printf("* ");
        }
        n--;
        printf("\n");

    }
}