//WAP to accept a string from the user but display it vertically----this is called traversing of an array
#include<stdio.h>
int main()
{
    int i;
    char str[10];
    printf("Enter a String : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}