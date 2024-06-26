//Write a function to calculate the factorial of a number
#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for( ;n>=1;n--)
    {
        fact=fact*n;
    }
    return fact;
}
int main()
{
    printf("%d",factorial(5));
    return 0;
}