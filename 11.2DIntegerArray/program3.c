//WAP to accept marks of three students each having four subjects now do the following:
//A. find out total marks by every student
#include<stdio.h>
int main()
{
    int i,j,sum=0;
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
            sum = sum+arr[i][j];
        }
        printf("Total marks of student %d is : %d",i+1,sum);
        sum=0;
        printf("\n");
    }
    return 0;
}