//WAP to check whether a given number is positive or non positive
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>0)
        printf("Number is positive");
    else
        printf("Number is negative");
    return 0;
}