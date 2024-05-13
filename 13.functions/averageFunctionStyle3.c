#include<stdio.h>
float average();
int main()
{
    float X;
    X=average();
    printf("Average is : %f",X);
    return 0;
}
float average()
{
    int a,b,c;
    float d;
    printf("Enter 3 int : ");
    scanf("%d %d %d",&a,&b,&c);
    d=(float)(a+b+c)/3;
    return d;
}