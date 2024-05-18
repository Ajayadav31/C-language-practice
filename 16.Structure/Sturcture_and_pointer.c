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
    p->roll=12;
    p->grade='A';
    p->per=87;
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",p->roll,p->grade,p->per);    
    return 0;
}