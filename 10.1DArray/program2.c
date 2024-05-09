//Modify program 1 so that noe yourprogram display the sum of even nos and the sum  and avg of all elements of the array
#include<stdio.h>
int main()
{
    int i,soe=0,soo=0,count1=0,count2=0;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter elements no %d : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
          soe=soe+arr[i];
          count1++;
        }
        else
        {
          soo=soo+arr[i];
          count2++;
        }
    }
    printf("Sum of even is : %d",soe);
    printf("\nSum of odd is : %d",soo);
    printf("\nAverage of even no is : %f",soe/(float)count1);
    printf("\nAverage of odd no is : %f",soo/(float)count2);
    printf("\nAverage is : %f",(soe+soo)/(float)10);
    return 0;
}