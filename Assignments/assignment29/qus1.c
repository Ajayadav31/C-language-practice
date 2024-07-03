//wAP to calculate the sum of numbers stored in an array of size 10. take array values from the user
#include<stdio.h>
int main()
{
    int arr[10];
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of all element is : %d",sum);
    return 0;
}