//WAP to accept a string from the user and calculate and orint its length but you are allowed to use only two variable in your code and they are a character array and a pointer
#include<stdio.h>
int main()
{
    char str[10];
    char *p;
    p=str;
    printf("Enter a String : ");
    gets(p);
    while(*p)
    {
        p++;
    }
    printf("Length of String is : %d",(p-str)/sizeof(char));
    //here pointe datatype is char which is 1 byte so divide by 1 not change answer
    return 0;
}