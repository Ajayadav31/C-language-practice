//A company provides 10% of the basic salary as TA(Touring Allowance) and 20% of the basic salary as HRA.WAP to ask the user to input his salary and calculate and print his total slary assume that basic salary will be unsigned int
#include<stdio.h>
int main()
{
    unsigned int salary,b;
    printf("Enter your basic salary : ");
    scanf("%u",&salary);
    printf("your total salary is : %u",b=(salary*0.3f)+salary);
   // printf("your total salary is : %lf",(salary*0.3f)+salary);
    return 0;
}