//WAP to find secong largest in an array. take array values from the user
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
    printf("second largest no is : %d",arr[8]);
    return 0;
}