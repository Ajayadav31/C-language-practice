//WAP to ask user to input p,r,t and calculate simple interest assume p,r,t to be unsigned int
#include<stdio.h>
int main()
{
    unsigned int p,r,t;
    printf("Enter Amount rate and time : ");
    scanf("%u %u %u",&p,&r,&t);
    printf("Simple interest is : %f",p*r*t/100.0f);
    return 0;
}