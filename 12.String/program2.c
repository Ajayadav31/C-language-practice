//WAP to accept an string from the user and print its length
#include<stdio.h>
int main()
{
    int i;
    char str[10];
    printf("Enter a String : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);//this semicolon will make the loop empty body
    printf("length of String is : %d",i);
    return 0;
}