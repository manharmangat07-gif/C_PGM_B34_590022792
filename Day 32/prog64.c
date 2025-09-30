#include <stdio.h>

int main() {
    long n, temp;
    int count[10] = {0};
    int i, max = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    temp = n;

    // Count frequency of each digit
    while(temp != 0) {
        count[temp % 10]++;
        temp = temp / 10;
    }

    // Find the digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit %d occurs most (%d times)", digit, max);

    return 0;
}
