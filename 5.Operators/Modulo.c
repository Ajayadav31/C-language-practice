#include<stdio.h>
int main()
{
    //rule1--only works with integers
    int a=7,b=10,c=6;
    //rule2--small%greater=small
    printf("%d",a%b);
    //rule3--(sign)Numerator%Denominator=(sign of numerator)remainder
    printf("\n%d",-a%b);
    printf("\n%d",a%-c);
    return 0;
}