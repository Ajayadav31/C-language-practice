#include<stdio.h>
int main()
{
    short int a;
    float b,c;
    a=(300*300)/300;
    b=(300*300)/300.0;
    c=(300*300.0)/300;
    printf("%hd %f %f",a,b,c);   
    return 0;
}