//WAP to find secong smallest in an array. take array values from the user
#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("enter element : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("second smallest no is : %d",arr[1]);
    return 0;
}