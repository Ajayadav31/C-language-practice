//WAP to print a given number without its last digit
#include<stdio.h>
int main()
{
    int a,last_digit;
    printf("Enter a number : ");
    scanf("%d",&a);
    last_digit=a/10;
    printf("number without its last digit is : %d",last_digit);
    return 0;
}
