//WAP to take three dgit number from the user and rotate its digit by one position towards the right
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a three digit no : ");
    scanf("%d",&x);
    printf("After rotation is : %d",x%10*100+x/10);
    return 0;
}