#include<stdio.h>
int main()
{
    int a =10;
    int *p;
    p=&a;
    printf("Content of a is : %d",a);//direct addresing
    printf("\nContent of a is : %d",*p);//indirect addressing
    printf("\nAddress of a is : %lu",p);
    printf("\n%d %d",a,*p);//derefrencing of pointer
    a=20;
    printf("\n%d %d",a,*p);
    *p=30;
    printf("\n%d %d",a,*p);
    return 0;
}