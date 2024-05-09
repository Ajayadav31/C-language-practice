#include<stdio.h>
int main()
{
    int a =10,b=3;
    float x=3,y=10;
    //rule1--int/int=int
    printf("%d",a/b);
    //rule2--small_int/greater_int=0
    printf("\n%d",b/a);
    //but float/float=float  or int/float or float/int = float
    printf("\n%f",x/y);
    return 0;
}