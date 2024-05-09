#include<stdio.h>
int main()
{
    int a,b;
    //if a=10,b=3,a/b=3.33... but int/int=int thats why only 3 assigned to c
    //solution1--convert a,b to float BUT THIS TAKE MORE MEMORY
    //solution2--TYPECASTING
    float c;
    printf("Enter 2 intrger : ");
    scanf("%d %d",&a,&b);
    //TYPECASTING methods rule
    c=(float)a/b;//method1
    c=a/(float)b;//method2
    //c=a/4.0;  //method3--compiler consider 4.0 as double and take 8byte
    //c=a/4.0f;  //method4
    //c=a/4.0F;  //method5
    //c=a/b(float)  and =a(float)/b; WRONGE
    //(float)c=(float)a/b; WRONGE
    printf("Division is : %f",c);
     char ch = 'A';
    printf("\n%f",(float)ch);
    return 0;
}