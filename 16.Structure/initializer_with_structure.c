#include<stdio.h>
struct Student
{
    int roll;
    char grade;
    float per;
};

int main()
{
    struct Student s={11,'A',87};
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",s.roll,s.grade,s.per);    
    return 0;
}