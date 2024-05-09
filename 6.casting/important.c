#include<stdio.h>
int main()
{
    //IMPORTANT
    char ch1=100,ch2=5;
    printf("Division is %d",ch1/ch2);
    printf("\nDivision is %f",ch1/ch2);//Gives absurt output
    float a=100,b=5;
    printf("\nDivision is %d",a/b);//gives absurt output
    int x=100,y=5;
    printf("\nDivision is %f",x/y);//gives absurt output
    //SOLUTION BY TYPECASTING
    printf("\nDivision is %f",(float)ch1/ch2);
    printf("\nDivision is %f",a/b);
    printf("\nDivision is %f",(float)x/y);
    return 0;
}