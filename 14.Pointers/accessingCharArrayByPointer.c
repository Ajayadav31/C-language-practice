#include<stdio.h>
int main()
{
    char str[10];
    char *p=str;
    printf("Enter a String : ");
    gets(p);
    printf("%s",p);
    return 0;
}