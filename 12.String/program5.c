//WAP to accept string from the user and check whether it is PALINDROME or not
#include<stdio.h>
int main()
{
    int start,end;
    char str[10];
    printf("Enter a String : ");
    scanf("%s",str);
    for(end=0;str[end]!='\0';end++);//this semicolon will make the loop empty body
    int length=end;
    int mid=length/2;
    for(int start=0;start<end;start++)
    {
        end--;
        if(str[start]!=str[end]){
            printf("String is  not PALINDROME");
            break;   
        }
        if(str[start]==str[end])
        {
            if(mid==start){
                printf("String is PALINDROME");
            }
        }
    }

    return 0;
}