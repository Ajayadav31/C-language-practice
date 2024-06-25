//WAP to calculate the area of a circle
#include<stdio.h>
float AreaOfCircle(float r);
int main()
{
    float rad;
    printf("Enter radius of circle : ");
    scanf("%f",&rad);
    printf("Area is : %f",AreaOfCircle(rad));
    return 0;
}
float AreaOfCircle(float r)
{
    return 3.14*r*r;
}