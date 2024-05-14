#include<stdio.h>
void average(void);
int main()
{
    average();
    return 0;
}
void average(void)
{
    int a,b,c;
    float d;
    printf("Enter 3 int : ");
    scanf("%d %d %d",&a,&b,&c);
    d=(float)(a+b+c)/3;
    printf("Average is : %f",d);
}