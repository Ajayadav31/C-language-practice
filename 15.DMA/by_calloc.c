//WAP to create a DYNAMIC ARRAY of 'n' integer where 'n' is to be taken from the user. then ask the user to input values in that array and finally display the sum and average of all the lements of the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum,*p;
    printf("how many memory you required : ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    //calloc does initilize the allocated bloack with 0
    if(p==NULL)
    {
        printf("Insufficient memory");
        return 1;
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter a number %d : ",i+1);
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    //memory allocated my calloc() needs to be deallocated by calling free()
    free(p);//loacted in stdlib.h
    printf("Sum is : %d",sum);
    printf("\nAverage is : %f",(float)sum/n);
    return 0;
}