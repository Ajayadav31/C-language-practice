//WAP to find the greatest among three given numbers print number once if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number : ");
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",x>y  ?   x>z?x:z  :  y>z?y:z);
    return 0;
}