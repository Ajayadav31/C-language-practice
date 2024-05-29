//WAP to swap values of two int variablesin single line arthmetic expression
#include<stdio.h>
int main()
{
    int a=10,b=5;
    printf("Before swapping a is : %d and b is : %d",a,b);
    //swapping code
    a=a+b-(b=a);//compiler dependent according to associativity
    printf("\nAfter swapping a is : %d and b is : %d",a,b);
    return 0;
}