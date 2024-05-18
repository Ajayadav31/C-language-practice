#include<stdio.h>
void display(int *);
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter elemnet no %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elemnets are :");
    display(arr);
    return 0;
}
void display(int *p)
{
    for(int i=0;i<5;i++)
    {
        printf("\n%d",*(p+i));
    }
}