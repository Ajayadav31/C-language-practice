//Write a function to check whether a given number is prime or not
#include<stdio.h>
int checkIsPrime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;//not a prime no
        }
    }
    return 1;
}
int main()
{
    int result=checkIsPrime(10);
    if(result==1)
        printf("No is prime");
    else
        printf("No is not prime");
    return 0;
}
