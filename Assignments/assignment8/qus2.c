//WAP to print greater between two numbers.print one number if both are the same
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number : ");
    scanf("%d %d",&x,&y);
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
    return 0;
}