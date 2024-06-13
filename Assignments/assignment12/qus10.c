//WAP to print first square of first N even natural numbers
#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no : ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",i*n);
        i++;
    }
    return 0;
}