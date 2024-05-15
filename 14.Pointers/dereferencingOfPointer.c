#include<stdio.h>
int main()
{
    //derefrencing--it is the process of fetching a variable value using pointer
    int a =10;
    int *p;
    p=&a;
    printf("%d %d",a,*p);//derefrencing of pointer
    printf("\nContent of a is : %d",a);//direct addresing
    printf("\nContent of a is : %d",*p);//indirect addressing
    printf("\nAddress of a is : %lu",p);
    return 0;
}