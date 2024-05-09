//WAP to create an array of 10 integers and accept value from the user in it.now saerch whether this no is present in the array or not.if it is present then display its position otherwise display the mesage ELEMENT NOT FOUND. assume that the array contains unique elements
#include<stdio.h>
int main()
{
     int i,target;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter elements no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter Target value : ");
    scanf("%d",&target);
    //linear search
    for(i=0;i<10;i++)
    {
        if(target==arr[i])
            break;
    }
    if(i==10)
        printf("Target not found");
    else
        printf("Target is at index : %d",i);
    return 0;
}