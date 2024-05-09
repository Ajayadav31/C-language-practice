#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10];
    int x;
    printf("Enter a String : ");
    gets(arr);
    x=strlen(arr);
    printf("length of string %s is : %d",arr,x);
    return 0;
}