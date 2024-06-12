//Wap to print the first n natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter a no : ");
    scanf("%d",&n);
    while(n>i)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}