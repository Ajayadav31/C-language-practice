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
    struct Student *p;
    p=&s;
    printf("Enter roll no,grade,percentage :");
    scanf("%d %c %f",&p->roll,&p->grade,&p->per);
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",p->roll,p->grade,p->per);    
    return 0;
}