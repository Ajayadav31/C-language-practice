#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter no : ");
            scanf("%d",&arr[i][j]);
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
    return 0;
}