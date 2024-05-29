//WAp to input a number from the user and also input a digit.Append a digit in the number and print the resulting number(Ex-number=234 and digit=9 the the resulting number is 2349)
#include<stdio.h>
int main()
{
    int x,dig;
    printf("Enter a number and digit : ");
    scanf("%d %d",&x,&dig);
    printf("Result is : %d",x*10+dig);
    return 0;
}