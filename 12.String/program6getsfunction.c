#include<stdio.h>
int main()
{
    char str[10];
    printf("Enter a String : ");
   // scanf("%s",str);//this don't take multiple string
    //solution
    gets(str);
    printf("%s",str);
    return 0;
}