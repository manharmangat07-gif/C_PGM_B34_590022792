#include <stdio.h>

int main() {
    float cost, selling, amount;

    printf("Enter Cost Price: ");
    scanf("%f", &cost);

    printf("Enter Selling Price: ");
    scanf("%f", &selling);

    if(selling > cost) {
        amount = selling - cost;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%", (amount / cost) * 100);
    }
    else if(cost > selling) {
        amount = cost - selling;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%", (amount / cost) * 100);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
