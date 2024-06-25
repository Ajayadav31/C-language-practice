//write a function to print first N natural numbers
#include<stdio.h>
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
}
int main()
{
    print(5);
    return 0;

}