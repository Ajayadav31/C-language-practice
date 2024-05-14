#include<stdio.h>
int main()
{
    int x,age;
    char str[10];
    printf("Enter your name and age : ");
    x=scanf("%s %d",&str,&age);
    printf("%d",x);
    return 0;
}