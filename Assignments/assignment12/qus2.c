//Wap to print the first n natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a no : ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}