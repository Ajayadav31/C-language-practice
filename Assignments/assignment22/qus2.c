//Write a function to check whether a given number contains a given digit or not
#include<stdio.h>
int found(int num,int target)
{
    for(;num>0;num/=10)
    {
        if(num%10==target)
            return 1;//element found
    }
     return 0;//not found
}
int main()
{
    printf("%d",found(123,2));
    return 0;
}