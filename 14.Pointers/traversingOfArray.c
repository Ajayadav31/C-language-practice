#include<stdio.h>
int main()
{
    char str[10];
    char *p=str;
    printf("Enter a String : ");
    gets(p);
    for(int i=0;*(p+i)!='\0';i++)
    //we can also write 
    //for(int i=0;*(p+i);i++)
    {
        printf("\n%c",*(p+i));
    }
    return 0;
}