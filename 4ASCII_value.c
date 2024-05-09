#include<stdio.h>
int main()
{
    //char a;// char or signed char is not support in case of Extended asciis because char has range -128 to127 and ascii value range is 0 to 255
    unsigned char a;
    printf("Enter a key : ");
    scanf("%c",&a);
    printf("ASCII value of %c is : %d",a,a);
    return 0;
}