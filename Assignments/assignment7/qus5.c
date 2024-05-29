//WAP to check whether the given number is even or odd using a bitwise operator
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