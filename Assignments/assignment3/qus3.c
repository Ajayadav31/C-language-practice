//WAP to input three character from the user and display charcters with their corresponding ASCII code
#include<stdio.h>
int main()
{
    char ch1,ch2,ch3;
    printf("Enter a character : ");
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    printf("ASCII code of %c is : %d",ch1,ch1);
    printf("\nASCII code of %c is : %d",ch2,ch2);
    printf("\nASCII code of %c is : %d",ch3,ch3);
    return 0;
}