//WAP to accept 5 string from the user store them in a 2D array now ask user to iput another name and search it in the 2D array if the name is found then print its position otherwise display the message name not found
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    char target[10];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter String %d : ",i+1);
        gets(str[i]);
    }
    printf("Enter target String : ");
    gets(target);
    for(i=0;i<5;i++)
    {
        j=strcmp(str[i],target);
        if(j==0)
            break;
    }
    if(i==5)
        printf("Target String not found");
    else 
        printf("name is at %d",i+1);

    return 0;
}