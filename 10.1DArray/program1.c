//WAP to accept values from the user in a 1D Array of 10 elements.Now display the sum and avg of all the elements of array
#include<stdio.h>
int main()
{
    int i,sum=0;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter elements no %d : ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum is : %d",sum);
    printf("\nAverage is : %f",sum/(float)10);
    return 0;
}