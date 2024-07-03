//WAP to find the greatest number stored in an array
#include<stdio.h>
int main()
{
    int arr[10];
    int i,max;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
    }
    i=0;
    for(max=arr[i];i<10;i++)
    {
        if(arr[i+1]>arr[i])
            max=arr[i+1];
    }
    printf("Maximum element is : %d",max);
    return 0;
}