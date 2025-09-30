#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, first, last, swapNumber, place;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10; // last digit

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }

    first = n / pow(10, digits - 1); // first digit

    // Remove first and last digit from number
    temp = n % (int)pow(10, digits - 1);
    temp = temp / 10;

    // Place first digit at last and last digit at first
    swapNumber = last * pow(10, digits - 1) + temp * 10 + first;

    printf("Number after swapping first and last digit = %d", swapNumber);

    return 0;
}
