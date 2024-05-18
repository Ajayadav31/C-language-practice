#include<stdio.h>
int main()
{
    char str[10];
    char *p=str;
    printf("Enter a String : ");
    gets(p);
    while(*p!='\0')
    //we can also write 
    //while(*p) 
    {
        printf("\n%c",*(p));
        p++;
    }
    return 0;
}