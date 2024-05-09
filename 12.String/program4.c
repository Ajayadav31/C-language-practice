//WAP to accept string from the user and print it in revere order
#include<stdio.h>
int main()
{
    int i,j;
    char str[10];
    printf("Enter a String : ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    for(j=i-1;j>=0;j--){
        printf("%c\n",str[j]);
    }
    return 0;
}