//WAP to check whether a given alphabet is uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch;
    printf("ENter a albhabet : ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("alphabet is uppercase");
    else if(ch>=97&&ch<=122)
    printf("alphabet is lowercase");
    else
    printf("Wrong input");
    return 0;
}