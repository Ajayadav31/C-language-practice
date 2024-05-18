#include<stdio.h>
struct Student
{
    int roll;
    char grade;
    float per;
};

int main()
{
    struct Student s;
    printf("Enter roll no,grade,percentage :");
    scanf("%d %c %f",&s.roll,&s.grade,&s.per);
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",s.roll,s.grade,s.per);    
    return 0;
}