//WAP to create 3 charcter arrays accept 2 string from the user and store them in first 2 arrays now copy the contents of both the strings in the third array with a space between them
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10];
    char brr[10];
    char crr[10];
    int x;
    printf("Enter your name : ");
    gets(arr);
    printf("Enter your surname : ");
    gets(brr);
    x=strlen(arr);
    arr[x]=' ';
    strcat(arr,brr);
    strcpy(crr,arr);
    printf("Hello! %s",crr);
    return 0;
}