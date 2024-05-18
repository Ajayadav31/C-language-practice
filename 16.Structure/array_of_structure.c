#include<stdio.h>
struct Student
{
    int roll;
    char grade;
    float per;
};

int main()
{
    struct Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter roll no,grade,percentage :");
        scanf("%d %c %f",&s[i].roll,&s[i].grade,&s[i].per);    
    }
    for(i=0;i<3;i++)
    {
        printf("\nDetails of student %d are :",i+1);
        printf("\nroll no is : %d\ngrade is : %c\npercentage is : %f",s[i].roll,s[i].grade,s[i].per);
    }
    return 0;
}