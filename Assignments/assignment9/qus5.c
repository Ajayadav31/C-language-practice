//WAP to check whether a given number is divisible by 3 and divisible by 7
#include<stdio.h>
int main()
{
    int num;
    printf("ENter a numbert : ");
    scanf("%d",&num);
    if(num%7==0)
    {
        if(num%3==0)
            printf("Number is divisible by both 7 and 3");
        else
            printf("Number is divisible by 7");
    }
    else if(num%3==0)
        printf("number is divisible by 3");
    else 
        printf("not divisible by 7 and 3");
    return 0;
}