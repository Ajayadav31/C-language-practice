//define a function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    {
        if(H%a==0&&H%b==0)
            return H;
    }
}
int main()
{
    int result=hcf(3,5);
    printf("%d",result);
    return 0;
}