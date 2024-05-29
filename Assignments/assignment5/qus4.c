//WAp to make the last digit of a number stored in a variable as zero.(Example if x=2345 theb make it x=2340)
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Result is : %d",x/10*10);
    return 0;
}