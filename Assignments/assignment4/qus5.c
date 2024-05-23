//WAP to swap values of two int variable without using a third variable
#include<stdio.h>
int main()
{
    int a=10,b=5;
    printf("Before swapping a is : %d and b is : %d",a,b);
    //swapping code
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a is : %d and b is : %d",a,b);
    return 0;
}