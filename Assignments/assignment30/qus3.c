//WAP to copy the elements of one array into another array. take array values from the user
#include<stdio.h>
int main()
{
    int arr[10],arr2[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        arr2[i]=arr[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}