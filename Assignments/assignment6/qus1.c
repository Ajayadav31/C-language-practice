//Assume price of 1 USD is INR 84.23. write a program to take the amount in INR and convert it into USD
#include<stdio.h>
int main()
{
    float x;
    printf("Enter a amount in INR : ");
    scanf("%f",&x);
    printf("amount in USD : %f",x/84.23);
    return 0;
}