#include<stdio.h>
int main()
{
    //Buffer(temp area in RAM) problem is started when we exchange place of grade and roll no
    //solution1->Always take charcter input at starting
    //solution2->use fflush(stdin) before taking input
    //solution3->give space before format specifier
    int roll;
    char grade;
    float per;
    printf("Enter your roll no : ");
    scanf("%d",&roll);
    printf("Enter your grade : ");
    //solution1
    //fflush(stdin);
    scanf(" %c",&grade);//solution2
    printf("Enter your percentage : ");
    scanf("%f",&per);
    //solution3
    //scanf("%d %c %f",&roll,&grade,&per);
    printf("Your grade,roll no,per is : %c %d %f",grade,roll,per);
    return 0;
}