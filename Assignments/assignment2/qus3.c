//WAP to calculate simple interest
#include<stdio.h>
int main()
{
    float amt,rate,t;
    printf("Enter amount,rate and time : ");
    scanf("%f %f %f",&amt,&rate,&t);
    printf("Simple interest is : %f ",(amt*rate*t)/100);
    return 0;
}