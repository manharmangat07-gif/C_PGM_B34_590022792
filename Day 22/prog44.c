#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of series = %.2f", sum);

    return 0;
}
