//WAP to take marks of 5 subject from the user. Assume marks are given out of 100 and passing marks is 33. now display whether the candidate passed the examination or failed
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter a marks of sub 1 : ");
    scanf("%d",&sub1);
    printf("Enter a marks of sub 2 : ");
    scanf("%d",&sub2);
    printf("Enter a marks of sub 3 : ");
    scanf("%d",&sub3);
    printf("Enter a marks of sub 4 : ");
    scanf("%d",&sub4);
    printf("Enter a marks of sub 5 : ");
    scanf("%d",&sub5);
    if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
        printf("Passed");
    else
        printf("Failed");
    return 0;
}