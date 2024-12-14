//WAP to ask the about the cost price and selling price banana per dozen. calculate the profit or loss earned upon selling 25 bananas
#include <stdio.h>

int main() {
    int cost_p, selling_p;
    printf("Enter cost price and selling price per dozen: ");
    scanf("%d %d", &cost_p, &selling_p);

    // Cost and selling price for 25 bananas
    float cost_for_25 = (25.0 / 12) * cost_p;
    float selling_for_25 = (25.0 / 12) * selling_p;

    if (cost_for_25 < selling_for_25) {
        printf("Profit is: %.2f\n", selling_for_25 - cost_for_25);
    } else if (cost_for_25 > selling_for_25) {
        printf("Loss is: %.2f\n", cost_for_25 - selling_for_25);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
