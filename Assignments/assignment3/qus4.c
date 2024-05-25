//WAP TO PRINT last digit of a number 
#include<stdio.h>
int main()
{
    int a,last_digit;
    printf("Enter a number : ");
    scanf("%d",&a);
    last_digit=a%10;
    printf("last digit of given number is : %d",last_digit);
    return 0;
}