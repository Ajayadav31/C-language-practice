//WAP to create an array of 10 intyeger and accept values from the user in it.now find out the largest element of an array.make sure your code should not change order of elements in the array
#include<stdio.h>
int main()
{
     int i,max;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter elements no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    /*
    for(max=arr[i-1];i>0;i--){
        if(max<arr[i-1]){
            max=arr[i];
        }
    }
    */
    printf("Maximum no is : %d",max);
    return 0;
}