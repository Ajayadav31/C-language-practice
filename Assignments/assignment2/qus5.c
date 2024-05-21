//WAP to ask the about the cost price and selling price banana per dozen. calculate the profit or loss earned upon selling 25 bananas
#include<stdio.h>
int main()
{
    int cost_p,selling_p;
    printf("Enter cost price and selling price: ");
    scanf("%d %d",&cost_p,&selling_p);
    if(cost_p<selling_p)
        printf("profit is : %f",((float)25/12)*selling_p);
    else
        printf("loss is : %f",((float)25/12)*selling_p);
    return 0;
}