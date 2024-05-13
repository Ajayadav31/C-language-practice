#include<stdio.h>
#include<time.h>
void delay(int);
int main()
{
    for(int i;i<=10;i++)
    {
        printf("\n%d",i);
        delay(1000);
    }
    return 0;
}
void delay(int number_of_second)
{
    int start_time=clock();
    while(clock()<start_time+number_of_second);
}