#include<stdio.h>
int main()
{
    //this code compile and run but gives warning in c but in cpp this will not compile and run
    /*
    int a=10;
    char *p;
    p=&a;
    printf("Content of a is : %d",*p);
    printf("\nAddress of a is : %lu",p);
    */
    int a=256;
    char *p;
    p=&a;
    printf("Content of a is : %d",*p);
    printf("\nAddress of a is : %lu",p);
    //concept-->if we access value of variable through pointer then compiler take convert binary till bytes of datatype of pointer here binary of 256 is 100000000 and datatype of pointer is char which has 1bytes means 8 bit so compiler only take 00000000 which is 0
    return 0;
}