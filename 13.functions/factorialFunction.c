#include<stdio.h>
int factorial(int x)
{
    int i=1;
    for( ;x>1;x--)
    {
        i=i*x;
    }
    return i;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial is %d",factorial(n));
    return 0;
}