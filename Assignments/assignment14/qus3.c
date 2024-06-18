//WAP check whether a given no is a prime or not
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a no : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0&&n>=2)
    {
        printf("No is prime");
    }
    else
        printf("No is not prime no");

    return 0;
}