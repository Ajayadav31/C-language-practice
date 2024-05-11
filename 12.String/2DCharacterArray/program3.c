//WAP to accept 5Strings from the user,store it in a 2D charcter array and without using string function display each name length
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter String %d : ",i+1);
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j]!='\0';j++);
        printf("Length of String %d is : %d\n",i+1,j);
    }
    return 0;
}