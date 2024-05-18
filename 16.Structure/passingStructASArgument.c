#include<stdio.h>
struct Student
{
    int roll;
    char grade;
    float per;
};
void display(struct Student);
void accept(struct Student *);
int main()
{
    struct Student S;
    accept(&S);
    display(S);
    return 0;
}
void accept(struct Student *p)
{
    printf("Enter roll,grade,per : ");
    scanf("%d %c %f",&p->roll,&p->grade,&p->per);
}
void display(struct Student p)
{
    printf("%d %c %f",p.roll,p.grade,p.per);
}