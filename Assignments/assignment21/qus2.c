//Write a function to calculate simple interest
#include<stdio.h>
float si(float p,float r,float t);
int main()
{
    float price,rate,time;
    printf("Enter amount rate and time : ");
    scanf("%f %f %f",&price,&rate,&time);
    printf("SI is : %f",si(price,rate,time));
    return 0;
}
float si(float p,float r,float t)
{
    return p*r*t/100.0f;
}