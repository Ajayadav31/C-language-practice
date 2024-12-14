//Write a program which takes the cost price and selling price of a product from the user. now calculate and print profit and loss percentage
#include<stdio.h>
int main()
{
    int sell_p,cost_p;
    printf("Enter cost price and selling price : ");
    scanf("%d %d",&cost_p,&sell_p);
    if(sell_p>cost_p)
        printf("Profit percentage : %.2f",(sell_p-cost_p)*100.0/cost_p);
    else if(sell_p<cost_p)
        printf("Profit percentage : %.2f",(cost_p-sell_p)*100.0/cost_p);
    else
        printf("No loss nor profit");
}