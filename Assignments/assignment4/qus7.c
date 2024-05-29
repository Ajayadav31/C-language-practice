//WAP to swap values of two int variables without using third variable and arithmetic operators
#include<stdio.h>
int main()
{
    int a=10,b=5;
    printf("Before swapping a is : %d and b is : %d",a,b);
    //swapping code
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping a is : %d and b is : %d",a,b);
    return 0;
}