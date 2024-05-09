//WAP to accept temperatur in ferenhite from the user and display it by converting into celcius assume that farenhite will be int
//HINT-->(temp-32)*5/9
#include<stdio.h>
int main()
{
    int temp;
    printf("Enter Temperature in ferenhite : ");
    scanf("%d",&temp);
    printf("Temperature in celcius is : %f",(temp-32)*(double)5/9);
    //double is presice but float not
    return 0;
}