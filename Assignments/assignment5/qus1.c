//WAP to input a three digit  umber and display the sum of the digits
#include<stdio.h>
int main()
{
    /*
    int a,rem;
    int sum=0;
    printf("Enter a three Digit number : ");
    scanf("%d",&a);
    for(int i=0;i<3;i++)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("Addition of digits is : %d",sum);
    */


   //By using  only one variable
    int a;
    printf("Enter a three Digit number : ");
    scanf("%d",&a);
    printf("Sum is : %d",a/10/10+a/10%10+a%10);
    return 0;

}