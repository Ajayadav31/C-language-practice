//WAP to accept 5Strings from the user,store it in a 2D charcter array and using appropriate string function display each name length
#include<stdio.h>
int main()
{
    int i;
    char arr[5][10];
    for(i=0;i<5;i++)
    {
        printf("Enter string %d : ",i+1);
        gets(arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Length of String %d is : %d\n",i+1,strlen(arr[i]));
    }
    return 0;
}