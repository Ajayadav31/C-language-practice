#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10];
    char brr[10];
    printf("Enter String 1 : ");
    gets(arr);
    printf("Enter String 2 : ");
    gets(brr);
    if(strcmp(arr,brr)==0)
        printf("String is equal");
    else
        printf("String is not equal");
    return 0;
}