//wAP to calculate the sum of even numbers and sum of all odd numbers stored in an array of size 10. take array values from the user
#include<stdio.h>
int main()
{
    int arr[10];
    int i,soe=0,soo=0;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            soe=soe+arr[i];
        else
            soo=soo+arr[i];
    }
    printf("Sum of all even element is : %d\n",soe);
    printf("Sum of all odd element is : %d\n",soo);
    return 0;
}