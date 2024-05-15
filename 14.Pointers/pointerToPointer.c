#include<stdio.h>
int  main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    //Adresses
    printf("Address of a is : %lu",p);
    printf("\nAddress of p is : %lu",q);
    //ways of accessing the value of a 
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",**q);
    return 0;
}