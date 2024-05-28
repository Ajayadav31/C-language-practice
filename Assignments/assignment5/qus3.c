//WAP to print size of an float,int,char and double
#include<stdio.h>
int main()
{
    char ch ='+';
    printf("size of Char is : %d",sizeof(ch));
    printf("\nsize of Char is : %d",sizeof((char)'+'));
    
    int a=10;
    printf("\nsize of int is : %d",sizeof(a));
    printf("\nsize of int is : %d",sizeof(10));

    float b=10.0;
    printf("\nsize of float is : %d",sizeof(b));
    printf("\nsize of float is : %d",sizeof(10.0f));

    double c=10.00;
    printf("\nsize of double is : %d",sizeof(c));
    printf("\nsize of double is : %d",sizeof(10.00));
    return 0;
}