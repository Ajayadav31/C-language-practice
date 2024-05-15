#include<stdio.h>
int main()
{
    int x=10;
    int *p;//pointer
    //* is called indirectional operator
    //IMP--datatype of pointer is always same as thedatatype of the variable to which the pointer will point
    p=&x;//address stored in p pointer
    printf("Content of x is : %d",x);
    printf("\nAddress of x is : %lu",p);
    return 0;
}