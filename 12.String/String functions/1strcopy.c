#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10];
    char brr[10];
    printf("Enter a String : ");
    gets(arr);
    //brr=arr; //its wrong because array name represent its base address and left side os assignment is not constant
    //SOLUTION-->
    strcpy(brr,arr);
    printf("%s",brr);
    return 0;
}