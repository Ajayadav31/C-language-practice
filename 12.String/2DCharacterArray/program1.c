//accepting multiple string and dispalying that string with hello 
#include<stdio.h>
int main()
{
    int i;
    char arr[5][10];
    for(i=0;i<5;i++)
    {
        printf("Enter string %d : ",i+1);
        gets(arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Hello %s\n",arr[i]);
    }
//is first input is RAVI and base adress of R is 1000 then output of following printf's--
    printf("%c\n",arr[0][0]);//R
    printf("%lu\n",&arr[0][0]);//base address 
    printf("%d\n",arr[0][0]);//ASCII value of R
    printf("%s\n",arr[0]);//RAVI
    printf("%lu\n",arr[0]);//base address
    printf("%c",arr[0]);//rotate 1000 because 1000 is out of range of ASCII and print that ascii value of character
    return 0;
}