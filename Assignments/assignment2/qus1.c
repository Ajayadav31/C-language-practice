///WAP to calculate average of 3 integers. numbers are given by the user
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 nos : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Average is %f",(float)(a+b+c)/3);
    return 0;
}