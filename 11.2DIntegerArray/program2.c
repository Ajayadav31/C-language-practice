//modify previous code so that the output of your code also display sum and average of all the elments of the 2d array
#include<stdio.h>
int main()
{
    int sum=0,i,j;
    int arr[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter no : ");
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum is : %d",sum);
    printf("\nAvg is : %f",sum/(float)12);
    return 0;
}