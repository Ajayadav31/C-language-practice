#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int *p;
    p=arr;//p=&arr[0];
    for(i=0;i<5;i++)
    {
        printf("ENter a number : ");
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        printf("\nVAlue at position %d is : %d",i+1,*(p+i));
    }
    return 0;
}