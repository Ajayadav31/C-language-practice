//WAP to check whether a given number is even or odd without using % operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x&1)
        printf("0dd");
    else
        printf("even");
    return 0;
}