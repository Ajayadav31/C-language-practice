//WAP to calculate sum of first N natural even numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a no : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
    printf("Sum is : %d",sum);
    return 0;
}