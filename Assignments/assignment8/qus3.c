//WAP to check whether roots of a given quadratic equation are real & distinct,real & eual or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter coeffiecient of X2,y and constant of quadratic eq : ");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D==0)
        printf("real or equal roots");
    else if(D>0)
        printf("Real or distinct");
    else 
        printf("Imaginary roots");
    return 0;
}