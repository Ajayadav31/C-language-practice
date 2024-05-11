//WAP to accept % string from the user and print reverse of string
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
        for( ;j>=0;j--)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    return 0;
}