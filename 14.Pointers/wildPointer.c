#include<stdio.h>
int main()
{
    int a =10;
    int *p;
   // p=a;//can't assign a value to a pointer
    //(this code compile but may be run or not )
    *p=a;//WILD POINTER
    //address assign na hone par garbage aa jayega p me or agar jo garbage assign hua hai wo address free hai to run hoga or agar occupied hai to crash ho jayega
    //SEGMENTATION FAULT--> if garbage is out of range of base address or anything else than compiler give a famous error which is segmentation fault
    printf("%d",p);
    return 0;
}