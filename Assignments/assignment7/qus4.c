//WAP to check whether a given number is even or odd without using % operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x/2*2==x)
        printf("even");
    else
        printf("odd");
    return 0;
}