//WAP to print first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int i=2,n;
    printf("Enter a no : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n);
        n-=2;
    }
    return 0;
}