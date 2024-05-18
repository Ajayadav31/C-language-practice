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
    printf("Length of String is : %d",p-str);
    //here pointe datatype is char which is 1 byte so divide by 1 not change answer
    //rule for substraction of addresses-->whenever we substract 2 addresses or 2 pointer then we never get the actual answer of that sub rather the compiler divides the actual result with the size of datatype of pointer and then gives the result
    return 0;
}