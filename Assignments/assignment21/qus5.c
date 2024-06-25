//Write a function to print first N odd natural number
#include<stdio.h>
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            printf("\n%d",i);
    }
}
int main()
{
    print(5);
    return 0;

}