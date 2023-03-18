#include<stdio.h>
int main()
{
    int num=1;
    int totalrows;
    printf("enter total number of rows to be printed : ");
    scanf("%d",&totalrows);
    for(int row = 1 ; row < totalrows ; row++)
    {
        for(int col = 1 ; col <= row ; col++)
        {
            printf("%d  ",num);
            num++;
        }
        printf("\n");
    }
}