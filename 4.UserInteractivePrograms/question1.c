#include<stdio.h>
#include<math.h>
int main()
{
    int roll;
    char grade;
    float per;
    printf("Enter your grade : ");
    scanf("%c",&grade);
    printf("Enter your roll no : ");
    scanf("%d",&roll);
    printf("Enter your percentage : ");
    scanf("%f",&per);
    printf("Your grade,roll no,per is : %c %d %f",grade,roll,per);
    //formatting the output
    printf("\nYour grade,roll no,per is : %c %d %.2f",grade,roll,per);
    return 0;
}