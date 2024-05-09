//WAP to accept string from the user and count and print number of vowels in it
#include<stdio.h>
int main()
{
    int i,count=0;
    char str[10];
    printf("Enter a String : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }
    printf("no of vowels in string is : %d",count);
    return 0;
}