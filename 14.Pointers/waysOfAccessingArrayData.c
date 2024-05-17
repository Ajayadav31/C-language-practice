#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p;
    int i;
    p=arr;
    for(i=0;i<5;i++)
    {
        //Different ways to print this array data
        printf("\n%d",arr[i]);  //1st way
        /*printf("\n%d",i[arr]);  //2nd way
        printf("\n%d",*(arr+i));//3rd way
        printf("\n%d",*(i+arr));//4rd way
        printf("\n%d",p[i]);    //5rd way
        printf("\n%d",i[p]);    //6rd way
        printf("\n%d",*(p+i));  //7rd way
        printf("\n%d",*(i+p));  //8rd way
        printf("\n%d",*p++); */   //9rd way
    }
    return 0;
}