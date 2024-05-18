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
    s.roll=12;
    s.grade='A';
    s.per=87;
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",s.roll,s.grade,s.per);    
    return 0;
}
