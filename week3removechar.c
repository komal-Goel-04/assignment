#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char c;
    printf("enter a string : ");
    gets(str);
    printf("enter the character you want to remove : ");
    scanf("%c", &c);
    int length = strlen(str);
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != c)
            printf("%c", str[i]);
    }
}
