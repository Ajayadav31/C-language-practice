//modify the program 1 so that if the no is occuring multiple times then your program display all its position otherwise display the mesage ELEMENT NOT FOUND.
#include<stdio.h>
int main()
{
     int i,target,find=0;
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
        {
            printf("Target is at index : %d\n",i);
            find = 1;
        }
    }
    if(find==0)
        printf("Target not found");
    return 0;
}