//WAP to declare 2 character arrays accept a string from the user in one array and then copy it into the second array nut do not use any string function
#include<stdio.h>
int main()
{
    int i;
    char arr[10];
    char brr[10];
    printf("Enter a String : ");
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        brr[i]=arr[i];
    }
    brr[i]='\0';
    printf("copy String is : %s",brr);
    return 0;
}