//write a function to print first N prime number(TSRN)
#include<stdio.h>
int checkIsPrime(int);
void printPrimeNos(int lastNo)
{
   int result;
   for(int i=1;i<=lastNo;i++)
   {
        if(checkIsPrime(i)==1)
            printf("\n%d",i);
   } 
}
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
   printPrimeNos(5);
    return 0;
}