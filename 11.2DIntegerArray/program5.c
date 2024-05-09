//C.Find out over all topper
#include<stdio.h>
int main()
{
    int i,j,max;
    int arr[3][4];
    int sum[3]={0,0,0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter Student %d marks : ",i+1);
            scanf("%d",&arr[i][j]);
            sum[i]=sum[i]+arr[i][j];
        }
        printf("\n");
    }
    max=sum[0];
    for(i=0;i<3;i++)
    {
        if(max<sum[i])
            max = sum[i];
    }
    printf("Topper is student no : %d",i);
    return 0;
}