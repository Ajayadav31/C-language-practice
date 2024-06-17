//WAP to count no of digits
#include<stdio.h>
int main()
{
    int n,count;
    printf("Enter a no : ");
    scanf("%d",&n);
    for(count=0;n>0;count++)
    {
        n=n/10;
    }
    printf("No of digits are : %d",count);
    return 0;
}
