#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    printf("enter a string : ");
    scanf("%s",&arr);
    int size = strlen(arr);

    int digit = 0, alphabet = 0, specialchar = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>='0' && arr[i]<= '9')
        digit++;
        else if((arr[i]>='a' && arr[i]<='z')  ||  (arr[i]>='A' && arr[i]<='Z'))
        alphabet++;
        else
        specialchar++;
    }
    printf("total number of digits : %d\n",digit);
    printf("total number of alphabet : %d\n",alphabet);
    printf("total number of special character : %d\n",specialchar);


}

