#include<stdio.h>
void increment(int *,char*);
int main()
{
    int a=10;
    char b='x';
    printf("before increment a=%d,b=%c",a,b);
    increment(&a,&b);
    printf("\nAfter increment a=%d,b=%c",a,b);
    //change done in the formal argument are reflected in the actual argument
    return 0;
}
void increment(int *p,char *q)
{
    *p=*p+1;
    *q=*q+1;
}