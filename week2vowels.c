#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    printf("enter a string : ");
    scanf("%s",arr);
    int size = strlen(arr);
    int vowels = 0,consonants = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        vowels++;
        else
        consonants++;
    }
    printf("total number of vowels : %d\n",vowels);
    printf("total number of consonants : %d",consonants);
}