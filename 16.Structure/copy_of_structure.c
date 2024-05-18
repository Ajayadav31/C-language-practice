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
    struct Student p;
    s.roll=12;
    s.grade='A';
    s.per=87;
    //1st way
   /*
    p.roll=s.roll;
    p.grade=s.grade;
    p.per=s.per;
    */
   //2nd way
    p=s;
    printf("roll no is : %d\ngrade is : %c\npercentage is : %f",s.roll,s.grade,s.per);   
    printf("\nroll no is : %d\ngrade is : %c\npercentage is : %f",p.roll,p.grade,p.per);    
    return 0;
}