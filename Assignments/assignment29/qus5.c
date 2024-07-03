//WAP to find the smallest number stored in an array
#include<stdio.h>
int main()
{
    int arr[10];
    int i,min;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
    }
    i=0;
    for(min=arr[i];i<10;i++)
    {
        if(arr[i+1]<arr[i])
            min=arr[i+1];
    }
    printf("minimum element is : %d",min);
    return 0;
}