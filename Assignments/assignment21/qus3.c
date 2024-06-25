//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0
#include<stdio.h>
int check(int a)
{
    if(a%2==0)
        return 1;
    return 0;
}
int main()
{
    int num,result;
    printf("Enter a number : ");
    scanf("%d",&num);
    result=check(num);
    if(result==1)
        printf("Num is even");
    else
        printf("num is odd");
    return 0;
}