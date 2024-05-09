//B.find out the highest marks scored by every student
#include<stdio.h>
int main()
{
    int i,j,max;
    int arr[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter Student %d marks : ",i+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            max = arr[i][j];
            if(max<arr[i][j])
                max =arr[i][j];
        }
        printf("Highest marks of student %d is %d",i,max);
        max=0;
        printf("\n");
    }
    return 0;
}