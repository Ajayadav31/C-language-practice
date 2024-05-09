#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10];
    char brr[10];
    printf("Enter a String 1 : ");
    gets(arr);
    printf("Enter a String 2 : ");
    gets(brr);
    int x=strlen(arr);
    arr[x]=' ';//if we dont add space than output will be goodevening if user give good and evening as strings
    strcat(arr,brr);
    printf("%s",arr);
    return 0;
}